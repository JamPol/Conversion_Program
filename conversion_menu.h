//#pragma once
#ifndef CONVERSION_MENU_H
#define CONVERSION_MENU_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class conversion_menu
{
private:
public:
	conversion_menu(void);
	~conversion_menu(void);

	void conversionMenu();
	void menu_convertMass();
	void menu_convertDistance();
};

#endif
