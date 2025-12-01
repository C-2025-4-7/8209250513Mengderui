#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三条边长:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double m = a + b + c;
		cout << "可以构成三角形，周长为：" << m << endl;
		if (a == b || b == c || c == a) {
			cout << "三角形为等腰三角形" << endl;
		}
		else {
			cout << "三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "输入的不是三角形" << endl;
	}
	return 0;
}