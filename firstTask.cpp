#include "iolib.hpp"

int main()
{
	int summator = 0;
	while(true) {
		println("Введите целое число или число '0', чтобы закончить:");
		int tmp = 0;
		intUserInput(tmp);
		if (tmp == 0) {
			break;
		} else {
			summator += tmp;
		}
	}
	print("Сумма: ");
	print(summator);
}