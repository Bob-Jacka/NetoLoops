#include "iolib.hpp"

int main()
{
	int enteredNumber = 0;
	println("Введите целое число:");
	intUserInput(enteredNumber);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", enteredNumber, i, enteredNumber * i);
	}
}