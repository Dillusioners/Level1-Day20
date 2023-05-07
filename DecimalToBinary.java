/*
 * Author - Debag101
 * Purpose - Decimal to Binary conversion
 * Date - 07/05/2023
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class DecimalToBinary {

	public static void display() {// Display method to serve as a header
		System.out.println("############################");
		System.out.println("   DECIMAL - TO - BINARY");
		System.out.println("############################");
	}

	public static String toBinary(int num, String str) {// The recursive implementation of Decimal to Binary conversion

		if (num == 0)// Base Case
			return str;

		str = (num % 2) + str;// Counter for base case

		return toBinary(num / 2, str);// Recursive call

	}

	public static void main(String[] args) throws IOException {// Main Method starts
		BufferedReader rd = new BufferedReader(new InputStreamReader(System.in));
		String Bin = "";// The string that will hold our result
		int number;// The number that will hold our input

		display();// Displaying header
		while (true) {// Running till code ends in a satisfactory manner
			System.out.println("(-)Enter the number => ");//Prompting user to enter value
			try {
				number = Integer.parseInt(rd.readLine());//Getting value
				System.out.printf("The Binary equivalent of %d is %s", number, toBinary(number, Bin));//Printing result 
				break;//Breaks
			} catch (Exception NumberFormatException) {//If error caught we go back to taking input
				System.err.println("(-)Number is not Binary !");
			}
		}
	}
}