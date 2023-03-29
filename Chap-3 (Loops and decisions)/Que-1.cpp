// Question no - 1 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*Assume that you want to generate a table of multiples of any given number. Write a pro- gram that allows the user to enter the number and then generates the table, 
formatting it into 10 columns and 20 lines. Interaction with the program should look like this (only the first three lines are shown):
Enter a number: 7
7   14   21   28   35   42   49   56   63   70
77   84   91   98  105  112  119  126  133  140
147  154  161  168  175  182  189  196  203  210
*/
#include<iostream>
#include<iomanip>                                   //for setw()  
using namespace std;
int main()
{
	unsigned long n;                                //number
	
	cout <<"\n Enter a number: ";
	cin >> n;                                       //get number
	for(int i=1;i<=200;i++)                         //loop from 1 to 200
	{
		cout <<  setw(5) << i*n << " ";             //print multiple of n
		if(i % 10 == 0)                             //every 10 numbers,
		cout << endl;                               //start new line			
	}
	
	return(0);
}
