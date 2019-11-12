#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	set<int >Value;
	int number_of_queries;
	cin >> number_of_queries;
	while(number_of_queries--){
		int type_of_the_querys, querys;
		cin >> type_of_the_querys >> querys;
		switch (type_of_the_querys) {
		case 1:
			Value.insert(querys);
			break;
		case 2:
			Value.erase(querys);
			break;
		case 3:
			if (Value.find(querys) == Value.end())
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
			break;
		}
	}
	return 0;
}
