#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#define FOR(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main()
{
	int size;
	cin >> size;
	vector<ll >Arr;
	FOR(i, size) {
		int value;
		cin >> value;
		Arr.push_back(value);
	}
	sort(Arr.begin(), Arr.end());
	int querie;
	cin >> querie;
	while (querie--) {
		int value, cnt = 1;
		cin >> value;
		vector<ll>::iterator it;
		it = lower_bound(Arr.begin(), Arr.end(), value);
		if (Arr[it - Arr.begin()] == value)
		     cout << "Yes " << (it - Arr.begin() + 1) << endl;
		else
		     cout << "No " << (it - Arr.begin() + 1) << endl;
	}
	return 0;
}
