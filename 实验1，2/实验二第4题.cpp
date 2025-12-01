/*#include <iostream>
using namespace std;
int main()
{
	double num1, num2, num3;
	char op;
	cout << "输入运算公式 " << endl;
	cin >> num1 >> op >> num2;
	switch (op)
	{
	case '+':
		num3 = num1 + num2;
		break;
	case'-':
		num3 = num1 - num2;
		break;
	case'*':
		num3 = num1 * num2;
		break;
	case'/':
		if (num2 != 0)
		{
			num3 = num1 / num2;
			break;
			return 4;
		}
		else if (num2 == 0) {
			cout << "答案不存在" << endl;
			break;
			return 1;
		}
	case'%':
		if (num1 != int(num1) || num2 != int(num2))
		{
			cout << "错误" << endl;
			return 2;
		}
		if (num2 = 0)
		{
			cout << "错误" << endl;
		}
		num3 = (int)num1 % (int)num2;
		break;
		return 3;
	}
	cout << "运算结果" << num1 << " " << op << num2 << " " << '=' << fixed << num3;
	return 0;
	}*/