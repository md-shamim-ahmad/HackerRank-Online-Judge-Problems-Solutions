#include <cmath>
#include <cstdio>
#include <vector>
#include<iterator>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    vector<ll>Arr;
    while (size--)
    {
        ll value;
        cin >> value;
        Arr.push_back(value);
    }
    sort(Arr.begin(), Arr.end());
    cout << Arr[0];
    Arr.erase(Arr.begin());
    for (vector<ll>::iterator i = Arr.begin(); i < Arr.end(); i++)
        cout << " " << *i;
    return 0;
}
