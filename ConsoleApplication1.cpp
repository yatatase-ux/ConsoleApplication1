#include <iostream>
#include <string>

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

void Inversion_HW()
{
	const char hw[13] = "Hello World!";

	for (int count = 0; count < 20; count++)
	{
		if (count % 2 == 0)
		{
		//	int hw_size = sizeof(hw);

			std::cout << count + 1 << " : ";
			for (int char_num = 0; char_num < 13; char_num++)
			{
				std::cout << hw[char_num];
			}
			std::cout << std::endl;
		}
		else
		{
		//	int hw_size = sizeof(hw);

			std::cout << count + 1 << " : ";
			for (int char_num = 12; char_num >= 0; char_num--)
			{
				std::cout << hw[char_num];
			}
			std::cout << std::endl;
		}
	}
}

int main()
{
//	Cout_HW_100_for();

//	Cout_HW_100_while();

	Inversion_HW();
}
