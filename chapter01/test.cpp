#include <iostream>

using namespace std;

struct Sales_data{
	string bookNo;
	int val;
}

int main()
{
	Sales_data data1;
	cout << data1.bookNo << "  " << data1.val << endl;
	return 1;
}