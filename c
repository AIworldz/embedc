1. Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic 
salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross 
salary.
Program:
#include <stdio.h>
int main(){
float basic, dearness, house_al,gross;
clrscr();
printf("Enter the basic salary: ");
scanf("%f",&basic);
dearness = 0.4*basic;
house_al = 0.2*basic;
gross = basic+dearness+house_al;
printf("Gross salary is: %f ",gross);
return 0;
}
Output:
2. The distance between two cities (in km.) is input through the keyboard. Write a program to 
convert and print this distance in meters, feet, inches and centimeters.
Program:
#include <stdio.h>
int main() {
int distance;
float meter, feet, inches, centimeter;
printf("Enter the distance between the two cities in kilometers: ");
scanf("%d", &distance);
meter = distance * 1000;
feet = distance * 3280.84;
inches = distance * 39370.1;
centimeter = distance * 100000;
printf("\n%d kilometers = %.2f meters\n", distance, meter);
printf("%d kilometers = %.2f feet\n", distance, feet);
printf("%d kilometers = %.2f inches\n", distance, inches);
printf("%d kilometers = %.2f centimeters\n", distance, centimeter);
return 0;
}
Output:
3. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program 
to convert this temperature into Centigrade degrees.
Program:
#include <stdio.h>
int main() {
float f, c;
printf("Enter the Temperature in Fahrenheit: ");
scanf("%f",&f);
c = ((f-32)*5)/9;
printf("Temperature in Centigrade is: %f ",c);
return 0;
}
Output:
4. The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area & perimeter of the rectangle, and the area & 
circumference of the circle.
Program:
#include <stdio.h>
#include <math.h>
int main() {
int l, b, perimeter, area_rect;
float r, circumference, area_circ;
printf("Enter the length of rectangle: ");
scanf("%d",&l);
printf("Enter the breadth of rectangle: ");
scanf("%d",&b);
printf("Enter the radius of cricle: ");
scanf("%f",&r);
perimeter = 2*(l+b);
area_rect = l*b;
circumference = 2*M_PI*r;
area_circ = M_PI*r*r;
printf("Perimeter of Rectangle is: %d\n",perimeter);
printf("Area of Rectangel is: %d\n",area_rect);
printf("Circumference of Circle: %f\n",circumference);
printf("Area of circle is: %f",area_circ);
return 0;
}
Output:
5. Two numbers are input through the keyboard into two locations C and D. Write a program to 
interchange the contents of C and D.
Program: 
#include <stdio.h>
int main() {
int c,d,temp;
printf("Enter the Value of C: ");
scanf("%d",&c);
printf("Enter the value of D: ");
scanf("%d",&d);
temp = c;
c=d;
d= temp;
printf("Final value of C is: %d\n",c);
printf("Final value of D is: %d",d);
return 0;
} 
Output:
1. Write a program to perform Addition, Subtraction, Multiplication and Division of 2 numbers as 
per user’s choice (using if…else/Nested if/Ladder if).
Algorithm:
1. Input num1, num2, and operation from the user.
2. If operation is '+', calculate result = num1 + num2.
3. Else, if operation is '-', calculate result = num1 - num2.
4. Else, if operation is '*', calculate result = num1 * num2.
5. Else, if operation is '/' and num2 is not 0, calculate result = num1 / num2.
 - If num2 is 0, print an error message and exit.
6. Print the result.
Program:
#include <stdio.h>
int main() {
 float num1, num2;
 printf("Enter the first number: ");
 scanf("%f", &num1);
 printf("Enter the second number: ");
 scanf("%f", &num2);
 char operation;
 printf("Enter the operation (+, -, *, /): ");
 scanf(" %c", &operation);
 float result;
 if (operation == '+') {
 result = num1 + num2;
 } else if (operation == '-') {
 result = num1 - num2;
 } else if (operation == '*') {
 result = num1 * num2;
 } else if (operation == '/') {
 if (num2 != 0) {
 result = num1 / num2;
 } else {
 printf("Error: Division by zero is not allowed.\n");
 return 0;
 }
 } else {
 printf("Error: Invalid operation.\n");
 return 0;
 }
 printf("Result: %.2f\n", result);
 return 0;
}
Output:
2. Write a program to read marks of five subjects. Calculate percentage and print class 
accordingly. Fail below 35, Pass Class between 35 to 45, Second Class between 45 to 60, First 
Class between 60 to 70, Distinction if more than 70.
Algorithm:
1. Input marks for five subjects: a, b, c, d, e.
2. Calculate total = a + b + c + d + e.
3. Calculate percentage = (total / 500) * 100.
4. Check the following conditions:
 - If percentage < 35, print "Fail".
 - Else, if 35 <= percentage < 45, print "Pass".
 - Else, if 45 <= percentage < 60, print "Second Class".
 - Else, if 60 <= percentage < 70, print "First Class".
 - Else, print "Distinction".
