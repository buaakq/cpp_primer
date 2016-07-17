#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <string>

using namespace std;

void print(const forward_list<string> &d){
	for (auto i : d){
		cout << " " << i;
	}
	cout << endl;
}

void add_string(forward_list<string> &l, const string &val, const string &str)
{
	auto prev = l.before_begin();
	auto curr = l.begin();
	while(curr != l.end()){
		if (*curr == val)
		{
			l.insert_after(curr, str);
			return;
		}
		else{
			prev = curr;
			curr ++;
		}
	}
	l.insert_after(prev, str);
}

int main()
{
	forward_list<string> l = {"hello", "hi", "hey"};
	add_string(l, "hi", "lala");
	add_string(l, "ha", "haha");
	print(l);
	return 0;
}