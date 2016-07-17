#include <iostream>
#include <string>

class Sales_data
{

friend Sales_data add(const Sales_data&, const Sales_data &);
friend std::ostream &print(std::ostream &, Sales_data &);
friend std::istream &read(std::istream &, Sales_data &);

public:
	Sales_data() = default;
	Sales_data(const std::string s):bookNo(s){}
	Sales_data(const std::string s, unsigned u, double p):
		bookNo(s), units_sold(u), revenue(u*p){}
	Sales_data(std::istream s);

	std::string isbn() const{return bookNo;}
	Sales_data & combine(const Sales_data&);
	double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

Sales_data add(const Sales_data&, const Sales_data &);
std::ostream &print(std::ostream &, Sales_data &);
std::istream &read(std::istream &, Sales_data &);