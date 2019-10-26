#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char s;
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 << str2 << endl;
    s = str1[0];
    str1[0] = str2.at(0);
    str2[0] = s;
    cout << str1 << " " << str2 << endl;
    return 0;
}
