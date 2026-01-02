/*#include <iostream>
using namespace std;
int main()
{
	int uniquenumbers[10];
	int uniquecount = 0;
	int num;
	cout << "请输入10个整数：" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		bool isExist = false;
		for (int j = 0; j < uniquecount; j++)
		{
			if (uniquenumbers[j] == num) {
				isExist = true;
				break;
			}
		}
		if (!isExist) {
			uniquenumbers[uniquecount] = num;
			uniquecount++;
		}
		cout << "其中不同的数字为：" << endl;
		for (int i = 0; i < uniquecount; i++) {
			cout << uniquenumbers[i] << " ";
		}
		cout << endl;

		return 0;
	}
}*/