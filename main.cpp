/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */

#include <iostream>
#include "std_lib_facilities.h"

void add(const int i);
void add2(const int* i);

int main() {
  
	const int i = 10;
	const int* j = &i;

	cout << i << "\n";

	add(i);		// as previously thought, the value does not change (error)
	add2(j);	// value changes to 5

	/* Using a const in a function argument might be a good idea when trying to use the same number over and over. For example,
	if we want to make an exponent function. The base would stay the same and it would be smart to make it a const so it cannot
	be changed by accident
	*/

} 

void add(const int i){

	// i += 10; does not work because i is a constant value

	cout << i << "\n";		// would return whatever i is originally and cannot be modified
}

void add2(const int* i){

	int temp = 5;

	i = &temp;

	cout << *i << "\n";		// with pointers the values can change since the pointer is just a constant int pointer

}
