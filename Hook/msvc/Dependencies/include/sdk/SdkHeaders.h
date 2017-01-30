/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net	
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#define GObjects			0x1294F7AC
#define GNames				0x1295FF90

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x10 ]; 
	wchar_t			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( wchar_t* FindName ) 
	{ 
		static TArray< int > NameCache; 

		for ( int i = 0; i < NameCache.Count; ++i ) 
		{ 
		if ( ! wcscmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) 
			{ 
				Index = NameCache ( i ); 
				return; 
			} 
		} 

		for ( int i = 0; i < this->Names()->Count; ++i ) 
		{ 
			if ( this->Names()->Data[ i ] ) 
			{ 
				if ( ! wcscmp ( this->Names()->Data[ i ]->Name, FindName ) ) 
				{ 
					NameCache.Add ( i ); 
					Index = i; 
				} 
			} 
		} 
	}; 

	static TArray< FNameEntry* >* Names() 
	{ 
		return (TArray< FNameEntry* >*) GNames; 
	}; 

	wchar_t* GetName() 
	{ 
		return this->Names()->Data[ Index ]->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\APBUserInterface_structs.h"
#include "SDK_HEADERS\APBUserInterface_classes.h"
#include "SDK_HEADERS\APBUserInterface_f_structs.h"
#include "SDK_HEADERS\APBUserInterface_functions.h"
#include "SDK_HEADERS\APBGame_structs.h"
#include "SDK_HEADERS\APBGame_classes.h"
#include "SDK_HEADERS\APBGame_f_structs.h"
#include "SDK_HEADERS\APBGame_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\Editor_structs.h"
#include "SDK_HEADERS\Editor_classes.h"
#include "SDK_HEADERS\Editor_f_structs.h"
#include "SDK_HEADERS\Editor_functions.h"
#include "SDK_HEADERS\UnrealEd_structs.h"
#include "SDK_HEADERS\UnrealEd_classes.h"
#include "SDK_HEADERS\UnrealEd_f_structs.h"
#include "SDK_HEADERS\UnrealEd_functions.h"
#include "SDK_HEADERS\AKAudio_structs.h"
#include "SDK_HEADERS\AKAudio_classes.h"
#include "SDK_HEADERS\AKAudio_f_structs.h"
#include "SDK_HEADERS\AKAudio_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\APBEditor_structs.h"
#include "SDK_HEADERS\APBEditor_classes.h"
#include "SDK_HEADERS\APBEditor_f_structs.h"
#include "SDK_HEADERS\APBEditor_functions.h"
