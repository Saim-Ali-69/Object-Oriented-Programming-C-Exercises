// Question no - 2 (Chapter - 3) OOP by Robert lafore-4th Edition //
/*2. Write a temperature-conversion program that gives the user the option of converting Fahrenheit to Celsius or Celsius to Fahrenheit. 
Then carry out the conversion. Use floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int response; 
	double temperature;
	
	cout <<"\n Type 1 to convert fahrenheit to celsius,"
	     <<"\n Type 2 to convert celsius to fahrenheit : ";
	cin >> response;
	
	if(response == 1)
	{
		cout <<"Enter the Temperature in Fahrenheit : ";
		cin >> temperature;
		cout <<" In celcius that's " << 5.0 / 9.0 * (temperature - 32.0); 
	}
	else
	{
	    cout <<"Enter the celsius : ";
		cin >> temperature;
		cout <<" In fahrenheit that's " << 9.0 / 5.0 * temperature + 32.0;	
    }     
        cout << endl;
        
        return(0);
}
