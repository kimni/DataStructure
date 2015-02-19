/*
 * cqueuearray.h
 *
 *  Created on: Jan 15, 2015
 *      Author: Karen Wang
 */

#ifndef CQUEUEARRAY_H_
#define CQUEUEARRAY_H_

class CQueueArray{

private:
	int *cqueue;
	int front;
	int rear;
	int max;

public:
	CQueueArray(int);
	void enqueue();
	void dequeue();
	void display();
};

#endif /* CQUEUEARRAY_H_ */
