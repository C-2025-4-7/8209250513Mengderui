/*#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
	void Settime(int h, int m, int s) {
		//输入设定的时间 
		hour = h;
		minute = m;
		sec = s;
	}
	void Showtime() {

		cout << hour << ":" << minute << ":" << sec << endl;
	}
	void Inputtime(){
	
		cin >> hour >> minute >> sec;
	
	}
};

int main()
{
	Time tl;           //定义t1为Time类对象
	tl.Showtime();
	tl.Inputtime();
	return 0;
}
//请分析什么成员应指定为公用的?什么成员应指定为私有的?：需要被外界调用的成员函数
//什么成员应指定为私有?:类内的数据成员和只被类使用的函数
//什么函数最好放在类中定义?简单的函数
//什么函数最好放在类中定义?复杂的函数
*/