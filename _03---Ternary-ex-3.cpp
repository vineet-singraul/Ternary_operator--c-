#include <iostream>
using namespace std;
int main()
{
      int userGivenNumber;
      cout << " Enter The Any One Number : ";
      cin >> userGivenNumber;

      (((userGivenNumber % 2) == 0 && (userGivenNumber > 0)) || (userGivenNumber % 5) == 0) ? cout << "Nuber /is Divisible and Even:" : cout << "Not Divisible:";
}
