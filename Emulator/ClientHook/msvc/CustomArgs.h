using namespace System;

class CustomArgs
{
public:
	static void ProcessArgs(array<String^>^ args);
	static bool allowshadermod;
	static bool disableini;
	static bool disableeulatos;
	static bool fixeditorcrash;
	static bool offline;
	static bool sdkdump;
	static bool advlog;
};

/*

Parameter explanation:

+allowshadermod -> disables "Update_ShaderFile()" which resets the "UberPostProcessVertexPixelShader.usf" to default content on start

+disableinifileupdates -> disables "Update_GameFiles()" which resets the "APBGame.ini", "DefaultGame.ini" and "EnvironmentGame.ini" to default content on start

+disableeulatosupdates -> disables "Update_EULAandTOS()" which edits all "EULA.*" and "TOS.*" to custom content

+offline -> allows you to start the game without having to connect to main/client server

+sdkdump -> allows usage of END key which, when pressed, dumps the SDK from memory

+advlog -> enables advanced logging of detoured functions from "CXmlLite.cpp" and "WS2_32.cpp"

+fixeditorcrash -> enables "Patch_EditorCrash()" that patches certain editor crashes (NOTE: by default it is disabled to avoid possible problems when not using editor mode)

+nop=0xADDRESS -> installs NOP patch on ADDRESS (0x must be included)

+ret=0xADDRESS -> installs RETN patch on ADDRESS (0x must be included)

+str=0xADDRESS=STRING -> installs chosen STRING on ADDRESS (0x must be included, and '=' are also important)

*/