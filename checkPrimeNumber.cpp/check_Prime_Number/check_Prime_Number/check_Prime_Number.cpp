// example method check Prime number using model
// input - process - output

#include <iostream>

// Bool method check if number is PrimeNumber -> return true | else -> return false
bool isPrimeNumber(int number)
{
	if (number <= 1)
		return false;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int number;
	std::cout << "Enter number: ";
	std::cin >> number;

	if (isPrimeNumber(number))
		std::cout << number << " is Prime number\n";
	else if (!isPrimeNumber(number))
		std::cout << number << " isn't Prime number\n";
	return 0;
}