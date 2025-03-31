#include <iostream>
#include <Windows.h>

namespace addition 
{
	void calc(int num1, int num2)
	{
		std::cout << "сложение: " << num1 + num2 << std::endl;
	}
}
namespace subtraction 
{
	void calc(int num1, int num2)
	{
		std::cout<< "вычитание: "<<num1 - num2 << std::endl;
	}
}
namespace multiplication
{
	void calc(int num1, int num2)
	{
		std::cout<< "умножение: " << num1 * num2<<std::endl;
	}
}
namespace division {
	void calc(int num1, int num2) 
	{
		std::cout<< "деление: "<<num1 / num2 << std::endl; // что если num2 == 0?
	}
}

int main()
{
	SetConsoleOutputCP(1251);

	int x = 10;
	int y = 120;

	addition::calc(x, y);
	subtraction::calc(x, y);
	multiplication::calc(x, y);
	division::calc(x, y);
}