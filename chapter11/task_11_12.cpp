#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void print(vector<pair<string, int> > &p){
	for (auto p1 : p){
		cout << "A pair: "<< p1.first << " "<< p1.second << endl;
	}
}

int main()
{
	int a;
	string s;
	vector<pair<string, int> > p; 
	while(cin >> s && cin >> a){
		/*version 1: make_pair*/
		//p.push_back(make_pair(s, a));
		
		/*version 2: pair<>()*/
		//p.push_back(pair<string, int>(s, a));
	
		/*version 3: list init*/
		p.push_back({s, a});
	}
	print(p);
	return 0;
}