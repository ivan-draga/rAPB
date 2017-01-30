#ifndef DI_WRAP_H
#define DI_WRAP_H

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <assert.h>
#include <list>

#ifdef DI_WRAPPER8
#define DIRECTINPUT_VERSION 0x0800
#else
#define DIRECTINPUT_VERSION 0x0700
#endif

#include "dinput.h"

#ifdef DI_WRAPPER8
typedef IDirectInputDevice8A	DIDeviceClass;
typedef LPDIRECTINPUTDEVICE8A	DIDeviceStructPtr;
typedef IDirectInput8A			DIClass;
#else
typedef IDirectInputDevice7A	DIDeviceClass;
typedef LPDIRECTINPUTDEVICEA	DIDeviceStructPtr;
typedef IDirectInput7A			DIClass;
#endif

#ifndef HID_USAGE_PAGE_GENERIC
#define HID_USAGE_PAGE_GENERIC 1
#endif
#ifndef HID_USAGE_GENERIC_MOUSE
#define HID_USAGE_GENERIC_MOUSE 2
#endif

class DI_HID_Object;
class DI_HID_DeviceBase;
class DI_HID_WrapperBase;
class DI_HID_MouseEvent;

typedef std::list< DI_HID_Object >			ObjectList;
typedef std::list< DI_HID_DeviceBase * >	DeviceList;
typedef std::list< DIDEVICEINSTANCEA >		DeviceInstanceList;
typedef std::list< DI_HID_WrapperBase * >	WrapperList;
typedef std::list< DI_HID_MouseEvent >		MouseEventList;

typedef HRESULT ( WINAPI * DIRECTINPUTCREATEAPROC )( HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA * ppDI, LPUNKNOWN punkOuter );
typedef HRESULT ( WINAPI * DIRECTINPUT8CREATEPROC )( HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID *ppvOut, LPUNKNOWN punkOuter );

typedef enum {

	type_not_valid = -1,

	type_axis_x,
	type_axis_y,
	type_axis_z,
	type_button_1,
	type_button_2,
	type_button_3,
	type_button_4,
	type_button_5,
	type_button_6,
	type_button_7,

	type_list_size
};

class DI_HID_MouseEvent : public RAWMOUSE {

private:

	DWORD										eventTime;
	int											eventType;

public:
												DI_HID_MouseEvent( ) { this->eventType = type_not_valid; }
												DI_HID_MouseEvent( const DI_HID_MouseEvent & other ) { memcpy( this, &other, sizeof( DI_HID_MouseEvent ) ); }
												DI_HID_MouseEvent( const RAWMOUSE & rawMouse ) { memcpy( this, &rawMouse, sizeof( RAWMOUSE ) ); }

	void										Clear( ) { memset( this, 0, sizeof( DI_HID_MouseEvent ) ); }

	void										SetTime( DWORD ticks ) { this->eventTime = ticks; }
	DWORD										GetTime( ) const { return this->eventTime; }

	void										SetType( int obj_type ) { this->eventType = obj_type; }
	int											GetType( ) const { return this->eventType; }

	bool										Wrap( DI_HID_MouseEvent & obj_wrap, int obj_type );
};

class DI_HID_Object : public DIDEVICEOBJECTINSTANCEA {

private:

	LONG										dataVar;
	int											dataSize;
	DWORD										dataTime;
	int											dataType;

public:

												DI_HID_Object( ) { memset( this, 0, sizeof( DI_HID_Object ) ); this->dwSize = sizeof( DIDEVICEOBJECTINSTANCEA ); this->dataType = type_not_valid; }
	
	void										SetData( LONG data ) { dataVar = data; }
	LONG										GetData( ) const { return dataVar; }

	void										SetSize( int size ) { this->dataSize = size; }
	int											GetSize( ) const { return dataSize; }

	void										SetTime( DWORD ticks ) { this->dataTime = ticks; }
	DWORD										GetTime( ) const { return this->dataTime; }

	void										SetType( int obj_type ) { this->dataType = obj_type; }
	int											GetType( ) const { return this->dataType; }
};

class DI_HID_DeviceBase : public DIDeviceClass {

private:

	ULONG										refCount;
	DIDeviceClass *								diDevice;
	DWORD										seqNumber;
	DWORD										initTime;
	ObjectList									objects;
	ObjectList									dataFormat;
	HWND										windowHandle;
	RECT										windowRect;
	bool										exclusiveMode;
	bool										foregroundMode;
	bool										captureDisabled;
	bool										isAcquired;
	bool										absoluteAxis;

public:

