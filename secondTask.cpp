#include "iolib.hpp"

int main()
{
	int sum = 0;
	int enteredNumber = 0;
	println("Введите целое число:");
	intUserInput(enteredNumber);
    	while (enteredNumber > 0) {
        	sum += enteredNumber % 10;
        	enteredNumber /= 10;
    	}

	print("Сумма цифр: ");
	print(sum);
	println();
}
