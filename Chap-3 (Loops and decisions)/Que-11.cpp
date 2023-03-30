// Question no - 11 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*11-  Create a three-function calculator for old-style English currency, where money amounts are specified in pounds, shillings, and pence. 
(See Exercises 10 and 12 in Chapter 2.) The calculator should allow the user to add or subtract two money amounts, or to multiply a money amount by a floating-point number.
 (It doesn’t make sense to multiply two money amounts; there is no such thing as square money. We’ll ignore division. Use the general style of the ordinary four-function
calculator in Exercise 4 in this chapter.)
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound1, shilling1, pence1, pound2, shilling2, pence2, poundRes, shillingRes, penceRes;
    float num;
    char ch;
  
    cout<<"Input operator: ";
    ch=getche();
  
    switch(ch)
    {
        case '+':
            cout << endl <<"\n Enter first amount: \x9c " << endl;
            cout <<"\n Enter Pound: ";
            cin >> pound1;
            cout <<"\n Enter Shilling: ";
            cin >> shilling1;
            cout <<"\n Enter Pence: ";
            cin >> pence1;
          
            cout <<"\n Enter second amount: \x9c " << endl;
            cout <<"\n Enter Pound: ";
            cin >> pound2;
            cout <<"\n Enter Shilling: ";
            cin >> shilling2;
            cout <<"\n Enter Pence: ";
            cin >> pence2;
          
            poundRes=pound1+pound2;
            shillingRes=shilling1+shilling2;
            penceRes=pence1+pence2;
            break;
        case '-':
            cout << endl <<"\n Enter first amount: \x9c" << endl;
            cout <<"\n Enter Pound: ";
            cin >> pound1;
            cout <<"\n Enter Shilling: ";
            cin >> shilling1;
            cout <<"\n Enter Pence: ";
            cin >> pence1;
          
            cout <<"\n Enter second amount: \x9c" << endl;
            cout <<"\n Enter Pound: ";
            cin >> pound2;
            cout <<"\n Enter Shilling: ";
            cin >> shilling2;
            cout << "\n Enter Pence: ";
            cin >> pence2;
          
            poundRes=pound1-pound2;
            shillingRes=shilling1-shilling2;
            penceRes=pence1-pence2;
            break;
        case '*':      
            cout << endl << "\n Enter amount: \x9c" << endl;
            cout <<"\n Enter Pound: ";
            cin >> pound1;
            cout <<"\n Enter Shilling: ";
            cin >> shilling1;
            cout <<"\n Enter Pence: ";
            cin >> pence1;
          
            cout <<"\n Enter a number to multiply amount: ";
            cin >> num;
          
            poundRes=pound1*num;
            shillingRes=shilling1*num;
            penceRes=pence1*num;
            break;      
        default:
            cout <<"\n Invalid input.";
    }
      
    if (penceRes >= 12)
    {
        shillingRes = shillingRes + (penceRes/12);
        penceRes = penceRes%12;
    }
  
    if (shillingRes >= 20)
    {
        poundRes = poundRes + (shillingRes/20);
        shillingRes = shillingRes%20;
    }
      
    cout <<"\n Total is :\x9c " << poundRes << "." << shillingRes << "." << penceRes << endl;
  
    return (0);
}
