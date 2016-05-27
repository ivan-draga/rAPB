@ECHO OFF

START "Client Server" CALL "ClientServer.exe"

timeout /T 1

START "Lobby Server" CALL "LobbyServer.exe"

timeout /T 1

START "World Server" CALL "WorldServer.exe"

timeout /T 1

START "District Server" CALL "DistrictServer.exe"
