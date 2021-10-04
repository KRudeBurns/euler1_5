/*
Project euler #1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.


*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
//sum of all the nums
int sum = 0;

//i dont want multiples of 15 just multiples of 3 and 5

//since we are going through 1 - 9 (less than 10) I will need a loop
for (int i = 0; i < 1000; ++i)
{
     //skip if divisible by multiples of (3*5)
     if (i % 15 == 0)
	 {
	    cout << "Skipping " << i << endl;
	    ++i;
	 }
	 
	 //check if the num is a multiple of 3	 
	 if (i % 3 == 0)
	 {
	     sum += i;
	 }
	 
	 //check if the num is a multiple of 5
	 if (i % 5 == 0)
	 {
	      sum += i;
	 }
}

//print the sum
cout << "sum = " << sum << endl;

return 0;
}