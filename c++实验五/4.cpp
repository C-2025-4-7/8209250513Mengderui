/*#include <iostream>
using namespace std;
class Student {
public:
	int id;
	float score;
	Student(int i = 0, float s = 0.0)
	{
		id = 0;
		s = 0.0;
	}
};
void max(Student* stuArr, int len) {
	if (len <= 0) { 
		cout << "学生数组为空！" << endl;
		return;
	}
	Student* pMax = stuArr;
	for (int i = 1; i < len; i++) {
		if ((stuArr + i)->score > pMax->score) {
			pMax = stuArr + i;
		}
	} 
	cout << "最高成绩：" << pMax->score << endl;
	cout << "对应学号：" << pMax->id << endl;
}

int main() {
	Student stuArray[5] = {
Student(1, 85.8),
Student(2, 94.0),
Student(3, 86.2),
Student(4, 96.5), 
Student(5, 84.0)
	}; 
	max(stuArray, 5);

	return 0;
}*/