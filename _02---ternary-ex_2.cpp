// Question: Write a program that checks if a number is positive and even using logical operators.
// Concepts: Logical AND, Modulus

#include <iostream>
using namespace std;
int main()
{
      int userGivenNumber;
      cout << " Enter The Any One Number : ";
      cin >> userGivenNumber;

      (((userGivenNumber % 2) == 0 && (userGivenNumber > 0)) || (userGivenNumber % 5) == 0) ? cout << "Nuber /is Divisible and Even:" : cout << "Not Divisible:";
}
