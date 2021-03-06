#pragma once


class StackElement
{
public:
	
	// define stackElement constructor
	StackElement(const int &value, StackElement *pointerToNext);
	
	// define setter and getter methods
	int getData() const;
	
	void setData(int value);
	
	StackElement *getNext() const;
	
	void setNext(StackElement *nextElement);

private:
	
	int data;
	StackElement *next = nullptr;
};


// Base class for implemented stack data structure
class myStack
{
public:
	
	// Sets topElement with nullptr
	myStack();
	
	// Sets topElement with new value
	explicit myStack(int value);
	
	// Provides proper destruction of an stackElement
	~myStack();
	
	//Adds an item onto the stack.
	void push(int item);
	
	// Returns the last item pushed onto the stack.
	int top();
	
	// Removes the most-recently-pushed item from the stack.
	int pop();
	
	// True if no more items can be popped and there is no top item.
	bool isEmpty();
	
	// True if no more items can be pushed.
	bool isFull();
	
	//Returns the number of elements on the stack.
	int getSize();
	
	// Change default value of max stack capacity
	void capacity(const int &value);
	
	// Returns max stack capacity
	int capacity();

protected: // these properties will be available in classes that inherit from that class.
	
	// Max possible number of elements in stack at the same time
	int maxCapacity = 0;
	
	// Points to HEAD element which type is stackElement
	StackElement *topElement;
};
