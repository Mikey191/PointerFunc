#include <iostream>
#include <string>
using namespace std;

string GetDataFromBD()//������� ������� ��������� ������������ �������� �� ���� ������
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}
//�� ����� ���������� ���������� �������, ������� ���������� �������� � ������ �������
//void ShowInfo(bool isFromBD )
//{
//	if (isFromBD) 
//	{
//		cout << DataFromBD() << endl;
//	}
//	else
//	{
//		cout << DataFromWebServer() << endl;
//	}
//}

string GetDataFromAstral()
{
	return "Data From Astral";
}

void ShowInfo(string(*foo)())//���������� ������� ��� string(*foo)() - ��� ��������� �� �������, 
							 //��� ����� �� ���������� � ���� ��������� ������� (���� ��� �������� �� ����������) ����� �������
{
	cout << foo() << endl;
}

void main()
{
	ShowInfo(GetDataFromBD);
	ShowInfo(GetDataFromWebServer);
	ShowInfo(GetDataFromAstral);
}