#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>

using namespace std;

void print(const forward_list<int> &d){
	for (auto i : d){
		cout << " " << i;
	}
	cout << endl;
}

void delete_odd(forward_list<int> &l)
{
	auto prev = l.before_begin();
	auto curr = l.begin();
	while(curr != l.end()){
		if (*curr % 2 == 1)
			curr = l.erase_after(prev);
		else{
			prev = curr;
			curr ++;
		}
	}
}

int main()
{
	forward_list<int> l = {1,2,3,4,5,6,7,0};
	delete_odd(l);
	print(l);
	return 0;
}