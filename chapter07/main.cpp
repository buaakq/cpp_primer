#include "Sales_data.h"
#include "Screen.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	Sales_data s1;
	print(cout, s1);
	cout << endl;

	Sales_data s2("1-2-3-4-5-6-", 5, 10);
	print(cout, s2);
	cout << endl;

	Sales_data s3("2-3-4-5-6-7");
	print(cout, s3);
	cout << endl;
	cout << endl;

	Screen myscreen(5,5,'X');
	myscreen.move(4,0).set('#').display();
	cout << endl;

	myscreen.display();


}