#include "Sales_data.h"
#include <iostream>
#include <string>

using namespace std;

Sales_data::Sales_data(std::istream s)
{
		read(s, *this);
}

double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else 
		return 0;
}

Sales_data & Sales_data::combine(const Sales_data& data)
{
	this->revenue += data.revenue;
	return *this;
}

std::ostream &print(std::ostream & os, Sales_data & item)
{
	os << item.isbn() << " " << item.units_sold << " "
	   << item.revenue << " " << item.avg_price();
    return os;
}

std::istream &read(std::istream & is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

Sales_data add(const Sales_data & left, const Sales_data &right)
{
	Sales_data sum;
	sum = left;
	sum.combine(right);
	return sum;
}