#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void process(shared_ptr<int> p)
{
	cout << "In function process" << endl;
	cout << *p << endl;
}

int main(){
	int a = int ();
	auto p = new vector<int>;
	//*p = 100;
	//cout << *p << endl;
	process(new int());
}