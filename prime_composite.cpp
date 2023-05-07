// for input and output
# include <iostream>

/*
	Author: LeeTuah
	Program: Prime or Composite 
	Date: 07/05/23
	For SuperB League event
*/

// returns whether a number is prime or composite
// n -> the number given by user
bool isPrime(int n){
	// looping from 2 to n - 1
	for(int j = 2; j < n; j++){
		// if n is divided by the iteration, it has more than two divisors, i.e. it is composite
		if(n % j == 0) return false;
	}	
	
	// returns if none of the iterations could divide the number
	return true;
}

// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	int num; // stores the number
	
	// takes number from user
	std::cout << "Enter the number: ";
	std::cin >> num;
	
	// checks whether the number is prime or not
	if(isPrime(num))
	std::cout << "The number is prime.\n";
	else
	std::cout << "The number is composite.\n";	
	return 0;
}
