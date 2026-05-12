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

void Reverse_HW()
{
	const char hw[13] = "Hello World!";

	//	int hw_size = sizeof(hw);

	for (int count = 0; count < 20; count++)
	{
		std::cout << count + 1 << " : ";

		if (count % 2 == 0)
		{
			for (int char_num = 0; char_num < 13; char_num++)
			{
				std::cout << hw[char_num];
			}
		}
		else
		{
			for (int char_num = 12; char_num >= 0; char_num--)
			{
				std::cout << hw[char_num];
			}
		}

		std::cout << std::endl;
	}
}

void Reverse_exam()
{
	auto forward = std::string("Hello World!");
	auto reverse = forward;

	std::reverse(reverse.begin(), reverse.end()); 

	auto i = 10;

	while (i--)
	{
		if (i & 1)
		{
			std::cout << reverse << std::endl;
		}
		else
		{
			std::cout << forward << std::endl;
		}
	}
}

int main()
{
//	Cout_HW_100_for();

//	Cout_HW_100_while();

//	Reverse_HW();

	Reverse_exam();
}
