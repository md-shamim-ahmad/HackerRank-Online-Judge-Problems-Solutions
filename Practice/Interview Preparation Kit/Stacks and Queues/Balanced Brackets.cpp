#include<stack>
#include<cstring>
#include<sstream>
#include<iostream>
#define FOR(i,length) for(int i=0; i < length; i++)
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        string parentheses;
        cin >> parentheses;
        stack<char>str;
        FOR(i,parentheses.size())
        {
            if (!str.empty() && parentheses[i] == ')' && str.top() == '(')
                str.pop();
            else if (!str.empty() && parentheses[i] == ']' && str.top() == '[')
                str.pop();
            else if (!str.empty() && parentheses[i] == '}' && str.top() == '{')
                str.pop();
            else
                str.push(parentheses[i]);
        }
        if (str.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
