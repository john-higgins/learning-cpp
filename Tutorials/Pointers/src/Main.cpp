#include<iostream>

#define print(message) std::cout << message << std::endl;

int main()
{
	print("Hello!");

	int val = 512;
	int* ptr = &val;

	print(val);
	
	*ptr = *ptr << 1;				// Shift 1 to the left

	print(val);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr_ptr = &buffer;		// Pointer to a pointer

	char*** ptr_ception = &ptr_ptr;	// Pointer to a pointer to a pointer

	// Set a breakpoint here and follow the memory addresses of the pointers above
	std::cin.get();
}