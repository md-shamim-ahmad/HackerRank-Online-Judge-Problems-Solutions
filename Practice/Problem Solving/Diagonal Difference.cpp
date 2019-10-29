#include <bits/stdc++.h>
using namespace std;

int main() {

    int array_size,ar[1000][1000],d1=0,d2=0;
    cin >> array_size;
    for(int i = 0 ; i < array_size ; i++){
        for(int j = 0 ; j < array_size ; j++){
            cin >> ar[i][j];
            if(i==j)
                d1+=ar[i][j];
            if(i+j==array_size-1)
                d2+=ar[i][j];
        }
    }
    cout <<(max(d1,d2)-min(d1,d2))<< endl;
    return 0;
}
