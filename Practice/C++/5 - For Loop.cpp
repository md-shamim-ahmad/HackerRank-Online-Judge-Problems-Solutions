#include <cstdio>
#include <iostream>
using namespace std;
char ch[10][10] = {"one","two","three","four","five","six","seven","eight","nine"};

int main() {
    // Complete the code.
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i<=9)
        {
            cout << ch[i - 1] << endl;
        }
        else if ( i>9) {
            if(i%2==0)
              cout<<"even"<<endl;
            if(i%2!=0)
              cout<<"odd"<<endl;
         }
    }
    return 0;
}
