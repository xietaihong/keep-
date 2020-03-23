/*
圆柱体
v:体积 h:高 s;底面积 r:底面半径 c:底面周长
(1)侧面积=底面周长×高      (2)表面积=侧面积+底面积×2
(3)体积=底面积×高         （4）体积＝侧面积÷2×半径*/
#include <iostream>
#include <windows.h>
using namespace std;
#define PI 3.1415926

int main(void){
	float r;
	float high;//圆柱体的高
	float cs;//侧面积
	float s;//底面积
	float v;//圆柱体的体积
	cout << "请输入圆柱体的底面半径";
	cin >> r;
	cout << "请输入圆柱体的高";
	cin >> high;
	cs = 2*PI*r*high;
	v = cs*high;
	
	cout << "圆柱体的侧面积:" << cs << endl;
	cout << "圆柱体的体积:" << v << endl;
	cout.precision(4);
	system("pause");
	return 0;




}