#include<cstdio>
#include<vector>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

//vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    int minus = 0, plus = 0, zero = 0, cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
            minus++;
        else if (arr[i] > 0)
            plus++;
        else
            zero++;
        cnt++;
    }
    printf("%.6f\n", ((float)plus / arr.size()));//print plus value
    printf("%.6f\n", ((float)minus / arr.size()));//print minus value
    printf("%.6f\n", ((float)zero / arr.size()));//print zero value
}

int main()
{
    int n;
    cin >> n;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    //vector<string> arr_temp = split_string(arr_temp_temp);
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int arr_item;// = stoi(arr_temp[i]);
        cin >> arr_item;
        arr.push_back(arr_item);
    }
    plusMinus(arr);
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
        });
    input_string.erase(new_end, input_string.end());
    int length = input_string.length();
    while (input_string[length - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}
