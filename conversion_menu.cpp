#include "conversion_menu.h"
#define mega 1000000
#define kilo 1000
#define hecto 100
#define none 1
#define deci .1
#define centi .01
#define milli .001
#define micro .000001

conversion_menu::conversion_menu(void){}
conversion_menu::~conversion_menu(void){}


void conversion_menu::conversionMenu()
{
	cout << "Which conversion type would you like?";
	cout << "\n1. Weight\n2. Distance\n\nChoice: ";
}

void conversion_menu::menu_convertWeight()
{
	int convert_from;
	int convert_to;
	double amount;

	cout << "\nConvert weight from:\n1. Megagram\n2. Kilogram\n3. Hectogram" <<
		"\n4. Gram\n5. Decigram\n6. Centigram\n7. Milligram\n8. Microgram" <<
		"\n\nChoice: ";
	cin >> convert_from;
	cout << "\nConvert weight from:\n1. Megagram\n2. Kilogram\n3. Hectogram" <<
		"\n4. Gram\n5. Decigram\n6. Centigram\n7. Milligram\n8. Microgram" <<
		"\n\nChoice: ";
	cin >> convert_to;
	cout << "\nHow much would you like to convert?: ";
	cin >> amount;
	
	if (convert_from == 1)
		amount = amount * mega;
	else if (convert_from == 2)
		amount = amount * kilo;
	else if (convert_from == 3)
		amount = amount * hecto;
	else if (convert_from == 4)
		amount = amount * none;
	else if (convert_from == 5)
		amount = amount * deci;
	else if (convert_from == 6)
		amount = amount * centi;
	else if (convert_from == 7)
		amount = amount * milli;
	else if (convert_from == 8)
		amount = amount * hecto;

	if (convert_to == 1)
		amount = amount / mega;
	if (convert_to == 2)
		amount = amount / kilo;
	if (convert_to == 3)
		amount = amount / hecto;
	if (convert_to == 4)
		amount = amount / none;
	if (convert_to == 5)
		amount = amount / deci;
	if (convert_to == 6)
		amount = amount / centi;
	if (convert_to == 7)
		amount = amount / milli;
	if (convert_to == 8)
		amount = amount / hecto;

	cout << "The converted amount is: " << amount << endl;
	cout << "-------------------------------------" << endl;
	system("pause");
	cout << endl;
}

void conversion_menu::menu_convertDistance()
{
	int convert_from;
	int convert_to;
	long double amount;
	string string_amount;

	cout << "\nConvert weight from:\n1. Megametre\n2. Kilometre\n3. Hectometre" <<
		"\n4. Metre\n5. Decimetre\n6. Centimetre\n7. Millimetre\n8. Micrometre" <<
		"\n\nChoice: ";
	cin >> convert_from;
	cout << "\nConvert weight from:\n1. Megametre\n2. Kilometre\n3. Hectometre" <<
		"\n4. Metre\n5. Decimetre\n6. Centimetre\n7. Millimetre\n8. Micrometre" <<
		"\n\nChoice: ";
	cin >> convert_to;
	cout << "\nHow much would you like to convert?: ";
	cin >> amount;
	
	if (convert_from == 1)
		amount = amount * mega;
	else if (convert_from == 2)
		amount = amount * kilo;
	else if (convert_from == 3)
		amount = amount * hecto;
	else if (convert_from == 4)
		amount = amount * none;
	else if (convert_from == 5)
		amount = amount * deci;
	else if (convert_from == 6)
		amount = amount * centi;
	else if (convert_from == 7)
		amount = amount * milli;
	else if (convert_from == 8)
		amount = amount * hecto;

	if (convert_to == 1)
		amount = amount / mega;
	if (convert_to == 2)
		amount = amount / kilo;
	if (convert_to == 3)
		amount = amount / hecto;
	if (convert_to == 4)
		amount = amount / none;
	if (convert_to == 5)
		amount = amount / deci;
	if (convert_to == 6)
		amount = amount / centi;
	if (convert_to == 7)
		amount = amount / milli;
	if (convert_to == 8)
		amount = amount / hecto;

	string_amount = amount;
	cout << "The converted amount is: " << string_amount << endl;
	cout << "-------------------------------------" << endl;
	system("pause");
	cout << endl;
}