Program:
#include <stdio.h>
int main() {
 float a,b,c,d,e,total;
 float marks;
 
 printf("Enter marks of Maths: ");
 scanf("%f",&a);
 printf("Enter marks of English: ");
 scanf("%f",&b);
 printf("Enter marks of Hindi: ");
 scanf("%f",&c);
 printf("Enter marks of Science: ");
 scanf("%f",&d);
 printf("Enter marks of Sanskrit: ");
 scanf("%f",&e);
 
 total = a+b+c+d+e;
 marks = (total/500)*100;
 printf("total percentage is: %f\n",marks);
 
 if(marks<35){
 printf("Fail");
 } else if(marks>=35 && marks < 45){
 printf("Pass");
 }
 else if(marks>=45 && marks < 60){
 printf("Second Class");
 } else if(marks>=60 && marks < 70){
 printf("First Class");
 }
 else{
 printf("Distinction");
 }
 
 return 0;
}
Output:
3. Write a program to find out largest number from given 3 numbers (Conditional operator).
Algorithm:
1. Input num1, num2, and num3 from the user.
2. Use the ternary operator to find the largest number among num1, num2, and num3.
3. Print the largest number.
Program:
#include <stdio.h>
int main() {
 int num1, num2, num3, largest;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &num1, &num2, &num3);
 largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
 printf("The largest number is: %d\n", largest);
 return 0;
}
Output:
4. Write a program uses the ? operator to square an integer value entered by the user. However, 
this program preserves the sign (10 squared is 100 and –10 squared is – 100).
Algorithm:
1. Input num from the user.
2. Use the ternary operator to calculate the square of num with sign preservation.
3. Print the result.
Program:
#include <stdio.h>
int main() {
 int num, result;
 printf("Enter an integer: ");
 scanf("%d", &num);
 result = (num >= 0) ? (num * num) : -(num * num);
 printf("The square of %d is %d\n", num, result);
 return 0;
}
Output:
5. Write a program contains an example of if. The program plays a very simple version of the 
''guess the magic number" game. It prints the message ** Right ** when the player guesses 
the magic number. It generates the magic number using the standard random number 
generator rand( ), which returns an arbitrary number between 0 and RAND_MAX (which 
defines an integer value that is 32,767 or larger). The rand( ) function requires the header .
Algorithm:
1. Generate a random magic number using rand() % 100.
2. Input a guess from the user.
3. If the guess is equal to the magic number, print "Right!".
4. Else, print "Wrong. The magic number was <magic_number>".
Program:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 int guess, magic_number;
 srand(time(NULL));
 magic_number = rand() % 100;
 printf("Guess the magic number (between 0 and 99): ");
 scanf("%d", &guess);
 if (guess == magic_number) {
 printf("Right!");
 } else {
 printf("Wrong. The magic number was %d", magic_number);
 }
 return 0;
}
Output:
6. Write a program reads two integers from the keyboard and displays the quotient. It uses an if 
statement, controlled by the second number, to avoid a divide-by-zero error.
Algorithm:
1. Input numerator and denominator from the user.
2. Check if the denominator is not equal to 0.
 - If true, calculate quotient = (float)numerator / denominator.
 - Print the quotient.
 - If false, print "Error: Division by zero is not allowed."
Program: 
#include <stdio.h>
int main() {
 int numerator, denominator;
 float quotient;
 printf("Enter the numerator: ");
 scanf("%d", &numerator);
 printf("Enter the denominator: ");
 scanf("%d", &denominator);
 if (denominator != 0) {
 quotient = (float)numerator / denominator;
 printf("The quotient is: %.2f\n", quotient);
 } else {
 printf("Error: Division by zero is not allowed.\n");
 }
 return 0;
}
Output:
7. A number is entered through the keyboard. The number may contain 1,2,3,4, or 5 digits. Write 
a program to find the number of digits in the number.
Algorithm:
1. Input a number from the user.
2. Initialize count to 0.
3. Use a loop to count digits in the number:
 a. While the number is not 0, divide it by 10 and increment count.
