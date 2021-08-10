/* Cory Mott
* test_assign_copy_ctor.cpp
* CS23001 - Summer 2021
*/

#include "stack.hpp"
#include<string>
#include<iostream>
#include<cassert>

int main()
{
    {
        //-------------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st1;
        stack<int> st2;

        st1.push(5);
        st1.push(10);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 10);
        assert(st2.top() == 10);

        std::cout << "stack<int> st1, st2" << std::endl << "st2 = st1" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st1;
        stack<int> st2;

        st1.push(5);
        st1.push(10);

        st1 = st2;

        // VERIFY
        assert(st1.empty());
        assert(st2.empty());

        std::cout << "stack<int> st1, st2" << std::endl << "st1 = st2" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st1;
        stack<int> st2;

        st1.push(5);
        st1.push(10);

        st2.push(1);
        st2.push(2);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 10);
        assert(st2.top() == 10);

        std::cout << "stack<int> st1, st2" << std::endl << "st1 = st2" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st1;
        stack<char> st2;

        st1.push('a');
        st1.push('b');
        st2.push('c');
        st2.push('d');

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 'b');
        assert(st2.top() == 'b');

        std::cout << "stack<char> st1, st2" << std::endl << "st1 = st2" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st1;
        stack<double> st2;

        st1.push(5.01);
        st1.push(10.01);

        st2.push(102.44);
        st2.push(72.65);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 10.01);
        assert(st2.top() == 10.01);

        std::cout << "stack<double> st1, st2\n" << std::endl << "st1 = st2" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<std::string> st1;
        stack<std::string> st2;

        st1.push("This is a string");
        st1.push("Hello world");

        st2.push("This is a bigger string");
        st2.push("Let's party");

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == "Hello world");
        assert(st2.top() == "Hello world");

        std::cout << "stack<std::string> st1, st2\n" << std::endl << "st1 = st2" << std::endl;
    }
    std::cout << "Done testing assign and copy constructors. \n";
}