#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

int main () {
	// Local variable declaration:
	int a = 1000;
	int b = 2000;
	int ret;
	
	// calling a function to get max value.
	ret = max(a, b);
	cout << "Max value is : " << ret << endl;
	
	return 0;
}

// fuction returning the max between two numbers
int max(int num1, int num2) {
	// Local variable declaration
	int result;
	
	if (num1 > num2)
	   result = num1;
	else
	   result = num2;
		
	return result;
}