4. Print the count of digits.
Program:
#include <stdio.h>
int main() {
 int number, count = 0;
 printf("Enter a number: ");
 scanf("%d", &number);
 while (number != 0) {
 number /= 10;
 count++;
 }
 printf("The number of digits is: %d\n", count);
 return 0;
}
Output:
8. Write a program to round off an integer i to the next largest multiple of another integer j. For 
example, 256 days when rounded off to the next largest multiple divisible by a week result 
into 259.
Algorithm:
1. Input two integers i and j from the user.
2. Calculate remainder = i % j.
3. Calculate roundedValue = i + (j - remainder).
4. Print the rounded value.
Program:
#include <stdio.h>
int roundToNextMultiple(int i, int j) {
 int remainder = i % j;
 int result = i + (j - remainder);
 return result;
}
int main() {
 int i,j;
 printf("Enter the number:");
 scanf("%d",&i);
 scanf("%d",&j);
 int roundedValue = roundToNextMultiple(i, j);
 printf("Rounded value: %d\n", roundedValue);
 return 0;
}
Output:
9. Write the program and trace the output for the following expressions: 
a) z = a + b * 5 / 4 + c % 3 * 5 
b) y = x > y ? x : y 
c) m = ++i && ++j && ++k
Algorithm:
a) Evaluate z = a + b * 5 / 4 + c % 3 * 5
b) Evaluate y = x > y ? x : y
c) Evaluate m = ++i && ++j && ++k
Program:
#include <stdio.h>
int main() {
 int a = 10, b = 5, c = 3;
 int x = 7, y = 8;
 int i = 1, j = 2, k = 3;
 int z, m;
 // a)
 z = a + b * 5 / 4 + c % 3 * 5;
 printf("Value of z: %d\n", z);
 // b)
 y = x > y ? x : y;
 printf("Value of y: %d\n", y);
 // c)
 m = ++i && ++j && ++k;
 printf("Value of m: %d\n", m);
 return 0;
}
Output:
10. Write a C program to compute the water tax using ternary operator. The water tax slab is as 
follows: If units =units<=500, then cost is Rs.1.5 per unit If units > 500, then cost is Rs.3 per 
unit. Note: Display the output to two decimal places.
Algorithm:
1. Input units consumed from the user.
2. Use the ternary operator to calculate the water tax based on the given slab conditions.
3. Print the water tax to two decimal places.
Program:
#include <stdio.h>
int main() {
 int units;
 float cost;
 printf("Enter the number of units consumed: ");
 scanf("%d", &units);
 cost = (units < 100) ? (units * 1.0) : (units <= 500) ? (units * 1.5) : (units * 3.0);
 printf("Water tax: Rs. %.2f\n", cost);
 return 0;
}
Output:

1. Write a program to find sum of first N odd numbers. Ex. 
1+3+5+7+………..+N
Program:
#include <stdio.h>
int main() {
 int i,n, sum = 0;
clrscr();
 printf("Enter the value of N: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i += 2) {
 sum += i;
 }
 printf("The sum of the first %d odd numbers is %d\n", n, sum);
 return 0;
}
Output: 
2. Write a program to find 1+1/2+1/3+1/4+....+1/n
Program: 
#include <stdio.h>
int main() {
 int n, i;
 float sum = 0.0;
clrscr();
 printf("Enter the value of N: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 sum += 1.0 / i;
 }
 printf("The sum of the series 1 + 1/2 + .... + 1/%d is %.2f.\n", n, sum);
 return 0;
}
Output:
3. Write a program to print all Armstrong numbers in a given range. For 
example, 153 = 1^3 + 5^3 + 3^3. So, 153 is Armstrong number.
Program:
#include <stdio.h>
#include <math.h>
int main() {
 int i,low, high, num, digit, sum;
clrscr();
 printf("Enter the lower limit: ");
 scanf("%d", &low);
 printf("Enter the upper limit: ");
 scanf("%d", &high);
 printf("Armstrong numbers between %d and %d are: ", low, high);
 for (i = low; i <= high; i++) {
 num = i;
 sum = 0;
 digit = (int) log10(num) + 1;
 while (num > 0) {
 sum += pow(num % 10, digit);
 num /= 10;
 }
 if (i == sum) {
 printf("%d ", i);
 }
 }
 return 0;
}
Output:
4. Write a program to print numbers between two given numbers which is 
divisible by 2 and not by 3.
Program:
#include <stdio.h>
int main() {
 int i,low, high;
clrscr();
 printf("Enter the lower limit: ");
 scanf("%d", &low);
 printf("Enter the upper limit: ");
 scanf("%d", &high);
 printf("Numbers between %d and %d are: ", low, high);
 for (i = low; i <= high; i++) {
 if (i % 2 == 0 && i % 3 != 0) {
 printf("%d ", i);
 }
 }
 return 0;
}
Output:
5. Write a program to check whether a given string is palindrome or not.
Program:
#include <stdio.h>
#include <string.h>
int main() {
 char string1[20];
 int i, length;
 int flag = 0;
 clrscr();
 printf("Enter a string: ");
 scanf("%s", string1);
 length = strlen(string1);
 for (i = 0; i < length / 2; i++) {
 if (string1[i] != string1[length - i - 1]) {
 flag = 1;
 break;
 }
 }
 if (flag) {
 printf("%s is not a palindrome\n", string1);
 } else {
 printf("%s is a palindrome\n", string1);
 }
 return 0;
}
Output:
6. WAP program to calculate the sum of all positive even numbers and the 
sum of all negative odd numbers from a set of numbers. You can enter 0 
(zero) to quit the program and thus it displays the result.
Program:
#include <stdio.h>
int main() {
 int num, sum_even = 0, sum_odd = 0;
clrscr();
 do {
 printf("Enter a number (0 to quit): ");
 scanf("%d", &num);
 if (num > 0 && num % 2 == 0) {
 sum_even += num;
 } else if (num < 0 && num % 2 != 0) {
 sum_odd += num;
 }
 } while (num != 0);
 printf("The sum of all positive even numbers is %d\n", sum_even);
 printf("The sum of all negative odd numbers is %d\n", sum_odd);
 return 0;
}
Output:
7. Construct C programs to print the following patterns using loop 
statement.
Program:
#include <stdio.h>
int main() {
 int i, j;
 for (i = 1; i <= 5; i++) {
 for (j = 1; j <= i; j++) {
 printf("%d", i);
 }
 printf("\n");
 }
 return 0;
}
Output:
#include <stdio.h>
int main() {
int i,j;
int rows = 5; 
clrscr();
for (i = 1; i <= rows; i++) {
for (j = 1; j <= i; j++) {
if (i % 2 == 0) {
printf("# ");
} else {
printf("* ");
}
}
printf("\n");
}
return 0;
}
Output:
#include <stdio.h>
int main() {
 int i, j;
 int rows = 4; 
 for(i = 1; i <= rows; i++) {
 for(j = 1; j <= i; j++) {
 
 if((i + j) % 2 == 0) {
 printf("1 ");
 } else {
 printf("0 ");
 }
 }
 printf("\n"); 
 }
 return 0;
}
Output:
#include <stdio.h>
int main() {
 int i, j, k;
 for(i = 1; i <= 4; i++) {
 for(j = 1; j <= 4 - i; j++) {
 printf(" ");
 }
 for(k = 1; k <= i; k++) {
 printf("%d ", i);
 }
 printf("\n");
 }
 return 0;
}
Output:
#include <stdio.h>
int main() {
 int i, j, rows;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for (i = rows; i >= 1; --i) {
 for (j = 1; j <= i; ++j) {
 printf("* ");
 }
 printf("\n");
 }
 return 0;
}
Output:
#include <stdio.h>
int main() {
int i,j;
int rows = 4;
int cols = 5;
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
if ((i == 0 || i == rows - 1) || (j == 0 || j == cols - 1)) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
return 0;
}
Output:
#include <stdio.h>
int main()
{
int i, j,k;
char ch = 'A';
int num = 1;
int space_count = 3;
for (i = 1; i <= 4; i++)
{
for (k = 0; k < space_count; k++)
{
printf(" ");
}
space_count--;
for (j = 1; j <= i; j++)
{
if (i % 2 != 0)
{
printf("%d ", num);
num++;
}
else
{
printf("%c ", ch);
ch++;
}
}
printf("\n");
}
return 0;
}
Output:

