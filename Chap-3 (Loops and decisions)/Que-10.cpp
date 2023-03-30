// Question no - 10 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*10-  Write another version of the program from Exercise 7 so that, instead of finding the final amount of your investment, you tell the program the 
final amount and it figures out how many years it will take, at a fixed rate of interest compounded yearly, to reach this amount. 
What sort of loop is appropriate for this problem? (Don’t worry about fractional years; use an integer value for the year.)
*/

#include<iostream>
using namespace std;
int main()
{
    int years=0;
    float rate, amount, total;
  
    cout <<"\n Enter initial amount: ";
    cin >> amount;
    cout <<"\n Enter final amount: ";
    cin >> total;
    cout <<"\n Enter interest rate (percent per year): ";
    cin >> rate;
    rate = rate/100;
  
    while(total >= amount)
    {
        amount = amount + (amount * rate);
        years++;
    }
  
    cout << "At the end of " << years << " years you will have " << total << " dollars ";
  
    return (0);
}
