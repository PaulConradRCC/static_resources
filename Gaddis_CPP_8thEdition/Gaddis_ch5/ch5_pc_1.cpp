#include <iostream>
using namespace std;

int main()
{
	// declare x
	int x;
	
	// prompt for a positive value for x
	cout << "Enter a positive integer: ";
	cin >> x;
	
	while ( x<0 )
	{
		// if x is less than zero, output error message and
		// try to get a positive value for x from the user 
		// we loop this loop UNTIL the user enters a positive
		// integer for x.
		cout << "Invalid entry!" << endl;
		cout << "Enter a positive integer: ";
		cin >> x;
	}
	
	// declare and initialize sum and n
	int sum = 0;
	int n = 1;
	
	// while loop to sum all integers from 
	// 1 to x, the variable n is our loop counter
	// that will increment by 1 each time through the
	// loop until n > x.
	while ( n<=x )
	{
		sum = sum + n; // sum is assigned to sum + n
		n = n + 1; // increment n by 1
		// note: important that our loop control variable
		// be incremented (or decremented if the problem requires
		// a "count down") so the expression in the while statement
		// might change from true to false and our loop terminates, 
		// instead of being an infinite loop that never ends.
	}
	
	// output the sum from 1 to x, which is stored in the variable sum
	cout << "The sum of all integers from 1 to " << x << " is: " << sum << endl;
	return 0;
}
