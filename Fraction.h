//Class Fraction Header File, Fraction.h, that Declares Attributes and Methods
#pragma once
#include <iostream>

using namespace std;

//Fraction Class 
class Fraction {

private:
	//Attribute Declarations
	int numerator;
	int denominator;
	int gcd(int numerator, int denominator);
	int reduce(int &numerator, int &denominator);

public:

	//Method Declarations
	Fraction();
	Fraction(int numerator, int denominator);

	//Set Methods
	void setNumerator(int);
	void setDenominator(int);

	//Get Methods
	int getNumerator() const;
	int getDenominator() const;

	void Print();

	//Operator Methods
	Fraction operator+(const Fraction& f) const; 
	Fraction operator-(const Fraction& f) const;
	Fraction operator*(const Fraction& f) const; 
	Fraction operator/(const Fraction& f) const;
	Fraction operator%(const Fraction& f) const;


	//Bool Methods
	bool operator!=(const Fraction& f) const;
	bool operator==(const Fraction& f) const;
	bool operator<=(const Fraction& f) const;
	bool operator>=(const Fraction& f) const;
	bool operator<(const Fraction& f) const;
	bool operator>(const Fraction& f) const;

	//Friend Methods to Access Private Attributes 
	friend ostream& operator<<(ostream& out, const Fraction&);
	friend istream& operator>>(istream& in, Fraction&);

	~Fraction();

};

