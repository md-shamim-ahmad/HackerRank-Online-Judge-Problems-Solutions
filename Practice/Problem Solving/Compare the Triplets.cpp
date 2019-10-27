#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int a[3],b[3];
    int value_of_a=0,value_of_b=0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0;i<3;i++)
    {
        if(b[i]>a[i])
            value_of_b++;
        else if(a[i]>b[i])
            value_of_a++;
    }
    cout<<value_of_a<<" "<<value_of_b<<endl;
    std::cin.get();
}
