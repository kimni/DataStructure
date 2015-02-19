/*
 * Queue.h
 *
 *  Created on: Jan 14, 2015
 *      Author: Karen Wang
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#endif /* QUEUE_H_ */

class Queue{

	struct node{
	int data;
	node *next;
};

private:
	node *rear;
	node *front;

public:
	Queue();
	void enqueue();
	void dequeue();
	void display();

};
