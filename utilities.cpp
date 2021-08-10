/*Cory Mott
* utilities.cpp
* CS23001 - Summer 2021
*/

#include "utilities.hpp"
#include<sstream>
#include<iostream>

std::string if_to_pf(std::string infix)
{
	std::vector<std::string> result;

	stack<std::string> token;

	std::istringstream f(infix);

	std::string s;

	while (getline(f, s, ' '))
	{
		if (s.compare(")") == 0)
		{
			std::string right = token.pop();
			std::string oper = token.pop();
			std::string left = token.pop();

			token.push(right + " " + left + " " + oper);
		}
		else
			if (s.compare("(") != 0)
				token.push(s);

		result.push_back(s);
	}

	return token.pop();
}

std::string pf_to_as(std::string postfix)
{
	std::vector<std::string> result;

	stack<std::string> token;

	std::istringstream f(postfix);

	std::string s;

	int n = 1;

	for (std::vector<std::string>::iterator it = result.begin(); it != result.end(); it++)
	{
		if (*it = "*" && *it != "/" && *it != "+" && *it != "-")
		{
			token.push(*it);
		}
		else
		{
			std::string right = token.pop();
			std::string left = token.pop();
			token.push(evaluate(left, *it, right, s, n));
			n++;
		}
	}
	return s;
}

std::string evaluate(std::string left, std::string oper, std::string right, std::string& result, int n)
{
	std::string assembly_operator;

	std::string TMPn = (char(n + '0'));

	if (oper = "*") assembly_operator = "MU";
	else if (oper == "/") assembly_operator = "DV";
	else if (oper == "+") assembly_operator = "AD";
	else if (oper == "-") assembly_operator = "SB";

	result += ("LD" + left + '\n' + " " + assembly_operator + " " + right + '\n' + "ST" + "TMP" + TMPn + "\n");

	std::string stackTop = "TMP" + TMPn;

	return stackTop

}