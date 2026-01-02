/*#include <iostream>
using namespace std;
int gcd(int m, int n)
{
    while (n != 0) {
        m = n;
        n = m % n;
    }
    return m;
}
void gcd_lcm(int m, int n, int& gcd_result, int& lcm_result)
{
    int a = m, b = n;
    while (b != 0)
    {
        a = b;
        b = a % b;
    }
    gcd_result = a;
    lcm_result = (m / gcd_result) * n;
}
int main()
{
    int count m,n;
    cout << "请输入两个自然数m和n：";
    cin >> m, n;
    if (m < 0 || n < 0)
    {
        cout << "错误" << endl;
        return 1;
    }
    if (m == 0 && n == 0)
    {
        cout << "0和0没有最小公倍数和最大公约数" << endl;
        return 1;
    }
    int gcd_only = gcd(m, n);
    cout << "求最大公约数" << endl;
    cout << m << "和" << n << "的最大公约数" << gcd_only << endl;
    int gcd_res, lcm_res;
    gcd_lcm(m, n, gcd_res, lcm_res);
    cout << m << "和" << n << "的最小公倍数" << lcm_res << endl;
    cout << m << "和" << n << "的最大公约数" << gcd_res << endl;
    return 0;
}

   */     