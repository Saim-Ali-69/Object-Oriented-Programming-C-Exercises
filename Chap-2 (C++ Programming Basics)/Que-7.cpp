// Question no - 7 (Chapter - 2) OOP by Robert lafore-4th Edition //
/*You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and adding 32.
 Write a program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the corresponding degrees Fahrenheit.
*/
#include<iostream>
using namespace std;
int main()	
{
	float celsius, fahrenheit;
	cout<<"Enter the temperature in Fahrenheit :";
	cin>> fahrenheit;
	celsius = 5*(fahrenheit-32)/9;
	cout<<"Celsius is = " << celsius;
	return(0);
}
