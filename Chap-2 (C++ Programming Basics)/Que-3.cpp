
// Question no - 3 (Chapter - 2) OOP by Robert lafore-4th Edition //
/*Write a program that generates the following output:
            10
            20
            19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20, and a decrements operator to generate the 19.
*/
#include <iostream>
using namespace std;
int main()
{
	int var = 10;
	cout<< var << endl;           // var is 10
	var= var*2;                   // var becomes 20 	
    cout<< var-- <<endl;          // displays var, then decrements it
	cout<<var <<endl;             // var is 19
	
	return (0);
}
