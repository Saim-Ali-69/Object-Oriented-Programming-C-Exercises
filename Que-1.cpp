
// Question no - 1 (Chapter - 2) OOP by Robert lafore-4th Edition //
//Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons, and then displays the equivalent in cubic feet.//


#include<iostream>
using namespace std;
int main() 
{
	float gallons, cubfeet;
	
	cout<<" Enter the number of gallons : ";
	cin>> gallons;
	
	cubfeet = gallons / 7.481;
	
	cout<<" Equivalent In Cubic Feet : " << cubfeet << endl;
	
	return (0);
	
}
