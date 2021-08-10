/* Cory Mott
* test_default_ctor.cpp
* CS23001 - Summer 2021
*/

#include "stack.hpp"
#include<string>
#include<iostream>
#include<cassert>

int main()
{
	{
        //------------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<int> st passed" << std::endl;
	}

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<std::string> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<String> st passed" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<char> st passed" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<double> st passed" << std::endl;
    }
    std::cout << "Default constructor testing complete." << std::endl;
}