#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

void print(const deque<int> &d){
	for (auto i : d){
		cout << " " << i;
	}
	cout << endl;
}

int main()
{
	list<int> l = {1,2,3,4,5,6,7,0};
	deque<int> even, odd;
	for (auto i : l){
		if(i%2 == 0)
			even.push_back(i);
		else
			odd.push_back(i);
	}
	print(even);
	print(odd);
}