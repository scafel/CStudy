#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void ComputerStart(char *pathName)
{
	//找到系统的启动项 
	char *szSubKey = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";
	HKEY hKey;

	//打开注册表启动项 
	int k = RegOpenKeyExA(HKEY_CURRENT_USER, szSubKey, 0, KEY_ALL_ACCESS, &hKey);
	if (k == ERROR_SUCCESS)
	{
		//添加一个子Key,并设置值，MyStart为启动项名称，自定义设置；
		RegSetValueEx(hKey, "MyStart", 0, REG_SZ, (BYTE *)pathName, strlen(pathName));
		//关闭注册表
		RegCloseKey(hKey);
		printf("设置成功\n");
	}
	else
	{
		printf("设置失败  error:%d\n", k);
	}
}