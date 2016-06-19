#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void read_p(vector<int>* p)
{
	int tmp;
	while(cin >> tmp){
		(*p).push_back(tmp);
	}
}

void print_p(vector<int>* p)
{
	vector<int> v = *p;
	for(auto i : v)
		cout << i << " ";
}

int main(){
	int a = int ();
	auto p = new vector<int>();
	read_p(p);
	print_p(p);
	delete p;
	//*p = 100;
	//cout << *p << endl;
	return 0;
}