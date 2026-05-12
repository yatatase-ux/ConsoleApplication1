#include <iostream>

void Cout_HW_100_for()
{
	for (int count = 0; count < 100; count++) {
		std::cout << count + 1 << " : Hello World!\n";
	}
}

void Cout_HW_100_while()
{
	int count = 100;
	while (count--)
	{
		std::cout << 100 - count << " : Hello World!\n";
	}
}

int main()
{
//	Cout_HW_100_for();

	Cout_HW_100_while();
}
