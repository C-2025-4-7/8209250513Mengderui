/*#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	cout << setw(12) << "Celsius" << setw(15) << "Fahrenheit" << "|   " << setw(15) << "Fahrenheit" << setw(12) << "Celsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	for (int i = 0; i < 10; i++)
	{
		double fah_result = celsius_to_fah(cel);
		double cel_result = fahrenheit_to_cels(fah);
		cout << setw(12) << cel          // 摄氏温度（左对齐，占12字符）
			<< setw(15) << fah_result   // 转换后的华氏温度（占15字符）
			<< "|   "
			<< setw(15) << fah          // 华氏温度（占15字符）
			<< setw(12) << cel_result   // 转换后的摄氏温度（占12字符）
			<< endl;
		cel = cel - 1.0;
		fah = fah - 10.0;
	}
	return 0;
}*/