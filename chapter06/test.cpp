#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5};
	assert(v.size() > 0);
	cout << __func__ << endl;
	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __TIME__ << endl;
	cout << __LINE__ << endl;
	cout << v[0] << endl;
}