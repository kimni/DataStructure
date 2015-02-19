/*
 * Implementation of stack using array which follows Last In First Out (LIFO)
 */

#include <iostream>
#include "stack.h"
using namespace std;

/*
 * Constructor to initialize the variables used
 *
 */
Stack::Stack(int size){

	max_stack = size;			// store size of the stack
	empty_stack = -1;			// set empty stack to -1
	top = -1;					// initialize top value to -1
	items = new char[size];		// store the elements in the stack
}

/*
 * Deconstructor to free all the resources
 */
Stack::~Stack(){

	delete[] items;
}

/*
 * This method implements the insertion of new element on top of the stack
 *
 * @return type: void
 */
void Stack::push(char ch){
	items[++top] = ch;		// stores the value in the stack
}

/*
 * This method implements the deletion of element on top of the stack
 *
 * @reeturn type: void
 */
char Stack::pop(){
	return items[top--];
}

/*
 * checks if stack is empty and then return an empty stack
 *
 * @return type: int
 */
int Stack::emptyStack(){
	return (empty_stack == top);
}

/*
 * checks if stack is full and then return max stack
 *
 * @return type: int
 */
int Stack::fullStack(){
	return (max_stack == top);
}

int main(){

	Stack s(10);
	char c;

	while((c = cin.get()) != '\n'){
		if(!s.fullStack()){		// if stack is not full, insert element on top of the stack
			s.push(c);
		}
	}

	while(!s.emptyStack()){		// if stack is not empty then remove top element from the stack
		cout << s.pop();

	}
	cout << endl;
}
