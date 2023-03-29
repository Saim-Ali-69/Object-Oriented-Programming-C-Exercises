// Question no - 3 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*3. Operators such as >>, which read input from the keyboard, must be able to convert a series of digits into a number. 
Write a program that does the same thing. It should allow the user to type up to six digits, and then display the resulting number as a type long integer. 
The digits should be read individually, as characters, using getche(). 
Constructing the number involves multiplying the existing value by 10 and then adding the new digit. (Hint: Subtract 48 or ‘0’ to go from ASCII to a numerical digit.) 
Here’s some sample interaction:
Enter a number: 123456
Number is: 123456
*/
#include<iostream>
#include<conio.h>                    //for getche()
using namespace std;
int main()
{
	char ch;
	unsigned long total = 0;        //this holds the number
	
	cout <<" \n Enter a number : ";
	while ((ch = _getche()) != '\r')  //quit on Enter
	total = total * 10 + ch - '0';
	cout <<" \n Number is : " << total << endl;
	return (0);
}
