/*Cory Mott
* postfix.cpp
* CS23001 - Summer
*/

#include<iostream>
#include<fstream>
#include<sstream>
#include "utilities.hpp"

int main(int argc, char* argv[])
{
	//only 2 or 3 args
	if (argc != 2 && argc != 3)
	{
		std::cerr << "There can only be 2 to 3 arguments" << std::endl;

		exit(2);
	}

	//input file
	std::ifstream input(argv[1]);

	//no input file
	if (!input)
	{
		std::cerr << "Could not open: " << argv[1] << std::endl;

		exit(2);
	}

	//no output file
	if (argc == 2)
	{
		std::string infix;

		while (getline(input, infix))
		{
			std::string postfix = if_to_pf(infix);

			std::string assembly = pf_to_as(postfix);

			std::cout << "Infix: " << infix << std::endl << "Postfix: " << postfix << std::endl
				<< "Assembly: " << assembly << std::endl;

			infix = "";
		}
	}

	//output file
	if (argc == 3)
	{
		std::ofstream output(argv[2]);

		if (!output)
		{
			std::cerr << "Could not open: " << argv[2] << std::endl;

			exit(2);
		}

		std::string infix;

		while (getline(input, infix))
		{
			std::string postfix = if_to_pf(infix);

			std::string assembly = pf_to_as(postfix);

			output << "Infix: " << infix << std::endl << "Postfix: " << postfix << std::endl
				<< "Assembly: " << assembly << std::endl;
		}

		output.close();
	}

	input.close();

	return 0;
}