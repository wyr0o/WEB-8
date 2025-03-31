#include <iostream>
#include <Windows.h>

void counting_function()
{
    static int count = 0;
    count += 1;
    std::cout << "Количество вызовов функции counting_function() : " << count<< std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}