#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

class A{
public:
	int a;
};

bool compare(const A &a1, const A &a2){
	return a1.a < a2.a;
}

typedef bool (*pf)(const A&, const A&);

int main()
{
	map<int, int> family;
	family[1] = 1;
	family[2] = 1;
	family[3] = 1;
	family[5] = 1;
	family[6] = 1;

	cout << (family.upper_bound(4) == family.find(5)) << endl;

	return 0;
}