#include <iostream>
using namespace std;

void main() {

	//The factorial of a number
	//6! = 1*2*3*4*5*6 = 720

	int number;
	cout << "Number: ";
	cin >> number; // Value of 3
	
	int factorial = 1; 

	//for (int i = 1; i <= number; i++) {// i = 1
	//	factorial = factorial * i;
	//}

	//6!=6*5*4*3*2*1=720
	for (int i = number; i >= 1; i--) {
		factorial = factorial * i;
	}

	cout << number << "!" << factorial;

	system("pause>0");
}