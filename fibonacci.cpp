// for input and output
# include <iostream>
// for dynamic array
# include <vector>
/*
	Author: LeeTuah
	Program: Fibonacci for the nth term 
	Date: 07/05/23
	For SuperB League event
*/

// returns the fibonacci number at a given index
// n -> stores the index for the fibonacci
unsigned long long fibonacci(int n){
	// creating a list to store fibonacci values
	std::vector<unsigned long long> list(n + 1, 0);
	// initializing 0th and 1st index with the
	// fibonacci value of 0th and 1st term
	list[0] = 0;
	list[1] = 1;
	
	// iterating through the list
	for(int i = 0; i <= n; i++){
		// if-statements ensures that the index isn't out of bounds
		// appending the next two indexes with current index as
		// fibonacci is the sum of its previous two indexes' 
		if(i < n) list[i + 1] += list[i];
		if(i < n - 1) list[i + 2] += list[i];
	}
	
	// returning the last member in the list
	return list[n];
}

// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	int term; // stores the fibonacci nth term
	
	// asking user for input
	std::cout << "Which term value do you want to see for the fibonacci series?: ";
	std::cin >> term;
	// if the term is negative, make it positive
	if(term < 0) term *= -1;
	
	// printing the fibonacci value
	std::cout << "The Fibonacci value is " << fibonacci(term);
	return 0;
}
