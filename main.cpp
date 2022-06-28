// Hoppock, Zachary
// doWhileSum.cpp
// 10/13/2020
// Using a do while loop, input numbers that will add up together in a sum
// Version # 1
#include <iostream>
using namespace std;

int main()
{
  int number;
  int sum = 0;
  do
  {
    cout << "Enter a number:  ";
    cin >> number;
    sum = sum + number;
  }
  while (number != 0);

  cout << "Total sum = " << sum;
  return 0;
}