												DI_HID_DeviceBase( );
												~DI_HID_DeviceBase( );

	DIDeviceClass **							GetDIPtr( ) { return &diDevice; }
	DI_HID_Object *								FindType( int obj_type );
	DI_HID_Object *								FetchEvent( );
	bool										AlreadyInFormatList( const DI_HID_Object & obj );
	void										AddToFormatList( const DI_HID_Object & obj, const DIOBJECTDATAFORMAT & obj_format );
	void										AdjustExclusiveMode( bool disable_capture );

	// IUnknown
	virtual HRESULT WINAPI						QueryInterface( const IID & r_iid, LPVOID * p_obj );
	virtual ULONG WINAPI						AddRef( );
	virtual ULONG WINAPI						Release( );

	// DirectInputDevice2A
	virtual HRESULT WINAPI						GetCapabilities( LPDIDEVCAPS dev_caps );
	virtual HRESULT WINAPI						EnumObjects( LPDIENUMDEVICEOBJECTSCALLBACKA callback, LPVOID cb_userdata, DWORD flags );
	virtual HRESULT WINAPI						GetProperty( const IID & r_iid, LPDIPROPHEADER dip );
	virtual HRESULT WINAPI						SetProperty( const IID & r_iid, LPCDIPROPHEADER dip );
	virtual HRESULT WINAPI						Acquire( );
	virtual HRESULT WINAPI						Unacquire( );
	virtual HRESULT WINAPI						GetDeviceState( DWORD buf_size, LPVOID buf_data );
	virtual HRESULT WINAPI						GetDeviceData( DWORD buf_size, LPDIDEVICEOBJECTDATA buf_data, LPDWORD out_size, DWORD flags );
	virtual HRESULT WINAPI						SetDataFormat( LPCDIDATAFORMAT data_format );
	virtual HRESULT WINAPI						SetEventNotification( HANDLE h_event );
	virtual HRESULT WINAPI						SetCooperativeLevel( HWND h_wnd, DWORD level );
	virtual HRESULT WINAPI						GetObjectInfo( LPDIDEVICEOBJECTINSTANCEA obj_inst, DWORD obj, DWORD how );
	virtual HRESULT WINAPI						GetDeviceInfo( LPDIDEVICEINSTANCEA info );
	virtual HRESULT WINAPI						RunControlPanel( HWND h_wnd, DWORD flags );
	virtual HRESULT WINAPI						Initialize( HINSTANCE inst, DWORD version, const IID & r_iid );
	virtual HRESULT WINAPI						CreateEffect( const IID & r_iid, LPCDIEFFECT fx, LPDIRECTINPUTEFFECT * di_fx, LPUNKNOWN p_unk );
	virtual HRESULT WINAPI						EnumEffects( LPDIENUMEFFECTSCALLBACKA callback, LPVOID cb_userdata, DWORD fx_type );
	virtual HRESULT WINAPI						GetEffectInfo( LPDIEFFECTINFOA fx, const IID & r_iid );
	virtual HRESULT WINAPI						GetForceFeedbackState( LPDWORD out );
	virtual HRESULT WINAPI						SendForceFeedbackCommand( DWORD flags );
	virtual HRESULT WINAPI						EnumCreatedEffectObjects( LPDIENUMCREATEDEFFECTOBJECTSCALLBACK callback, LPVOID cb_userdata, DWORD flags );
	virtual HRESULT WINAPI						Escape( LPDIEFFESCAPE esc );
	virtual HRESULT WINAPI						Poll( );
	virtual HRESULT WINAPI						SendDeviceData( DWORD buf_size, LPCDIDEVICEOBJECTDATA buf_data, LPDWORD out_size, DWORD flags );

	// IDirectInputDevice7A
	virtual HRESULT WINAPI						EnumEffectsInFile( LPCSTR file_name, LPDIENUMEFFECTSINFILECALLBACK callback, LPVOID cb_userdata, DWORD flags );
	virtual HRESULT WINAPI						WriteEffectToFile( LPCSTR file_name, DWORD count, LPDIFILEEFFECT data, DWORD flags );

#ifdef DI_WRAPPER8

