#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll cnt = 0, Max = 0;
	ll test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		int num;
		cin >> num;
		if (num > Max)
		{
			cnt = 1;
			Max = num;
		}
		else if (num == Max)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
