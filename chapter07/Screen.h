#ifndef _SCREEN_H
#define _SCREEN_H

#include "Window.h"

class Screen{

	friend void Window::clear(int i);

public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wi, char c):height(ht), width(wi), contents(ht*wi, c)
	{

	}

	char get() const 
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const 
	{
		return contents[ht * width + wd];
	}
	
	Screen &move(pos r, pos c);
	Screen &set(char c);
	
	void display_helper() const;
	
	const Screen &display() const {display_helper();}
	Screen &display(){display_helper();}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

void Screen::display_helper() const
{
	std::cout << contents << std::endl;
}

inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

#endif