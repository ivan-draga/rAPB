#pragma once

class Account
{
private:
	int id;
	char* encryptionKey;
public:
	Account(int id, char* encryptionKey);
	void SetId(int id);
	int GetId();
	void SetEncryptionKey(char* encryptionKey);
	char* GetEncryptionKey();
};