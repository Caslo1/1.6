#include <iostream>

using namespace std;

int main()
{

	unsigned int Color{};
	unsigned int Value;

	cout << "Enter from 0 to 255 red ";
	cin >> Value;
	Color |= Value;


	cout << "Enter from 0 to 255 green ";
	cin >> Value;
	Color <<= 8;
	Color |= Value;

	cout << "Enter from 0 to 255 blue ";
	cin >> Value;
	Color <<= 8;
	Color |= Value;

	cout << Color;

	return 0;
}