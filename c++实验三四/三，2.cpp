/*#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
	{
		return false;
	}
	for (int i; i <= num; i++, i++)
		if (num % i == 0) {
			return false;
		}
		return true;
}
int main()
{
	int count = 0;
	int num = 2;
	cout << "Ç°200¸öËØÊý£º" << endl;
	while (count < 200)
	{
		if (is_prime(num))
		{
			count++;
			cout<<num<<endl;
		}
		num++;
	}
	return 0;
}*/