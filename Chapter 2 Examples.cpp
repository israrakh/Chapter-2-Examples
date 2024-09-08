// Chapter 2 Examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
// This program calculates and displays the several values
// and various percentages for those values.
	double salary = 6000;
	double percent1 = 5, percent2 = 7, percent3 = 10;
	double contribution1, contribution2, contribution3;
	contribution1 = salary * percent1 / 100;
	contribution2 = salary * percent2 / 100;
	contribution3 = salary * percent3 / 100;
	cout << "Amount of contribution at " << percent1 << "% is $" <<
		contribution1 << endl;
	cout << "Amount of contribution at " << percent2 << "% is $" <<
		contribution2 << endl;
	cout << "Amount of contribution at " << percent3 << "% is $" <<
		contribution3 << endl;
	
	
	cout << "_______________________________________________" << endl;

//This program calculates and displays the discounted value of an item.

	double regularPrice, percentDiscount, discountAmount,
		reducedPrice;
	regularPrice = 59.95;
	percentDiscount = 0.2;
	discountAmount = regularPrice * percentDiscount;
	reducedPrice = regularPrice - discountAmount;
	cout << "The discount amount is $" << discountAmount << endl;
	cout << "The discounted price is $" << reducedPrice;

	return 0;
   
}