// Question no - 8 (Chapter - 2) OOP by Robert lafore-4th Edition //
/*When a value is smaller than a field specified with setw(),the unused locations are, by default, filled in with spaces. The manipulator setfill() 
takes a single character as an argument and causes this character to be substituted for spaces in the empty parts of a field. Rewrite the WIDTH program so that 
the characters on each line between the location name and the population number are filled in with periods instead of spaces, as in Port City.....2425785
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"Port City" << setfill('.') << setw(10) << "2425785" <<endl;
	return(0);
}
