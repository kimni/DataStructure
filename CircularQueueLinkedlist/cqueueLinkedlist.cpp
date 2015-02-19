/*
 * Implemented a circular queue using a linkedlist
 *
 */

#include <iostream>
#include "cqueuelinkedlist.h"
using namespace std;

/*
 * Constructor to initialize the variables
 *
 * @variables:
 * front -> keep track of the head of the queue and setting it to NULL
 * rear -> keep track of the tail of the queue and setting it to NULL
 *
 */
CQueuelinkedlist::CQueuelinkedlist(){

	front = NULL;
	rear = NULL;

}

/*
 * This method insert new elements into the array queue at the rear end.
 * Checks if the queue is empty or if the queue is full before inserting any element into the queue
 *
 * @variables:
 * elelment -> holds the new element data
 *
 * @return type: void
 */
void CQueuelinkedlist::enqueue(){

	int element;

	cout<<"\nenter element to insert :";
	cin>> element;

	node *cqueue = new node;			// create a node each time if there is new element entered by the user

	cqueue->data = element;
	cqueue->next = NULL;

	if(front == NULL){					// if it's a first element then set front and rear pointing to the first node

		front = cqueue;
		rear = cqueue;

	}
	else{								// otherwise, set the rear pointing to the new node

		rear->next = cqueue;
		rear = cqueue;
	}

	rear->next = front;					// make the rear point to the front to form a circular queue
}


/*
 * This method remove one element at a time from the head of the queue.
 * Checks if the queue is empty or there is any element to be dequeue
 *
 *
 * @return type: void
 *
 */
void CQueuelinkedlist::dequeue(){

	if(front == NULL){							// if front is NULL then the queue is empty
		cout<<"\nqueue is empty!!";
		return;
	}
	if(front == rear){
		cout<<"dequeue : "<<front->data;		// if front is equal to rear then there is only one element in the queue
		delete front;							// remove the front element and set front and rear to NULL
		front = rear = NULL;

	}
	else{										// otherwise, remove the front element
		node *temp = front;
		cout<<"dequeue : "<<temp->data;
		front = front->next;
		rear->next = front;
		delete temp;
	}
}

/*
 * This method print the element from the array circular queue
 *
 * @variables:
 * temp -> a reference variable pointing to the first node
 *
 * @return type: void
 */
void CQueuelinkedlist::display(){

	cout<<"\nCQueue list :";

	if(front != NULL && rear!= NULL){		// if queue not empty then print each element

		node *temp  = front;

		do{
			cout<<temp->data<<" ";
			temp = temp->next;
		}while(temp != front);
	}
	else{									// otherwise, queue is empty
		cout<<"\n queue empty!!";
		return;
	}
}


int main(){

	CQueuelinkedlist cql;
	int ch;

	/*
	 *  Ask user to enter its choice: ! for insert, 2 for delete, 3 for display
	 */
	while(true){

		cout<<"\nEnter 1 for enqueue/ Enter 2 for dequeue/ enter 3 for display : ";
		cin>>ch;

		switch(ch){

		case 1:
			cql.enqueue();
			break;

		case 2:
			cql.dequeue();
			break;

		case 3:
			cql.display();
			break;

		default:
			cout<<"\nWrong choice..Try again!!";
			break;
		}
	}

	return 0;
}



