#include <iostream>

using namespace std;

int main()
{
	cout << "hello word" << endl;
	string hello = "hello word";
	hello.erase(hello.find(' '), 1);
	cout << hello << endl;
	return 0;
}