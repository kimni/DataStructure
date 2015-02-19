/*
 * cqueuelinkedlist.h
 *
 *  Created on: Jan 16, 2015
 *      Author: Karen Wang
 */

#ifndef CQUEUELINKEDLIST_H_
#define CQUEUELINKEDLIST_H_

/*
 * Structure of the node
 */
struct node{
	int data;
	node *next;
};

class CQueuelinkedlist{

public:
	CQueuelinkedlist();
	void enqueue();
	void dequeue();
	void display();


private:
	node *front;
	node *rear;

};



#endif /* CQUEUELINKEDLIST_H_ */
