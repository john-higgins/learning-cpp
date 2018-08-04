#include<iostream>

#define print(message) std::cout << message << std::endl;

int example_increment1(int* value)
{
	return ++(*value);
}

int example_increment2(int& value)
{
	return ++value;
}

int main()
{
	int val = 64;

	print(example_increment1(&val));	// Expected result: 65
	print(example_increment2(val));		// Expected result: 66
	
	
	std::cin.get();
}