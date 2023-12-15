//Main Program to Get and Display Fractions
#include "Fraction.h"

int main() {
	//Variable Declarations
	int numerator1, numerator2, denominator1, denominator2;
	Fraction result;
	Fraction fract3;

	//User Input for First Fraction
	cout << "Please Enter Fraction 1: " << endl;
	cout << "Numerator: ";
	cin >> numerator1;
	while (numerator1 == 0) {
		cout << "Please Provide a Value Other Than Zero. " << endl;
		cout << "Numerator: ";
		cin >> numerator1;
	}
	cout << "Denominator: ";
	cin >> denominator1;
	while (denominator1 == 0) {
		cout << "Cannot Divide by Zero! Please Choose a New Number! " << endl;
		cout << "Denominator: ";
		cin >> denominator1;
	}

	//If-Change Fraction to Positive if Two Negative Integers Received 
	if ((numerator1 < 0) && (denominator1 < 0)) {
		numerator1 = numerator1 * (-1);
		denominator1 = denominator1 * (-1);
	}
	//Else if to Change Numerator to Negative if Negative Denominator Input Received
	else if (denominator1 < 0) {
		numerator1 = numerator1 * (-1);
		denominator1 = denominator1 * (-1);
	}

	//Method Call 
	Fraction fract1(numerator1, denominator1);


	cout << endl;
	//User Input for Second Fraction
	cout << "Enter Fraction 2: " << endl;
	cout << "Numerator: ";
	cin >> numerator2;
	while (numerator2 == 0) {
		cout << "Please Provide a Value Other Than Zero. " << endl;
		cout << "Numerator: ";
		cin >> numerator2;
	}
	cout << "Denominator: ";
	cin >> denominator2;
	while (denominator2 == 0) {
		cout << "Cannot Divide by Zero! Please Choose a New Number! " << endl;
		cout << "Denominator: ";
		cin >> denominator2;
	}
	//If-Change Fraction to Positive if Two Negative Integers Received 
	if ((numerator2 < 0) && (denominator2 < 0)) {
		numerator2 = numerator2 * (-1);
		denominator2 = denominator2 * (-1);
	}
	//Else if to Change Numerator to Negative if Negative Denominator Input Received
	else if (denominator2 < 0) {
		numerator2 = numerator2 * (-1);
		denominator2 = denominator2 * (-1);
	}

	//Method Call
	Fraction fract2(numerator2, denominator2);
	cout << endl;

	//Method Call to Display Fraction 1 as a Fraction
	cout << "Fraction 1: " << endl;
	fract1.Print();

	//Method Call to Display Fraction 2 as a Fraction
	cout << "Fraction 2: " << endl;
	fract2.Print();

	//Addition Method Call
	result = fract1 + fract2;
	cout << fract1 << " + " << fract2 << " = " << result << endl;

	//Subtraction Method Call
	result = fract1 - fract2;
	cout << fract1 << " - " << fract2 << " = " << result << endl;

	//Multiplication Method Call
	result = fract1 * fract2;
	cout << fract1 << " * " << fract2 << " = " << result << endl;

	//Division Method Call
	result = fract1 / fract2;
	cout << fract1 << " / " << fract2 << " = " << result << endl;

	//Modulus Method Call
	result = fract1 % fract2;
	cout << fract1 << " % " << fract2 << " = " << result << endl;

	//Less Than Method Call
	bool boolean = fract1 < fract2;
	if (boolean)
		cout << fract1 << " is less than " << fract2 << endl;
	else
		cout << fract1 << " is not less than " << fract2 << endl;

	//Greater than Method Call
	boolean = fract1 > fract2;
	if (boolean)
		cout << fract1 << " is greater than " << fract2 << endl;
	else
		cout << fract1 << " is not greater than " << fract2 << endl;

	//Less Than or Equal To Method Call
	boolean = fract1 <= fract2;
	if (boolean)
		cout << fract1 << " is less than or equal to " << fract2 << endl;
	else
		cout << fract1 << " is not less than or equal to " << fract2 << endl;

	//Greater Than or Equal To Method Call
	boolean = fract1 >= fract2;
	if (boolean)
		cout << fract1 << " is greater than or equal to " << fract2 << endl;
	else
		cout << fract1 << " is not greater than or equal to " << fract2 << endl;

	//Equalivent Method Call
	boolean = fract1 == fract2;
	if (boolean)
		cout << fract1 << " is equivelent to " << fract2 << endl;
	else
		cout << fract1 << " is not equivelent to " << fract2 << endl;

	//Not Equal Method Call
	boolean = fract1 != fract2;
	if (boolean)
		cout << fract1 << " is not equal to " << fract2 << endl;
	else
		cout << fract1 << " is equal to " << fract2 << endl;


	return 0;

}