1. Write a program to sort the array of elements using bubble sort.
Program:
#include <stdio.h>
void swap(int *xp, int *yp) {
 int temp = *xp;
 *xp = *yp;
 *yp = temp;
}
void bubbleSort(int arr[], int n) {
int i,j;
 for (i = 0; i < n-1; i++) {
 
for (j = 0; j < n-i-1; j++) {
 
 if (arr[j] > arr[j+1]) {
swap(&arr[j], &arr[j+1]);
 }
 }
 }
}
void printArray(int arr[], int size) {
int i;
 for (i = 0; i < size; i++)
 printf("%d ", arr[i]);
 printf("\n");
}
int main() {
 int arr[] = {64, 25, 12, 22, 11};
 int n = sizeof(arr)/sizeof(arr[0]);
 
 printf("Original Array: ");
 printArray(arr, n);
 bubbleSort(arr, n);
 printf("Sorted Array: ");
 printArray(arr, n);
 return 0;
}
Output:
2. Write a Program to accept a string and to convert all letters to uppercase without using 
String Functions.
Program:
#include <stdio.h>
void convertToUpperCase(char *str) {
 while (*str != '\0') {
 if (*str >= 'a' && *str <= 'z') {
 *str = *str - 'a' + 'A';
 }
 str++;
 }
}
int main() {
 char inputString[100];
 int i;
 printf("Enter a string: ");
 fgets(inputString, sizeof(inputString), stdin);
 for (i = 0; inputString[i] != '\0'; i++) {
 if (inputString[i] == '\n') {
 inputString[i] = '\0';
 break;
 }
 }
 convertToUpperCase(inputString);
 printf("String in Uppercase: %s\n", inputString);
 return 0;
}
Output:
3. Write a program to find similar elements in an array and find their occurrence. Display the 
array element, index of the element, and its number of occurrences.
Program:
#include <stdio.h>
int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 int n = sizeof(arr)/sizeof(arr[0]);
 int count = 0;
 int i,j;
 for (i = 0; i < n; i++) {
 count = 0;
for (j = i + 1; j < n; j++) {
 if (arr[i] == arr[j]) {
 count++;
 }
 }
 if (count > 0) {
 printf("Element %d at index %d occurs %d times.\n", arr[i], i, count + 1);
 }
 }
 return 0;
}
Output:
4. Write a program to search for an element using binary search method.
Program: 
#include <stdio.h>
int binary_search(int arr[], int n, int x) {
 int low = 0, high = n - 1;
 while (low <= high) {
 int mid = low + (high - low) / 2;
 if (arr[mid] == x) {
 return mid;
 } else if (arr[mid] < x) {
 low = mid + 1;
 } else {
 high = mid - 1;
 }
 }
 return -1;
}
int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int x = 5;
 int result = binary_search(arr, n, x);
 if (result == -1) {
 printf("Element not found in the array.\n");
 } else {
 printf("Element found at index %d.\n", result);
 }
 return 0;
}
Output:
5. Develop a program to print sum of second and second last element of an array.
Program:
#include <stdio.h>
int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int sum = arr[1] + arr[n - 2];
 printf("The sum of the second and second last element of the array is %d.\n", sum);
 return 0;
}
Output:

