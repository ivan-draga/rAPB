@ECHO OFF

START "Client Server" CALL "ClientServer.exe"

timeout /T 5

START "Lobby Server" CALL "LobbyServer.exe"

timeout /T 5

START "World Server" CALL "WorldServer.exe"

timeout /T 5

START "District Server" CALL "DistrictServer.exe"
