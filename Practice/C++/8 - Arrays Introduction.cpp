#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size;
	cin >> size;
	vector<int>arr;
	while (size--)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	for (int i = arr.size() - 1; i >= 0; i--)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
