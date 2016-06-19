#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void add_new_family(map<string, vector<pair<string, int> > > & family, const string lname){
	family[lname];
	/*
	if (family.find(lname) == family.end())
		family[lname] = vector<pair<string, int> >();
	else
		cout << "Family " << lname << " already exists!"<< endl;
	*/
}
void add_new_children
(map<string, vector<pair<string, int> > > &family, const string lname, const string fname, const int data)
{
	family[lname].push_back({fname, data});
}

void print_family(const map<string, vector<pair<string, int> > > family)
{
	for (const auto l : family)
	{
		cout << "The family " << l.first << " has children: " << endl;
		for (const auto f : l.second)
		{
			cout << f.first << " " << f.second << endl;
		}
	}
}

int main()
{
	map<string, vector<pair<string, int> > > family;
	add_new_family(family, "Smith");
	add_new_children(family, "Smith", "John", 19890101);
	print_family(family);
	return 0;
}