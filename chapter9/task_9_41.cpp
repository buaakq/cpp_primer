#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	char tmp;
	vector<char> v;
	while(cin >> tmp)
		v.push_back(tmp);
	char *p = (char *)v.data();
	string s(p, v.size());
	cout << s << endl;
}