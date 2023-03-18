// Question no - 11 (Chapter - 2) OOP by Robert lafore-4th Edition //
/* By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw(), to help generate the following output:
Last name   First name   Street address    Town        State 
-----------------------------------------------------------
Jones          Bernard      109 Pine Lane     Littletown  MI
O’Brian      Coleen       42 E. 99th Ave.   Bigcity     NY
Wong          Harry        121-A Alabama St. Lakeville   IL
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << setiosflags(ios::left) << setw(12) << "Last name" << setw(14) << "First name" << setw(17) << "Street address" << setw(12) <<"Town" << setw(5) << "State" << endl;
	cout << setfill('.') << setw(60) << ".";
	cout << endl << setfill(' ') << setiosflags(ios::left) << setw(12) << "Jones" << setw(14) << "Bernard" << setw(17) << "109 Pine Lane" << setw(12) <<"Little town" << setw(5) << "Littletown" << endl;
	cout << setiosflags(ios::left) << setw(12) << "O 'Brian'" << setw(14) << "Coleen" << setw(17) << "42 E. 99th Ave" << setw(12) <<"Big City" << setw(5) << "NY" << endl;
	cout << setiosflags(ios::left) << setw(12) << "Wong" << setw(14) << "Harry" << setw(17) << "121 -A Alabama St" << setw(12) <<"Lakeville" << setw(5) << "IL" << endl;
	cout << endl;
	
	return(0);
}
