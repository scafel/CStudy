#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void ComputerStart(char *pathName)
{
	//�ҵ�ϵͳ�������� 
	char *szSubKey = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";
	HKEY hKey;

	//��ע��������� 
	int k = RegOpenKeyExA(HKEY_CURRENT_USER, szSubKey, 0, KEY_ALL_ACCESS, &hKey);
	if (k == ERROR_SUCCESS)
	{
		//���һ����Key,������ֵ��MyStartΪ���������ƣ��Զ������ã�
		RegSetValueEx(hKey, "MyStart", 0, REG_SZ, (BYTE *)pathName, strlen(pathName));
		//�ر�ע���
		RegCloseKey(hKey);
		printf("���óɹ�\n");
	}
	else
	{
		printf("����ʧ��  error:%d\n", k);
	}
}