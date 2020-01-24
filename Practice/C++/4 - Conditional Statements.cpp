#include <bits/stdc++.h>

using namespace std;

char ch[11][20] = {"one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n <= 9)
    cout << ch[n -1] << endl;
    else cout << "Greater than 9" << endl;
    // Write Your Code Here

    return 0;
}