Functions
1. Build a function to check number is prime or not. If number is prime then function return 
value 1 otherwise return 0.
Program:
#include <stdio.h>
int isPrime(int num) {
 if (num <= 1) {
 return 0;
 }
 for (int i = 2; i * i <= num; i++) {
 if (num % i == 0) {
 return 0;
 }
 }
 return 1;
}
int main() {
 int num;
 printf("Enter a number to check if it is prime: ");
 scanf("%d", &num);
 
 if (isPrime(num)) {
 printf("%d is a prime number.\n", num);
 } else {
 printf("%d is not a prime number.\n", num);
 }
 return 0;
}
Output:
2. Write a program to calculate nCr using user defined function. nCr = n! / (r! * (n-r)!).
Program:
#include <stdio.h>
int fact(int num) {
 int result = 1; int i;
 for (i = 1; i <= num; i++) {
 result *= i;
 }
 return result;
}
int main() {
 int n, r, ncr;
 printf("Enter a value for n: ");
 scanf("%d", &n);
 printf("Enter a value for r: ");
 scanf("%d", &r);
 ncr = fact(n) / (fact(r) * fact(n - r));
 printf("Value of %dC%d = %d\n", n, r, ncr);
 return 0;
}
Output:
3. Write a program to find factorial of a given number using recursion.
Program:
#include <stdio.h>
unsigned long long fact(int num) {
 if (num == 0)
 return 1;
 else
 return num * fact(num - 1);
}
int main() {
 int num;
 unsigned long long factorial;
 printf("Enter any number: ");
 scanf("%d", &num);
 factorial = fact(num);
 printf("Factorial of %d is %llu\n", num, factorial);
 return 0;
}
Output:
4. WAP to use recursive calls to evaluate F(x) = x – x 3 /3! + x5 /5! – x 7 /7! + … + xn /n!
Program: 
#include <stdio.h>
#include <math.h>
int fact(int num) {
 if (num == 1)
 return 1;
 else
 return num * fact(num - 1);
}
float rec_call(int x, int n) {
 static float sum = 0;
 if (n == 1)
 return sum + x;
 if (n % 2 == 0) {
 sum -= (pow(x, (2 * n) - 1) * 1.0) / fact((2 * n) - 1);
 } else {
sum += (pow(x, (2 * n) - 1) * 1.0) / fact((2 * n) - 1);
 }
 return rec_call(x, --n);
}
int main() {
 int n, x;
 float result = 0;
 clrscr();
 printf("Enter a value for x: ");
 scanf("%d", &x);
 printf("Enter the number of iterations (n): ");
 scanf("%d", &n);
 result = rec_call(x, n);
 printf("Result of F(x) = %.6f\n", result);
 return 0;
}
Output:
5. Complete a function that determines how many elements in an array of ints are greater 
than or equal to a given value. numGreater(int[] data, int value) Here are some examples of 
expected return values for various arrays and values. numGreater( {}, 10 ) -> 0 numGreater( {1, 2, -
4, 1, 6}, 10 ) -> 0 numGreater( {1, 20, -4, 10, 6}, 10 ) -> 2 numGreater( {1, 2, -4, 1, 6}, 0 ) -> 4 
numGreater( {1, 2, -4, 1, 6}, -10 ) -> 5.
Program:
#include <stdio.h>
int numGreater(int data[], int size, int value) {
 int count = 0;
 int i;
 for (i = 0; i < size; ++i) {
 if (data[i] >= value) {
 count++;
 }
 }
 return count;
}
int main() {
 int n;

 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d integers for the array:\n", n);
 for (int i = 0; i < n; ++i) {
 scanf("%d", &arr[i]);
 }
 int value;
 printf("Enter a value to compare with: ");
 scanf("%d", &value);
 printf("Number of elements greater than or equal to %d: %d\n", value, numGreater(arr, n, value));
 return 0;
}
Output:
6. Asha is studying in the 6th standard and has received a building block set as a gift from her 
friend on the occasion of her birthday. The blocks have numbers written on them. She has 
arranged the building blocks sequentially with random numbered blocks. Now, her brother 
Ajay wants to help her insert a new block in a specific location. Write a C program to assist 
Asha in inserting a new block in the position specified by her brother.
▪ Get the following inputs from the user:
i. The number of blocks initially arranged.
ii. The numbers written on each block sequentially.
iii. The location where the new block should be inserted (a valid position between 0 and 
the total number of blocks).
iv. The number to be inserted.
▪ Insert the new block at the specified location while shifting the existing blocks, if necessary.
▪ Display the updated list of blocks after insertion.
Program:
#include <stdio.h>
void insertBlock(int blocks[], int *numBlocks, int position, int newBlock) {
 if (position < 0 || position > *numBlocks) {
 printf("Invalid position. Please enter a valid position between 0 and %d.\n", *numBlocks);
 return;
 }
 for (int i = *numBlocks; i > position; i--) {
 blocks[i] = blocks[i - 1];
 }
 blocks[position] = newBlock;
 (*numBlocks)++;
}
int main() {
 int numBlocks;
 printf("Enter the number of blocks initially arranged: ");
 scanf("%d", &numBlocks);
 int blocks[100]; 
 printf("Enter the numbers written on each block sequentially:\n");
 for (int i = 0; i < numBlocks; i++) {
 scanf("%d", &blocks[i]);
 }
 int position, newBlock;
 printf("Enter the location where the new block should be inserted (between 0 and %d): ", 
numBlocks);
 scanf("%d", &position);
 printf("Enter the number to be inserted: ");
 scanf("%d", &newBlock);
 insertBlock(blocks, &numBlocks, position, newBlock);
 printf("Updated list of blocks after insertion:\n");
 for (int i = 0; i < numBlocks; i++) {
 printf("%d ", blocks[i]);
 }
 printf("\n");
 return 0;
}
Output:
BECE320E – Embedded C Programming
Winter Semester 2023 – 2024
Assessment 6
Basics of Embedded C Programming
Name – Vaibhav Kumawat
Register No – 21BLC1122
Lab Slot: L13+L14
Faculty: Dr Sudhakaran
1. Write an 8051 C program to send values 00 – FF to port P1.
#include <reg51.h> 
void main(void)
{
unsigned char z;
for (z=0;z<=255;z++)
P1=z;
}

