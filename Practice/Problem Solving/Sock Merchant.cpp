#include <iostream>
#include<vector>
#define start int main(){
#define stop std::cin.get();}
using namespace std;
typedef long long ll;

//main function start.
start
int count = 0;
int num;
cin >> num;
vector<ll>colour;
for (int i = 0; i < num; i++)
{
    int value;
    cin >> value;
    colour.push_back(value);
}
for (int i = 0; i < colour.size(); i++)
{
    for(int j=i+1;j<colour.size();j++)
        if (colour[i] == colour[j])
        {
            count++;
            colour.erase(colour.begin() + j);
            break;
        }
}
std::cout << count << std::endl;
stop
//main function stop.
