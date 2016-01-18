#include "stdafx.h"
#include "Auth.h"

int Auth::PerformLogin(String ^token)
{
	/*char query[256];
	sprintf(query, "UPDATE `accounts` SET `extrn_login` = '1' WHERE `token` = '%s'", token);
	MYSQL mysql;
	int res = 0;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, "localhost", "root", NULL, "apbdb",0,NULL,0)) res = mysql_query(&mysql, query);
	else res = -1;
	return res;*/
	return 0;
}

int Auth::PerformLogout(String ^token)
{
	//get this working for beta release
	/*char query[256];
	sprintf(query, "UPDATE `accounts` SET `extrn_login` = '0' WHERE `token` = '%s'", token);
	MYSQL mysql;
	int res = 0;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, "localhost", "root", NULL, "apbdb",0,NULL,0)) res = mysql_query(&mysql, query);
	else res = -1;
	return res;*/
	return 0;
}