2. Write an 8051 C program to send hex values for ASCII characters of 0, 1, 2, 3, 4, 5, A, B, C, 
and D to port P1.
#include <reg51.h>
void main(void)
{
unsigned char mynum[]={0,1,2,3,4,5};
unsigned char z;
for (z=0;z<=5;z++)
P1=mynum[z];
}

3. Write an 8051 C program to toggle all the bits of P1 continuously.
#include <reg51.h>
void main(void)
{
 for (;;)
 {
 P1 = 0x55; // Toggle P1 with binary pattern 01010101
 P1 = 0xAA; // Toggle P1 with binary pattern 10101010
 }
}
4. Write an 8051 C program to toggle bits of P1 continuously forever with some delay.
#include <reg51.h>
void main(void)
{
unsigned int x;
for (;;) //repeat forever
{
P1=0x55;
for (x=0;x<40000;x++); //delay size unknown
P1=0xAA;
for (x=0;x<40000;x++);
}
}

5. Write an 8051 C program to send values of –4 to +4 to port P1
//Signed numbers
#include <reg51.h>
void main(void)
 {
 char mynum[]={+1,-1,+2,-2,+3,-3,+4,-4}; 
 signed char z; 
 for (z=0;z<=8;z++) 
 P1=mynum[z]; 
}
6. Write an 8051 C program to toggle bit D0 of the port P1 (P1.0) 50,000 times.
#include <reg51.h>
sbit MYBIT=P1^0;
void main(void)
{
unsigned int z;
for (z=0;z<=50000;z++)
{ 
MYBIT=0;
MYBIT=1;
}
}


