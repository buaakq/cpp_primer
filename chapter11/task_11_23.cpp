#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void add_new_children(multimap <string, string> &family, const string &lname, const string &fname);
void print_family(const multimap <string, string> &family);

int main()
{
	multimap<string, string> family;

	add_new_children(family, "Smith", "Joe");
	add_new_children(family, "Potter", "Ron");
	add_new_children(family, "Smith", "John");

	print_family(family);

	return 0;
}


void add_new_children(multimap <string, string> &family, const string &lname, const string &fname)
{
	family.insert({lname, fname});
}

void print_family(const multimap <string, string> &family)
{
	for (const auto l : family)
	{
		cout << "The family " << l.first << " has children: " << l.second <<endl;
	}
}