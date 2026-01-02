/*#include <iostream>
#include <iomanip> 
using namespace std;
void bubbleSort(double arr[], int listSize)
{
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			double temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			changed = true;

		}
	} while (changed);
}
int main() {
	const int SIZE = 10;
	double numbers[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cin >> numbers[i];
	}
	bubbleSort(numbers, SIZE);
	cout << "排序后的数组（升序）：" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << fixed << setprecision(2) << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}*/

