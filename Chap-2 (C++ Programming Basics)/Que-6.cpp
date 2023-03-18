// Question no - 6 (Chapter - 2) OOP by Robert lafore-4th Edition //
/*On a certain day the British pound was equivalent to $1.487 U.S., the French franc was $0.172, the German deutsche mark was $0.584, and the Japanese yen was $0.00955. 
Write a program that allows the user to enter an amount in dollars, and then displays this value converted to these four other monetary units.
*/
#include<iostream>
using namespace std;
int main()
	{
	float amount = 0, pound = 1.487, franc = 0.172, deutsche = 0.584, yen = 0.00955;
	
	cout<<" Enter the amount in US - $ Dollar == "; 
	cin>> amount;
	
	cout<<"The converted currency values are :" <<endl;
	cout<<"British == " << amount * pound <<endl;
	cout<<"German == " << amount * deutsche <<endl;
	cout<<"Franch == " << amount * franc <<endl;
	cout<<"Japanese == " <<amount * yen <<endl;
	
	return(0);
} 
