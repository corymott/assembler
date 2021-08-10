/*Cory Mott
* stack.hpp
* CS23001 - Summer 2021
*/

#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: Cory Mott
// Updated: Spring 2021
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include<new>
#include<cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T>
class Node {

public:
	Node() : next(0) {};
	Node(const T& x) : data(x), next(0) {};
	T data;
	Node<T>* next;

};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
	stack() : tos(0) {};;
	stack(const stack<T>&);
	~stack();
	void      swap(stack<T>&);
	stack<T>& operator= (stack<T>);
	bool      empty() const {return tos == 0};
	bool      full() const;
	T         top() const;
	T         pop();
	void      push(const T&);

private:
	Node<T>* tos;
};

//Copy Constructor
template<typename T>
stack<T>::stack(const stack<T>& actual) :tos(0)
{
	Node<T>* temp = actual.tos, * bottom = 0;

	while (temp != 0)
	{
		if (tos == 0)
		{
			tos = new Node<T>(temp->data);
			bottom = bottom->next;
		}
		temp = temp->next;
	}
}

//Deconstructor
template <typename T>
stack<T>::~stack()
{
	while (tos != 0)
	{
		Node<T> *temp;
		temp = tos;
		tos = tos->next;
		delete temp;
	}
}

//Constant Time Swap
template <typename T>
void stack<T>::swap(stack<T>& RHS)
{
	Node<T> *temp = tos;
	tos = RHS.tos;
	RHS.tos = temp;
}

//Assignment
template<typename T>
stack<T>& stack<T>::operator=(stack<T> RHS)
{
	swap(RHS);
	return *this;
}

//Checks memeory to see if it is full
template<typename T>
bool stack<T>::full() const
{
	Node<T>* temp = new(std::nothrow) Node<T>();

	if (temp == 0)
		return true;

	delete temp;
	return false;
}

//Returns top item in stack
template<typename T>
T stack<T>::top() const
{
	assert(!empty());

	return tos->data;
}

//Removes top item in stack
template <typename T>
T stack<T>::pop()
{
	assert(!empty());

	T result = tos->data;
	Node<T>* temp = tos;
	tos = tos->next;

	delete temp;

	return result;
}

//Pushes item onto the stack
template <typename T>
void stack<T>::push(const T& item)
{
	assert(!full());

	Node<T>* temp = new Node<T>(item);
	temp->next = tos;
	tos = temp;
}

#endif
