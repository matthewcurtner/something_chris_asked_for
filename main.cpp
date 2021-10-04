#include "bit_functions.hpp"
#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::string str = "";
	char ch;
	
	//loop that stops when the enter key (\n) is pressed
	for(int i = 0;; i++)
	{
		//checks if the character typed from last iteration is the enter key
		if(ch == '\n')
		{
			break;
		}
		ch = (char) std::cin.get();

		if(ch != '\n')
		{
			str = str + ch;
		}
	}

	std::cout << str << "\n";

	unsigned long numberHolder[str.size()];
	//std::string binaryHolder[str.size()];

	std::string binaryHolder[str.size()];

	std::cout << str.size()  << std::endl;

	//convert char to int and put inside array
	for(int i = 0; i < str.size(); i++)
	{
		numberHolder[i] = str.at(i);

		//uncomment to see the conversions 
		//std::cout << str.at(i) << '=' << numberHolder[i] << "  \n";
	}

	//convert to binary
	for(int i = 0; i < str.size(); i++)
	{
		char remainder;
		int decimal = (int) str.at(i);

		binaryHolder[i].resize(getBits(decimal));
		
		for(int b = 0;decimal > 0;b++)
		{	
			if(decimal % 2 == 0)
			{
				remainder = '0';
			}
			else
			{
				remainder = '1';
			}
			decimal = decimal / 2;

			binaryHolder[i].at(b) = remainder;

		}
		
	}

	//flips all the binary.
	for(int i = 0; i < str.size(); i++)
	{
		binaryHolder[i] = stringFlip(binaryHolder[i]);
	}

	//prints the binary
	std::cout << "The binary" << '\n';

	for(int i = 0; i < str.size(); i++)
	{
		std::cout << binaryHolder[i];
		if(i == str.size() - 1)
		{
			std::cout << '\n';
		}

	}
	

	
}
