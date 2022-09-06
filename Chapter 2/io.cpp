#include <iostream>
int readNumber() // get a single integer from the user and return it.
{
	std::cout << "Enter an integer: ";
	int num{ 0 };
	std::cin >> num;
	return num;
}
void writeAnswer(int a, int b) // add two numbers and output the answer.
{
	std::cout << a << " + " << b << " = " << a + b;
}