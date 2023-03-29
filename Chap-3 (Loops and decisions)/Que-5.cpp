// Question no - 5 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*5. Use for loops to construct a program that displays a pyramid of Xs on the screen. The pyramid should look like this

      X
     XXX
    XXXXX
   XXXXXXX
  XXXXXXXXX

except that it should be 20 lines high, instead of the 5 lines shown here. One way to do this is to nest two inner loops, one to print spaces and one to print Xs, 
inside an outer loop that steps down the screen from line to line.
*/
#include<iostream>
using namespace std;
int main() {
       int value;
       cout << "Enter the size = ";
       cin >> value;
       int space = value;
       for (int i = 0; i < value; i++) {
              for (int j = space; j > 0; j--) {
                     cout << " ";
              }
              for (int star = 0; star <= i * 2; star++) {
                     cout << "*";
              }
              space--;
              cout << endl;
       }

}

