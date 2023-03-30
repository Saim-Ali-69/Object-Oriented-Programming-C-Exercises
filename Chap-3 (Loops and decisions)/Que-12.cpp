// Question no - 12 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*12- Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program should then display the result and ask whether the user wants to continue.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b, c, d, resN, resD;
    char dummyChar, ch, choice;
  
    do
    {
        cout <<"\ Enter operator: ";
        cin >> ch;
        cout <<"\n Enter first fraction in the form of a/b: ";
        cin >> a >> dummyChar >> b;
        cout <<"\n Enter second fraction in the form of c/d: ";
        cin >> c >> dummyChar >> d;
      
        switch(ch)
        {
            case '+':          
                resN=(a*d)+(b*c);
                resD=b*d;
                break;
            case '-':          
                resN=(a*d)-(b*c);
                resD=b*d;
                break;
            case '*':          
                resN=(a*c);
                resD=b*d;
                break;
            case '/':          
                resN=a*d;
                resD=b*c;
                break;
        }
      
        cout << a << "/" << b << ch << c << "/" << d << " = " << resN << "/" <<resD << endl;
        cout <<"\n Do you wish to continue (y/n)? " << endl;
        choice=getche();
        cout << endl;
    }
	while(choice == 'y');
  
    return (0);
}
