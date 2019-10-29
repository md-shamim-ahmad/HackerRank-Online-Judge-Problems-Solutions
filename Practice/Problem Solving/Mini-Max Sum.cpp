#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll num[5];
    cin >> num[0]>>num[1]>>num[2]>>num[3]>>num[4];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(num[i]>num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        cout<<num[0]+num[1]+num[2]+num[3]<<" "<<num[1]+num[2]+num[3]+num[4]<<endl;

    return 0;
}
