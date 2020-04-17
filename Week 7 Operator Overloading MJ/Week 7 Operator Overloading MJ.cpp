/* Week 7 Operator Overloading MJ.cpp; Week 7 Assignment; Professor George; CIS 2403; Mike Jasiczek
I did a lot of research to understand operator overloading and it took all week but I think I finally understand how it works.
Metie said that a lot of operator overloading occurs in high level math and I will remember that I can do this and keep it in my back 
pocket when I need it.  
*/

#include "pch.h"
#include "addition.h"
#include <iostream>
using namespace std;


int main()
{
	int num1 = 0, num2 = 0; 
	cout << "Enter a first number: " << endl; 
	cin >> num1; 
	cout << "Enter the second number: " << endl; 
	cin >> num2; 
	
	Mike a(num1); //Pass in the first number to the Mike Object
	Mike b(num2); //Pass in the second number to the Mike Object
	Mike c; //Create an empty Mike Object
	Mike *mikePointer = &c; 
	*mikePointer = a + b; //Add them together and get the value
	
	 
	
	
	cout << "The operator overloaded number is: " << mikePointer->num << endl; 

}

