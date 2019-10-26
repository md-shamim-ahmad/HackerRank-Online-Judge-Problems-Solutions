#include <sstream>
#include <vector>
#include <iostream>
#include<string>
#include<algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    char ch;
    int number;
    vector<int>value;
    while (ss >> number) {
        value.push_back(number);
        ss >> ch;
    }
   return value;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

