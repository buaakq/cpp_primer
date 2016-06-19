#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void add_new_book(multimap<string, string> &books, const string &name, const string &author);
void print_books(const multimap<string, string> &books);
void delete_author(multimap<string, string> &books, const string &name);

int main()
{
	multimap<string, string> books;

	add_new_book(books, "Smith", "book1");
	add_new_book(books, "Potter", "book1");
	add_new_book(books, "Smith", "book3");

	delete_author(books, "Potter");
	delete_author(books, "Kang");

	print_books(books);

	return 0;
}

void add_new_book(multimap<string, string> &books, const string &name, const string &author){
	books.insert({name, author});
}
void print_books(const multimap<string, string> &books){
	for (auto item : books)
		cout << "Author " << item.first <<  ", Book name: " << item.second << endl;
}

void delete_author(multimap<string, string> &books, const string &name){
	auto p = books.equal_range(name);
	if (p.first == p.second)
		cout << "No author named " << name << endl;
	else
		books.erase(p.first, p.second);
}





