#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void trans(string &word)
{
	for (auto &t : word){
		if (t >= 'A' && t <= 'Z')
			t -= 'A' - 'a';
		//cout << t << endl;
	}
	while(word.find(',') != -1)
		word.erase(word.find(','), 1);
	while(word.find('.') != -1)
		word.erase(word.find('.'), 1);
}

int main()
{
	map<string, int> count;
	set<string> exclude = {"hello", "hi"};
	string word;

	while(cin >> word){
		trans(word);
		cout << word << endl;
		
		if(exclude.find(word) == exclude.end())
			count[word] ++;
	}

	for (const auto &p : count){
		cout << "the word " << p.first << " appears " << p.second << " times.\n";
	}
	return 0;
}