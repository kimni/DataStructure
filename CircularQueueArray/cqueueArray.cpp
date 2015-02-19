/*
 * Implemented a circular queue using an array of fixed size 5
 *
 */


#include <iostream>
#include "cqueuearray.h"

using namespace std;

/*
 * Constructor to initialize the variables
 *
 * @variables:
 * size -> size of the array in the queue
 * cqueue -> name of the array queue
 * front -> keep track of the head of the queue
 * rear -> keep track of the tail of the queue
 * max -> holds the size of the array
 *
 */
CQueueArray::CQueueArray(int size){

	cqueue = new int[size];
	front = rear = -1;
	max = size;
}


/*
 * This method insert new elements into the array queue at the rear end.
 * Checks if the queue is empty or if the queue is full before inserting any element into the queue
 *
 * @variables:
 * val -> holds the new element data
 * i -> find next available position to insert the new element
 *
 * @return type: void
 */
void CQueueArray::enqueue(){


	int val;
	cout<<"\nenter the value to be enqueue : ";
	cin>>val;


	if(front == -1 && rear == -1){		// check if queue is empty

		front = 0;
		rear = 0;
		cqueue[front] = val;			// insert the first element into the queue
	}
	else{

		int i = (rear+1) % max;

		if(i == front){					// if i calculated is same as front then the queue is full,  do not insert
			cout<<"\nqueue full!!";
			return;
		}
		else{
			cqueue[i] = val;			// otherwise, insert the new element into the queue
			rear = i;
		}
	}

}

/*
 * This method remove one element at a time from the head of the queue.
 * Checks if the queue is empty or there is any element to be dequeue
 *
 *
 * @return type: void
 *
 */
void CQueueArray::dequeue(){

	if(front == -1){							// check if the queue is empty
		cout<<"\nQueue empty!!";
		return;
	}

	if(front == rear){							// if front is equal to rear then there is only one element in the queue
		cout<<"dequeue = "<<cqueue[front];
		front = rear = -1;
	}
	else{

		cout<<"dequeue = "<<cqueue[front];		// dequeue from the head and update the front
		front = (front+1) % max;

	}

}

/*
 * This method print the element from the array circular queue
 *
 * @variables:
 * i -> to iterate over the queue
 *
 * @return type: void
 */
void CQueueArray::display(){

	if(front != -1 && rear != -1){					//if queue is not empty then print all the elements from the queue

		for(int i = front; i<= rear; i++){
			cout<<cqueue[i]<<" ";
		}
	}

	else{											// otherwise, queue is full
		cout<<"\nQueue is empty!!";
		return;
	}

}



int main(){

	CQueueArray cq(5);
	int ch;

	/*
	 *  Ask user to enter its choice: ! for insert, 2 for delete, 3 for display
	 */
	while(true){

		cout<<"\nEnter 1 for enqueue/ Enter 2 for dequeue/ Enter 3 for display : ";
		cin>>ch;

		switch(ch){

		case 1:
			cq.enqueue();
			break;

		case 2:
			cq.dequeue();
			break;

		case 3:
			cq.display();
			break;

		default:
			cout<<"\n Wrong choice..Try again!!";
			break;
		}
	}
	return 0;
}