	// IDirectInputDevice8A
	virtual HRESULT WINAPI						BuildActionMap( LPDIACTIONFORMATA action_info, LPCSTR user_name, DWORD flags );
	virtual HRESULT WINAPI						SetActionMap( LPDIACTIONFORMATA action_info, LPCSTR user_name, DWORD flags );
	virtual HRESULT WINAPI						GetImageInfo( LPDIDEVICEIMAGEINFOHEADERA image_info );

#endif
};

class DI_HID_WrapperBase {

private:

	ULONG										refCount;
	DIClass *									diInterface;
	DeviceList									devices;

public:

												DI_HID_WrapperBase( );
												~DI_HID_WrapperBase( );

	static BOOL	CALLBACK						EnumDevicesCallback( LPCDIDEVICEINSTANCEA dev_inst, LPVOID cb_userdata );

	DIClass **									GetDIPtr( ) { return &diInterface; }
	DIClass &									GetDI( ) { return *diInterface; }
	DI_HID_DeviceBase *							AllocDevice( );
	void										SendAdjustExclusiveMode( bool disable_capture );

	// IUnknown
	virtual HRESULT WINAPI						QueryInterface( const IID & r_iid, LPVOID * p_obj );
	virtual ULONG WINAPI						AddRef( );
	virtual ULONG WINAPI						Release( );

	// DirectInput7A
	virtual HRESULT WINAPI						CreateDevice( const GUID & r_guid, DI_HID_DeviceBase ** di_device, LPUNKNOWN p_unk );
	virtual HRESULT WINAPI						EnumDevices( DWORD dev_type, LPDIENUMDEVICESCALLBACKA callback, LPVOID cb_userdata, DWORD flags );
	virtual HRESULT WINAPI						GetDeviceStatus( const GUID & r_guid );
	virtual HRESULT WINAPI						RunControlPanel( HWND win_handle, DWORD flags );
	virtual HRESULT WINAPI						Initialize( HINSTANCE inst_handle, DWORD version );
	virtual HRESULT WINAPI						FindDevice( const GUID & r_guid, LPCSTR dev_name, LPGUID dev_guid );

#ifdef DI_WRAPPER8

	// DirectInput8A
	virtual HRESULT WINAPI						EnumDevicesBySemantics( LPCSTR user_name, LPDIACTIONFORMATA action_format, LPDIENUMDEVICESBYSEMANTICSCBA callback, LPVOID cb_userdata, DWORD flags );
	virtual HRESULT WINAPI						ConfigureDevices( LPDICONFIGUREDEVICESCALLBACK callback, LPDICONFIGUREDEVICESPARAMSA device_config, DWORD flags, LPVOID ref_data );

#endif
};

class WrapperSystem {

private:

	static HMODULE								dinputDll;
	static WrapperList							wrappers;
	static HHOOK								hookHandleGetMessage;
	static HHOOK								hookHandleCallWnd;
	static bool									hidInitialized;
	static HANDLE								wrapperModule;
	static DI_HID_MouseEvent					button6ShutdownEvent;
	static DI_HID_MouseEvent					button7ShutdownEvent;
	static DWORD								lastEventTime;
	static LONG									immediateBuffer[ type_list_size ];
	static bool									bufferedMode;

public:

	static MouseEventList						eventList;

#ifdef DI_WRAPPER8
	static DIRECTINPUT8CREATEPROC				DirectInput8Create;
#else
	static DIRECTINPUTCREATEAPROC				DirectInputCreateA;
#endif

	static LRESULT CALLBACK						WindowHookFuncGetMessage( int nCode, WPARAM wParam, LPARAM lParam );
	static LRESULT CALLBACK						WindowHookFuncCallWnd( int nCode, WPARAM wParam, LPARAM lParam );

	static bool									Init( HANDLE mod_hnd );
	static void									Shutdown( );
	static void									InitHID( HWND & h_wnd );

	static void									SetBufferedMode( bool state ) { bufferedMode = state; if( !bufferedMode ) eventList.clear( ); }
	static bool									GetBufferedMode( ) { return bufferedMode; }
	static void									PushEvent( const DI_HID_MouseEvent & mouse_event ) { if( bufferedMode ) eventList.push_back( mouse_event ); }
	static LONG &								ImmediateBuffer( int index ) { return immediateBuffer[ index ]; }

	static DI_HID_WrapperBase *					AllocWrapper( );
};

#endif