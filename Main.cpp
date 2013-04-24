#include "conversion_menu.h"

int main()
{
	int menuChoice = 0;
	conversion_menu Menu;

	while (menuChoice != 4)
	{
		Menu.conversionMenu();
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1: Menu.menu_convertWeight();
			break;
		case 2: Menu.menu_convertDistance();
			break;
		}


	}

	return 0;
}