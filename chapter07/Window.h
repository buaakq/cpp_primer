#ifndef _WINDOW_H
#define _WINDOW_H_

#include <vector>

class Window{
public:
	void clear(int i);
private:
	//std::vector<Screen> screens{Screen(24,80,' ')};
};

void Window::clear(int i)
{
	//Screen &s = screens[i];
	//s.contents = string(s.height, s.width, ' ');
}

#endif