#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void add_new_family(map <string, vector<string> > & family, const string lname);
void add_new_children(map <string, vector<string> > &family, const string lname, const string fname);
void print_family(const map <string, vector<string> > family);

int main()
{
	map<string, vector<string> > family;
	family["Potter"] = {"Harry", "John", "Peter"};
	print_family(family);

	add_new_family(family, "Smith");
	add_new_children(family, "Smith", "Joe");

	add_new_family(family, "Smith");

	print_family(family);

	return 0;
}

void add_new_family(map <string, vector<string> > & family, const string lname){
	if (family.find(lname) == family.end())
		family[lname] = vector<string>();
	else
		cout << "Family " << lname << " already exists!"<< endl;
}
void add_new_children(map <string, vector<string> > &family, const string lname, const string fname)
{
	family[lname].push_back(fname);
}

void print_family(const map <string, vector<string> > family)
{
	for (const auto l : family)
	{
		cout << "The family " << l.first << " has children: " << endl;
		for (const auto f : l.second)
		{
			cout << f << endl;
		}
	}
}