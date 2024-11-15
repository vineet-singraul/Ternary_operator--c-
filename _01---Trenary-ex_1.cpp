// Question: Write a program that checks whether a number is divisible by both 3 and 5 using logical operators.
// Concepts: Logical AND, Modulus

#include <iostream>
using namespace std;
int main()
{
      int userInput;
      cout << " Enter The Any One Number : ";
      cin >> userInput;

      ((userInput % 2) == 0 && (userInput % 5) == 0) ? cout << "Both Number Are Divisibla:" : cout << "No Any Number Divisible:";
}
