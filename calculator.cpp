#include "calculator.h"

// adding a and b
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// substracting a and b
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// multiplying a and b
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// executing particular business logic
int Calculator::Bus (double a)
{
    return a * 0;
}
