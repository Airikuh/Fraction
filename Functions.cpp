
//Functions.cpp File for Methods of Fraction Class
#include "Fraction.h"
#include <cmath>

//Member Intialization Method
Fraction::Fraction() : numerator(1), denominator(1) {}

//Method to Call GCD and Change Value
Fraction::Fraction(int numerator, int denominator) {
	setDenominator(denominator);
	int gc = gcd(numerator, denominator);
	if (gc < 0) {
		gc = -gc;
	}
	setNumerator(numerator / gc);
	setDenominator(denominator / gc);

}
//GCD Method
int Fraction::gcd(int numerator, int denominator) {
	if ((numerator % denominator) == 0) {
		return denominator;
	}
	else {
		return gcd(denominator, numerator % denominator);
	}

}

//Reduce Fraction Method
int Fraction::reduce(int &numerator, int &denominator ) {
	if (numerator <= 0 || denominator <= 0)
		return 1;
	else
	{
		int commonDenominator = gcd(numerator, denominator);
		denominator /= commonDenominator;
		denominator /= commonDenominator;
	}
}
//Set Numerator Method
void Fraction::setNumerator(int numerator) {
	//This Pointer to Numerator Object
	this->numerator = numerator;

}
//Set Denominator Method
void Fraction::setDenominator(int denominator) {
	//This Pointer to Denominator Object
	this->denominator = denominator;

}
//Get Numerator Method
int Fraction::getNumerator() const {

	return numerator;

}
//Get Denominator Method
int Fraction::getDenominator() const {

	return denominator;

}


//Method to Display the Fraction as a Fraction
void Fraction::Print() { 
	cout << numerator << "/" << denominator << endl;
}


//Add Operator Method
Fraction Fraction::operator+(const Fraction& f) const {

	//Declare Variables
	int num1 = numerator;
	int den1 = denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Add Variable Equations
	int addNumerator = ((num1 * den2) + (den1 * num2));
	int addDenominator = (den1 * den2);

	//Call Reduce and GCD Form
	Fraction result(addNumerator, addDenominator);

	//Return New Amount
	return result;

}
//Subtract Operator Method
Fraction Fraction::operator-(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Subtract Variable Equations
	int subtractNumerator = ((num1 * den2) - (den1 * num2));
	int subtractDenominator = (den1 * den2);
	
	//Call Reduce and GCD Form
	Fraction result(subtractNumerator, subtractDenominator);

	//Return New Amount
	return result;

}
//Multiply Operator Method
Fraction Fraction::operator*(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Multiply Variable Equations
	int multiplyNumerator = (num1 * num2);
	int multiplyDenominator = (den1 * den2);

	//Call Reduce and GCD Form
	Fraction result(multiplyNumerator, multiplyDenominator);

	//Return New Amount
	return result;

}

//Divide Operator Method
Fraction Fraction::operator/(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Divide Variable Equations
	int divideNumerator = (num1 * den2);
	int divideDenominator = (num2 * den1);

	//Call Reduce and GCD Form
	Fraction result(divideNumerator, divideDenominator);

	//Return New Amount
	return result;

}

Fraction Fraction::operator%(const Fraction& f) const {

	//Declare Variables
	int num1 = numerator;
	int den1 = denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Alternative Way of Finding Modulus, Had Issues With this Method
	int modDivisor = (den1 * num2) / (den1 * den2);
	int modDividend = (den2 * num1);
	int modMult = modDivisor * modDividend;
	int newMod = modMult - modDividend;

	//Modulus is Not Negative
	if (newMod < 0) {
		newMod = newMod * (-1);
	}

	//Method to Return, Display Over 1 For Fraction Displays
	Fraction result(newMod, 1);

	//Return New Amount
	return result;
}


//Less Than or Equal To Boolean Method
bool Fraction::operator<=(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 / denominator1) <= (numerator2 / denominator2))
		return true;
	else
		return false;

}
//Greater Than or Equal To Boolean Method
bool Fraction::operator>=(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;


	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 / denominator1) >= (numerator2 / denominator2))
		return true;
	else
		return false;

}
//Less Than Boolean Method
bool Fraction::operator<(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 / denominator1) < (numerator2 / denominator2))
		return true;
	else
		return false;

}
//Greater Than Boolean Method
bool Fraction::operator>(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 / denominator1) > (numerator2 / denominator2))
		return true;
	else
		return false;

}
//Not Equal Boolean Method
bool Fraction::operator!=(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 != numerator2) || (denominator1 != denominator2))
		return true;
	else
		return false;

}
//Equal Boolean Method
bool Fraction::operator==(const Fraction& f) const {

	//Declare Variables
	int num1 = this->numerator;
	int den1 = this->denominator;
	int num2 = f.numerator;
	int den2 = f.denominator;

	//Calculate Variable Information
	double numerator1 = num1 * den2;
	double denominator1 = den1 * den2;
	double numerator2 = num2 * den1;
	double denominator2 = den2 * den1;

	//If-Else Compare for Return
	if ((numerator1 == numerator2) && (denominator1 == denominator2))
		return true;
	else
		return false;

}



//Friend Outstream Method to Access Private Attributes 
ostream& operator<<(ostream& out, const Fraction& f) {

	out << f.numerator << "/" << f.denominator;

	return out;

}


//Friend Instream Method to Access Private Attributes 
istream& operator>>(istream& in, Fraction& f){

	char character;

	in >> f.numerator;
	in >> character;
	in >> f.denominator;

	return in;

}
//Destructor that Shows Numerator and Denominator as a Fraction
Fraction::~Fraction(void) {
	cout << "Deleting Object" << endl;
	cout << numerator << "/" << denominator << endl;
}

