/*#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main() {
    int n;
    cout << "请输入数组的元素个数：";
    cin >> n;
    if (n <= 0) {
        cout << "数组长度必须为正整数！" << endl;
        return 1;
    }
    int* arr = new int[n];
    cout << "\n动态数组的指针地址：" << arr << endl;
    cout << "请输入" << n << "个整数（空格分隔）：";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        cout << "arr[" << i << "] 的地址：" << &arr[i] << "，值：" << arr[i] << endl;
    }
    cout << "\n排序前的数组（指针方式输出）：";
    int* p = arr;
    while (p < arr + n) {
        cout << *p << " ";
        p++;  
    }
    cout << endl;
    delete[] arr;
    arr = nullptr;  
    cout << "\n数组内存已释放，指针置空后地址：" << arr << endl;

    return 0;
}*/