package tree;

class Node {
	
	int data;				// data to be inserted
	Node leftChild;			// left child
	Node rightChild;		// right child
	
	Node(){
		
		leftChild = null;
		rightChild = null;
	}
	
	Node(int data){
		this.data = data;
	}
}
