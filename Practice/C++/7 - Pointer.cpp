#include <bits/stdc++.h>
using namespace ::std;

void update(int *a,int *b) {
    // Complete this function
    int sum= *a + *b;

    *b = max( *a , *b )- min(*a , *b);
    *a = sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout<< a << endl << b << endl;

    return 0;
}
