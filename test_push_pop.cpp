/* Cory Mott
* test_push_pop.cpp
* CS23001 - Summer 2021
*/

#include "stack.hpp"
#include<string>
#include<iostream>
#include<cassert>

int main()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        st.push(5);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 5);

        std::cout << "st.push(10)" << std::endl << "top == 10" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        st.push(5);
        st.push(10);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10);

        std::cout << "st.push(10)" << std::endl << "st.push(20)" << std::endl << "top == 20" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        st.push(5);
        st.push(10);
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 5);

        std::cout << "st.push(10)" << std::endl << "st.push(20)" << std::endl << "st.pop()" << std::endl << "top == 10" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<std::string> st;

        st.push("This is a string");

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "This is a string");

        std::cout << "st.push(This is a string)" << std::endl << "top == My String." << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<std::string> st;

        st.push("This is a string");
        st.push("Hello world");

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "Hello world");

        std::cout << "st.push(This is a string)" << std::endl << "st.push(Hello world)" << std::endl << "top == Hello world" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<std::string> st;

        st.push("This is a string");
        st.push("Hello world");
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "This is a string");

        std::cout << "st.push(This is a string)" << std::endl << "st.push(Hello world)" << std::endl << "st.pop()" << std::endl << "top == This is a string" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'a');

        std::cout << "st.push(a)" << std::endl << "top == a" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');
        st.push('b');

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'b');

        std::cout << "st.push(a)" << std::endl << "st.push(b)" << std::endl << "top == b" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');
        st.push('b');
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'a');

        std::cout << "st.push(a)" << std::endl << "st.push(b)" << std::endl << "st.pop()" << std::endl << "top == a" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(5.1);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 5.1);

        std::cout << "st.push(5.1)" << std::endl << "top == 5.1" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(5.1);
        st.push(10.5);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10.5);

        std::cout << "st.push(5.1)" << std::endl << "st.push(10.5)" << std::endl << "top == 10.5" << std::endl;
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(5.1);
        st.push(10.5);
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 5.1);

        std::cout << "st.push(5.1)" << std::endl << "st.push(10.5)" << std::endl << "st.pop()" << std::endl << "top == 5.1" << std::endl;
    }
    std::cout << "Done testing push and pop." << std::endl;
}