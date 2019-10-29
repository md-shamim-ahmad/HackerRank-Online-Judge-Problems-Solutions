#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int n, x, a, b;
	cin >> n;
	vector<int>Arr;
    Arr.push_back(0);
	while (n--)
	{
		ll num;
		cin >> num;
		Arr.push_back(num);
	}
	cin >> x >> a >> b;
    Arr.erase(Arr.begin()+x);
	Arr.erase(Arr.begin() + a, Arr.begin() + b);
	cout << Arr.size()-1 << endl;
	for (int i = 1; i < Arr.size(); i++)
		cout << Arr[i] << " ";
	return 0;
}
