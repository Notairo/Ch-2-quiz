#include "io.h"
int main () // Reads two separate integers from the user, adds them together, and then outputs the answer.
{
	int firstNum{ readNumber() };
	int secondNum{ readNumber() };
	writeAnswer(firstNum, secondNum);
	return 0;
}