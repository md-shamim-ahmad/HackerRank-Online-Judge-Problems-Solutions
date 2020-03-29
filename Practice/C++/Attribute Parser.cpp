#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <sstream>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string first;
	getline(cin, first);
	istringstream iss(first);
	vector<int> tokens1;
	copy(istream_iterator<int>(iss),
		istream_iterator<int>(),
		back_inserter(tokens1));

	int n = tokens1[0], q = tokens1[1];
	string source;
	map<string, string> tagValue;
	string tagKey;

	while (n > 0)
	{
		string input;
		getline(cin, input);

		istringstream iss(input);
		vector<string> tokens;
		copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

		if (tokens.size() >= 1)
		{
			string tag = tokens[0];
			if (tag[0] == '<' && tag[1] != '/')
			{

				if (tag[tag.size() - 1] == '>')
					tagKey.empty() ? tagKey = tag.substr(1, tag.size() - 2) :
					tagKey = tagKey + "." + tag.substr(1, tag.size() - 2);
				else
					tagKey.empty() ? tagKey = tag.substr(1) :
					tagKey = tagKey + "." + tag.substr(1);
			}
			if (tag[0] == '<' && tag[1] == '/')
			{
				auto found = tagKey.find_last_of(".");
				if (found != std::string::npos)
					tagKey.erase(tagKey.begin() + found, tagKey.end());
				else
					tagKey = "";
			}
		}
		if (tokens.size() > 1)
		{
			int i = 1;
			while (i + 2 < tokens.size())
			{
				string name = tokens[i];
				string value = tokens[i + 2];
				if (value[value.size() - 1] == '>')
					tagValue[tagKey + "~" + name] = value.substr(1, value.length() - 3);
				else
					tagValue[tagKey + "~" + name] = value.substr(1, value.length() - 2);
				i += 3;
			}
		}
		--n;

	}

	string input1;
	while (getline(cin, input1))
	{

		if (q < 0)
			break;
		istringstream iss(input1);
		vector<string> tokens;
		copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

		(tagValue.find(tokens[0]) != tagValue.end()) ?
			cout << tagValue[tokens[0]] << "\n" :
			cout << "Not Found!\n";
		--q;
	}
}
