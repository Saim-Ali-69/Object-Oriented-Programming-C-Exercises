// Question no - 6 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*6- Modify the FACTOR program in this chapter so that it repeatedly asks for a number and calculates its factorial, until the user enters 0, at which point it terminates. 
You can enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this effect.
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int numb;
	unsigned long fact;
	int stop;
	
	cout <<"\n Enter a number: ";
	cin >> numb;
	
	do
	{
		fact = 1;
		for(int i=numb; i>0; i--)
		fact*=i;
		
		cout <<" Factrial is "<< fact << endl;
		cout <<" Enter a number to continue..."<< endl;
		cout <<" enter 0 to stop..."<< endl;
		cin >> numb;
	}
	while(numb !=0);
	
	return (0);
}
