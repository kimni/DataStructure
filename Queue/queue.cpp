/*
 * Implemented queue using linkedlist which follows First In First Out (FIFO)
 */

#include <iostream>
#include "queue.h"

using namespace std;

/*
 * Constructor to initialize rear and front to NULL
 */
Queue::Queue(){

	rear = NULL;
	front = NULL;
}

/*
 * This method insert new elements into the queue at the rear end.
 * Checks if the queue is empty or if the queue is full before inserting any element into the queue
 *
 * @variables:
 * value -> holds the new element data
 * temp -> create a new node
 *
 * @return type: void
 */
void Queue:: enqueue(){

	int value = 0;

	node *temp = new node;

	cout<<"\n Enter data to insert into the queue : ";
	cin>>value;

	temp->data = value;
	temp->next = NULL;

	if(front == NULL){
		front = temp;
	}
	else{
		rear->next = temp;
	}

	rear = temp;
}


/*
 * This method remove one element at a time from the head of the queue.
 * Checks if the queue is empty or there is any element to be dequeue
 *
 * @variables:
 * temp -> a reference variable pointing to the first node
 *
 * @return type: void
 *
 */
void Queue:: dequeue(){

	node *temp = new node;

	if(front == NULL){
		cout<<"\n Queue is empty";

	}
	else{

		temp = front;
		front = front->next;

		cout<<"\n data dequeue" <<temp->data;
		delete temp;
	}
}

/*
 * This method print the element from the queue
 *
 * @variables:
 * temp -> a reference variable pointing to the first node
 *
 * @return type: void
 */
void Queue::display(){

	node *temp = new node;

	temp = front;

	if(front == NULL){
		cout<<"\n Queue is empty";
	}
	else{
		while(temp != NULL){
			cout<<endl<<temp->data<<" ";
			temp = temp->next;
		}
	}

}

int main(){

	Queue queue;
	int ch;


	while(true){

		cout<<"\n Enter 1 for enqueue/ Enter 2 for dequeue/ Enter 3 for display";
		cin>>ch;

		switch(ch){
			case 1:
				queue.enqueue();
				break;

			case 2:
				queue.dequeue();
				break;

			case 3:
				queue.display();
				break;

			default:
				cout<<"\n Wrong choice. Try again!";
				break;
		}
	}
	return 0;
}
