// Question no - 9 (Chapter - 2) OOP by Robert lafore-4th Edition //
/*If you have two fractions, a/b and c/d, their sum can be obtained from the formula

            a      c      a*d + b*c
            --- + ---  =  -----------
            b      d         b*d 

For example, 1/4 plus 2/3 is

            1       2       1*3 + 4*2       3 + 8       11
            --- + ---  =  -----------  =  -------  =  ----
            4       3          4*3                12        12

Write a program that encourages the user to enter two fractions, and then displays their sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction with the user might look like this: 
            Enter first fraction: 1/2
            Enter second fraction: 2/5
            Sum = 9/10
You can take advantage of the fact that the extraction operator (>>) can be chained to read in more than one quantity at once: cin >> a >> dummychar >> b;
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char dummychar;
	int a, b, c, d, result1, result2;
	cout <<" Enter the 1st Fraction :";
	cin >> a >> dummychar >> b;
	cout <<" Enter the 2nd Fraction :";
	cin >> c >> dummychar >> d;
	
	result1 = (a*d) + (b*c);
	result2 = b*d;
	cout << " Result1 == " << result1 <<"/" <<result2 <<endl;
	
	return(0);
}
