/*
 * Implementation of linkedlist
 * @methods: add node to the list
 *          search for a key in the list, if found removes it
 *          display the linkedlist
 */
package linkedlist;

public class LinkedList {

	Node head;
	Node tail;
	
	/*
	 * add new node to the linked list
	 * @return: void
	 */
	void addNode(int data){
		
		Node newNode = new Node();		// create a new node
		newNode.data = data;			// store the data into the node
		newNode.nextNode = null;		// the new node points to null
		
		if(head == null){				// if head is null, indicates the list is empty and the new node added is the first node of the list
						
			head = tail = newNode;		// make head and tail point to the new node just added
		}
		
		else{
			tail.nextNode = newNode;		// if the list is not empty then add the new node to the tail and make tail point to the new node
			tail = newNode;					// assign the new node as tail (the last node in the list)
		}
		
	}
	
	/*
	 * display the linked list
	 * @return: void
	 */
	void display(){
		
		System.out.println("\nLinked list");
		Node node = head;
		
		if(head == tail){			// if only one node present in the list then print the data of that node
			System.out.println(head.data);
			return;
		}
		else{						// else traverse the entire linkedlist starting from head till the very end of the linkedlist
			
			while(node != null){
				
				System.out.println(node.data);
				node = node.nextNode;
			}
		}	
	}
	
	/*
	 * search for a particular key in the linkedlist and then remove it from the linkedlist
	 * @param: previous -> keeps track of the previous node in the list
	 *         node -> keeps track of the current node
	 *         flag -> to keep track of the key found in the list (true if found otherwise, false)
	 * @return: void
	 */
	void search(int key){
			
		// if head is not null then search for the key in the list and if found remove it from the list
		if(head != null){			
			
			boolean flag = false;
			Node node = head;
			Node previous = head;
			
			while(node != null){
				
				if(node.data == key){
					previous.nextNode =  node.nextNode;
					flag = true;
					break;
				}
				
				previous = node;
				node = node.nextNode;
			}
			
			if(flag == true){
				System.out.println("\nKey found and removed from list!!");	
			}
			else{
				System.out.println("\nNot found!!");
			}
		}
		else{
			
			System.out.println("List is empty!!!");
		}
	}
	
}
