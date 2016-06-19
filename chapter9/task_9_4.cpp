#include <iostream>
#include <memory>
#include <vector>

using namespace std;

bool myFind(vector<int>::const_iterator b, vector<int>::const_iterator e, const int val)
{
	bool ret = false;
	while(b != e)
	{
		if (*b == val)
			return true;
		b ++;
	}
	return ret;
}

vector<int>::iterator myFind2(vector<int>::iterator b, vector<int>::iterator e, const int val)
{
	while(b != e)
	{
		if (*b == val)
			break;
		b ++;
	}
	return b;
}

int main()
{
	vector<int> a{1,2,3,4,5,6,10};
	bool ret = myFind(a.cbegin(), a.cend(), 3);
	cout << ret << endl;

	auto ret2 = myFind2(a.begin(), a.end(), 8);
	if (ret2 == a.end())
		cout << "not found" << endl;
	else
		cout << *ret2 << endl;

	return 0;
}