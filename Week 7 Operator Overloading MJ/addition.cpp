#include "pch.h"
#include <iostream>
#include "addition.h"

using namespace std; 

Mike::Mike() { //Create an empty Mike object


}

Mike::Mike(int m) { //Create a Mike object that passes in an int

	num = m; 


}

Mike Mike::operator+(Mike newMikeObject) { //Operator Overload = Teaching C++ howto add two Mike objects together

	Mike NewOb;  //New Mike object
	NewOb = num + newMikeObject.num;  //Addition Overload
	return(NewOb); //Return the new Mike object addition value
}

