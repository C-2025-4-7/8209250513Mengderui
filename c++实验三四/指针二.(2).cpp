/*#include <iostream>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString)
{
    if (hexString == nullptr || hexString[0] == '\0') 
    {
        return 0;
    }

    int d = 0;
    int i = 0;
    while (hexString[i] != '\0') 
    {
        char c = toupper(hexString[i]);
        int digit;
        if (isdigit(c))
        {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F')
        {
            digit = 10 + (c - 'A');
        }
        else 
        {
            cout << "错误：字符串包含非法的16进制字符 '" << hexString[i] << "'" << endl;
            return 0;
        }
        d = d * 16 + digit;
        i++;
    }

    return d;
}
int main()
{
    char hexStr[100];
    cout << "请输入一个16进制字符串：";
    cin >> hexStr;
    int result = parseHex(hexStr);
    cout << "16进制字符串 \"" << hexStr << "\" 转换为10进制的结果是：" << result << endl;
   
    return 0;
}*/