#include <cstring>
#include<iostream>
using namespace std;

void answer(string, int);

int main() {
	int test_case;
	cin >> test_case;
	while (test_case--) {
		string str;
		cin >> str;
		answer(str, str.size());
	}
	return 0;
}

void answer(string s, int len)
{
	if (s == "1" || s == "4" || s == "78")
		cout << "+\n";
	else if (s[len - 1] == '5' && s[len - 2] == '3')
		cout << "-\n";
	else if (s[0] == '9' && s[len - 1] == '4')
		cout << "*\n";
	else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
		cout << "?\n";
	else
		cout << "+\n";
}
