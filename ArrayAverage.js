// Ask the user for an array of numbers
let numbers = prompt("Enter a list of numbers separated by commas:").split(",");

// Convert each string element to a number
numbers = numbers.map(Number);

// Find the sum of the array
let sum = numbers.reduce((total, num) => total + num, 0);

// Find the average by dividing the sum by the length of the array
let avg = sum / numbers.length;

// Print the average to the console
console.log(`The average of the array is ${avg}`);
