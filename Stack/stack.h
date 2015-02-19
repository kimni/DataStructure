/*
 * stack.h
 *
 *  Created on: Jan 14, 2015
 *      Author: Karen Wang
 */

#ifndef STACK_H_
#define STACK_H_

#endif /* STACK_H_ */

class Stack{

	int max_stack;
	int empty_stack;
	int top;
	char *items;

public:
	Stack(int);
	~Stack();
	void push(char);
	char pop();
	int emptyStack();
	int fullStack();
};
