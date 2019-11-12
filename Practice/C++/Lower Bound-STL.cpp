#include<iostream>
#include<vector>
#include<algorithm>
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
		bool ans = false;
		int value, cnt = 1;
		cin >> value;
		FOR(i, Arr.size()) {
			if (Arr[i] == value) {
				ans = true;
				break;
			}
			else if (Arr[i] > value) {
				ans = false;
				break;
			}
			else
				cnt++;
		}
		if (ans)
			cout << "Yes " << cnt << endl;
		else
			cout << "No " << cnt << endl;
	}
	return 0;
}
