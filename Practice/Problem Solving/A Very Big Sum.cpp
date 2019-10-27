#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    ll sum=0;
    while(n--)
    {
        ll num;
        cin>>num;
        sum+=num;
    }
    cout<<sum<<endl;
    return 0;
}
