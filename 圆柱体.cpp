/*
Բ����
v:��� h:�� s;����� r:����뾶 c:�����ܳ�
(1)�����=�����ܳ�����      (2)�����=�����+�������2
(3)���=���������         ��4��������������2���뾶*/
#include <iostream>
#include <windows.h>
using namespace std;
#define PI 3.1415926

int main(void){
	float r;
	float high;//Բ����ĸ�
	float cs;//�����
	float s;//�����
	float v;//Բ��������
	cout << "������Բ����ĵ���뾶";
	cin >> r;
	cout << "������Բ����ĸ�";
	cin >> high;
	cs = 2*PI*r*high;
	v = cs*high;
	
	cout << "Բ����Ĳ����:" << cs << endl;
	cout << "Բ��������:" << v << endl;
	cout.precision(4);
	system("pause");
	return 0;




}