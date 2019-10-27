#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        sum+=num;
    }
    cout<<sum<<endl;
}
