// Homework 3.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#
#include <iostream>

int main()
{
	std::cout << "Enter the number elements:\n";
	int count = 0, el;
	std::cin >> count;
	std::cout << "Enter first element:\n";
	std::cin >> el;
	int min = el, max = el, sum = el;
	for (int i = 0; i < count-1; i++)
	{
		std::cout << "Enter element:\n";
		std::cin >> el;
		if (el < min)
			min = el;
		if (el > max)
			max = el;
		sum += el;
	}

	std::cout << "Minimal element: " << min << "\n";
	std::cout << "Maximal element: " << max << "\n";
	std::cout << "Sum: " << sum << "\n";
	std::cout << "Average: " << ((float)sum / (float)count) << "\n";
}