1. Write a 8051 C program to toggle LED by switch
#include<reg51.h> 
sbit Led = P1^1; //pin connected to toggle Led 
sbit Switch =P1^7; //Pin connected to toggle led 
int main() 
{ 
 Led = 0; //configuring as output pin 
 Switch = 1; //Configuring as input pin 
 while(1
 { 
 if(Switch == 0) 
 { 
 Led =1; //Led On 
 } 
 else 
 { 
 Led =0; //Led Off 
 } 
 } 
}
Output:
Switch is floating -> LED Off
Switch is connected to ground
-> LED On
2. Write a 8051 C program to toggle LED with delay
#include<reg52.h>
sbit LED = P1^0;
void Delay(void);
void main (void) 
{ 
 while(1) // infinite loop 
 { 
 LED = 0; // LED ON 
 Delay(); 
 LED = 1; // LED OFF 
 Delay(); 
 } 
} 
void Delay(void) 
{ 
 int j; 
 int i; 
 for(i=0;i<10;i++) 
 { 
 for(j=0;j<10000;j++) 
 {}
} 
} 

1.Write a 8051 C program for TIMER 0 MODE 1 with 50ms Delay.
#include <reg51.h>
void T0M1Delay(void); // Function prototype for Timer 0 mode 1 delay
void main(void) {
 unsigned char x;
 P2 = 0x55; // Initial value for P2
 while (1) {
 P2 = ~P2; // Toggle P2
 for (x = 0; x < 20; x++) {
 T0M1Delay(); // Delay using Timer 0 mode 1
 }
 }
}
void T0M1Delay(void) {
 TMOD = 0x01; // Set Timer 0 to mode 1
 TL0 = 0x4B; // Set the initial value for Timer 0 for a 50 ms delay
 TH0 = 0xFD; // Reload value for Timer 0
 TR0 = 1; // Start Timer 0
 while (TF0 == 0); // Wait for Timer 0 overflow
 TR0 = 0; // Stop Timer 0
 TF0 = 0; // Clear Timer 0 overflow flag
}
Output:
OUTPUT Verification:
2.Write a 8051 C program for TIMER 0 MODE 2 with 250 ms delay.
#include <reg51.h>
void T0M2Delay(void); 
void main(void) {
 unsigned char x;
 P2 = 0x55; 
 while (1) {
 P2 = ~P2; 
 for (x = 0; x < 20; x++) {
 T0M2Delay(); 
 }
 }
}
void T0M2Delay(void) {
 TMOD = 0x02; // Set Timer 0 to Mode 2
 TL0 = 0x00; // Set initial value for low byte
 TH0 = 0xEE; // Set initial value for high byte
 TR0 = 1; // Start Timer 0
 while (TF0 == 0); // Wait for overflow
 TR0 = 0; // Stop Timer 0
 TF0 = 0; // Clear overflow flag
}
OUTPUT:
OUTPUT VERIFICATION:
3.Write a 8051 C program for TIMER 1 MODE 1 with 500ms Delay
#include <reg51.h>
void T1M1Delay(void); 
void main(void) {
 unsigned char x;
 P2 = 0x55; 
 while (1) {
 P2 = ~P2; 
 for (x = 0; x < 20; x++) {
 T1M1Delay(); 
 }
 }
}
void T1M1Delay(void) {
 TMOD = 0x10; 
 TL1 = 0xFE; 
 TH1 = 0xA5; 
 TR1 = 1; 
 while (TF1 == 0); 
 TR1 = 0; 
 TF1 = 0; 
}
Output:
Output Verification:
4.Write a 8051 C program for TIMER 1 MODE 2 with 2500Hz delay
#include <reg51.h>
void T1M2Delay(void);
sbit mybit = P2^7;
void main(void){
 unsigned char x;
 while (1) {
 mybit=~mybit;
 T1M2Delay();
 }
 }
void T1M2Delay(void){
 TMOD=0x20; 
TH1=-184;
 TR1=1;
 while (TF1==0);
 TR1=0;
 TF1=0;
}

Hardware
1. Assume that XTAL = 11.0592 MHz, write a C program continuously gets a single bit of data from PI. 
7 and sends it to P1.0, Simultaneously generate a square wave of 2 kHz frequency on pin P1.5. 
Crystal frequency is 11.0592MHz.(a) T = 1 / f = 1 / 2 kHz = 500 us the period of square wave.(b) 1 / 2 
of it for the high and low portion of the pulse is 250 us. (c) 250 us / 1.085 us = 230 and 65536 – 230 = 
65306 which in hex FF1AH. (d) TL = 1A and TH = FF, all in hex.
Code:
#include <reg51.h>
sbit SW =P1^7;
sbit IND =P1^0;
sbit WAVE =P1^5;
void timer0(void) interrupt 1
{
WAVE=~WAVE; //toggle pin
}
void main()
{
SW=1; //make switch input
TMOD=0x01;
TL0=0xFF;
TH0=0x1A; //for delay
IE=0x82; //enable interrupt for timer 0
TR0=1;
while (1)
{
IND=SW; //send switch to LED
}
}
Output:
3. A switch is connected to pin P3.2. When the switch is pressed the corresponding line goes low 
Display 0A at port0. Write a C program to blink alternate LEDS connected to Port 1 Simultaneously.
Code:
#include <reg51.h>
sbit SW =P3^2;
unsigned int i;
void extint0() interrupt 0
{
P0=0x0A;
}
//void delay_ms(unsigned int j);
void main()
//unsigned int i;
{
SW=1;
IE=0x81;
while(1)
{
P1=0x00;
for(i=250;i>0;i--)
{}
P1=0xAA;
for(i=250;i>0;i--)
{}
}
}
Output:
Software
4. Write a C program using interrupts to do the following:(a) Generate a 10 KHz frequency on P2.1 
using T0 8-bit auto-reload (b) Assume that the clock pulse is connected to external interrupt1 EX1. 
Count the pulses and display it on P0. Assume that XTAL = 11.0592 MHz. Set the baud rate at 9600.
Code:
#include <reg51.h>
sbit WAVE =P2^1;
unsigned char cnt;
void timer0() interrupt 1
{
WAVE=~WAVE; //toggle pin
}
//void timer1() interrupt 3
void extint1() interrupt 2
{
cnt++; //increment counter
P0=cnt; //display value on pins
}
void main()
{
cnt=0; //set counter to 0
TMOD=0x02;
TH0=0x46; //10 KHz
IE=0x86; //enable interrupts
TR0=1; //start timer 0
while (1); //wait until interrupted
}
Output:
Software
1. Simple Transfer
Code:
#include <reg51.h>
void main(void){
unsigned char mybyte;
TMOD=0x20; //use Timer 1, mode 2
TH1=0xFA; //4800 baud rate
SCON=0x50;
TR1=1; //start timer
while (1) { //repeat forever
while (RI==0); //wait to receive
mybyte=SBUF; //save value
P1=mybyte; //write value to port
RI=0;
}
}
Output:
2. Receive
Code:
#include <reg51.h>
unsigned char input;
void main(void) {
 TMOD = 0x20; //Use Timer 1, Mode 2
TH1 = 0xFA; //4800 baud rate
SCON = 0x50;
TR1 = 1;
while (1) {
input= P1;
SBUF = input;
while (TI==0);
TI = 0;
}
}
Output:
3. String Transfer
Code: 
#include <reg51.h>
void main(void) {
unsigned char msg[9] = "21BLC1453";
unsigned int i = 0;
TMOD = 0x20; //Use Timer 1, Mode 2
TH1 = 0xFA; //4800 baud rate
SCON = 0x50;
TR1 = 1;
while (1) {
for(i=0; i<9; i++) {
SBUF = msg[i];
while (TI==0);
TI = 0;
}
SBUF = ' ';
while (TI==0);
TI = 0;
}
}
Output:
4. Serial Interrupt -> Click one key -> send ack
Code:
#include <reg51.h>
void main()
{
 TMOD=0x20; //Choosing Timer mode
 TH1=0xFD; //Selecting Baud Rate
 SCON=0x50; //Serial mode selection
 TR1=1;
 IE=0x90; //Enabling Serial Interrupt
 while(1);
 }
void ser_intr(void)interrupt 4 //Subroutine for Interrupt
{
 char c;
 c=SBUF; 
 IE=0x00; //Turning off interupt to prevent recursion
 if(c==0x20)
 {
 P0=~P0; 
 SBUF='A'; //Sending back "ACK" as Acknowledgement 
 while(TI==0);
 TI=0;
 SBUF='C';
 while(TI==0);
 TI=0;
 SBUF='K';
 while(TI==0);
 TI=0;
 }
 RI=0;
 IE=0x90; //Reactivating the interupt
 }
Output:

LCD Interfacing

1.Write a 8051 C program for LCD Display Control and display “SENSE”.
Code:
#include <reg51.h>
void LCD_CMD(unsigned char CMD);
void LCD_DATA(unsigned char DATA);
void DELAY_ms(unsigned char j);
sbit RS= P3^7;
sbit RW= P3^6;
sbit EN= P3^5;
void main()
{
P2=0x00; //Port used to connect LCD datapins D0-D7
LCD_CMD(0x01); //Clear the display screen
DELAY_ms(5);
LCD_CMD(0x0E); //Display on, cursor blinking
DELAY_ms(5);
LCD_CMD(0x38); //2 lines, 5x8 matrix, 8bit mode
DELAY_ms(5);
LCD_CMD(0x80); //Force the cursor to the beginning of the 1st line
DELAY_ms(5);
LCD_DATA('S');
LCD_DATA('E');
LCD_DATA('N');
LCD_DATA('S');
LCD_DATA('E');
while(1);
}
void LCD_CMD(unsigned char CMD)
{
P2=CMD;
RS=0;
RW=0;
EN=1;
DELAY_ms(5);
EN=0;
}
void LCD_DATA(unsigned char DATA)
{
P2=DATA;
RS=1;
RW=0; 
EN=1;
DELAY_ms(5);
EN=0;
}
void DELAY_ms(unsigned int j)
{
unsigned int i;
for(;j>0;j--)
{
for(i=250;i>0;i--);
for(i=250;i>0;i--);
}
}
Output:
OUTPUT Verification:
2.Write a 8051 C program for LCD Interface to display two messages on two seprate
lines on LCD.
Code:
#include <reg51.h>
void LCD_CMD(unsigned char CMD);
void LCD_DATA(unsigned char DATA);
void DELAY_ms(unsigned char j);
sbit RS= P3^7;
sbit RW= P3^6;
sbit EN= P3^5;
char message1[] = "Hello";
char message2[] = "World";
void main()
{
P2=0x00; //Port used to connect LCD datapins D0-D7
LCD_CMD(0x01); //Clear the display screen
DELAY_ms(5);
LCD_CMD(0x0E); //Display on, cursor blinking
DELAY_ms(5);
LCD_CMD(0x38); //2 lines, 5x8 matrix, 8bit mode
DELAY_ms(5);
LCD_CMD(0x80); //Force the cursor to the beginning of the 1st line
DELAY_ms(5);
for(int i=0; message1[i]!='\0'; i++)
{
LCD_DATA(message1[i]);
}
LCD_CMD(0xC0); //Force the cursor to the beginning of the 2nd line
DELAY_ms(5);
for(int i=0; message2[i]!='\0'; i++)
{
LCD_DATA(message2[i]);
}
while(1);
}
void LCD_CMD(unsigned char CMD)
{
P2=CMD;
RS=0;
RW=0;
EN=1;
DELAY_ms(5);
EN=0;
}
void LCD_DATA(unsigned char DATA)
{
P2=DATA;
RS=1;
RW=0;
EN=1;
DELAY_ms(5);
EN=0;
}
void DELAY_ms(unsigned int j)
{
unsigned int i;
for(;j>0;j--)
{
for(i=250;i>0;i--);
for(i=250;i>0;i--);
}
}
Output:
Output Verification:
Result:
Thus, the problems based on LCD Interacing and hardware has been solved in Keil μVision and
were also verified after running successfully.
