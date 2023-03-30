// Question no - 8 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*8- Write a program that repeatedly asks the user to enter two money amounts expressed in old-style British currency: pounds, shillings, and pence. 
(See Exercises 10 and 12 in Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts and display the answer, again in pounds, shillings, and pence. 
Use a do loop that asks the user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater than 11, and carry 1 pound when there are more than 19 shillings.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int pound1, shilling1, pence1, pound2, shilling2, pence2, poundSum, shillingSum, penceSum;
	char ch;  
	
	do
	{
	  cout <<"\n Enter first amount: \x9c " << endl;
	  cout <<"Enter Pound: ";
	  cin >> pound1;
	  cout <<"Enter Shilling: ";
	  cin >> shilling1;
	  cout <<"Enter Pence: ";
	  cin >> pence1;
	  
	  cout <<"\n Enter first amount: \x9c " << endl;
	  cout <<"\n Enter Pound: ";
	  cin >> pound2;
	  cout <<"\n Enter Shilling: ";
	  cin >> shilling2;
	  cout <<"\n Enter Pence: ";
	  cin >> pence2; 
	  
	  poundSum = pound1 + pound2;
	  shillingSum = shilling1 + shilling2;
	  penceSum = pence1 + pence2;
	  
	  if(shillingSum >= 20)
	    {
	  	  poundSum = poundSum + (shillingSum/20);
	  	  shillingSum = shillingSum % 20;
	    }	
	  cout <<"\n Total is :\x9c " << poundSum << "." << shillingSum << "." << penceSum <<endl;
	  cout <<"\n Do you wish to continue ( y/n ) ? " <<endl;
	  ch = getche();  
	}
	while(ch == 'y');
	
	return(0);
}
