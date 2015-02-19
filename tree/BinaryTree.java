/*
 * Implementation of a Binary Tree
 * @methods: add new node to the tree
 *          performs in-order traversal of the tree
 */

package tree;

public class BinaryTree {

	Node root;

	/*
	 * Add a node to the binary tree
	 * @return: void
	 */
	public void add(int key){
		
		Node nodeToAdd = new Node(key);
		
		// if root is empty then make the first node is the root node, otherwise traverse the tree to insert the new node
		if(root == null){
			root = nodeToAdd;
		}
		
		traverseToAddNode(root, nodeToAdd);		// calls traversToAddNode method
	}
	
	/*
	 * traverse the tree to insert the node at the right position
	 * @return: void
	 */
	private void traverseToAddNode(Node node, Node nodeToAdd){
		
		// if new node data is less than the root, traverse to the leftchild of the root 
		if(nodeToAdd.data < node.data){
			
			// if leftchild does not exist then insert the node at that position, otherwise continue to traverse the tree
			if(node.leftChild == null){
				
				node.leftChild = nodeToAdd;
			}
			else{
			
				traverseToAddNode(node.leftChild, nodeToAdd);
			}	
		}
		
		// if new node data is less than the root, traverse to the rightchild of the root 
		if(nodeToAdd.data > node.data){
			
			// if rightchild does not exist then insert the node at that position, otherwise continue to traverse the tree
			if(node.rightChild == null){
				
				node.rightChild = nodeToAdd;
			}
			else{
			
				traverseToAddNode(node.rightChild, nodeToAdd);
			}			
		}
		
	}
	
	/*
	 *  In-order traversal of Binary tree
	 *  @return: void
	 */
	public void traverse(){
			
		if(root != null){
			
			Node nodeTraverse = root;
			if(nodeTraverse.leftChild == null && nodeTraverse.rightChild == null){		// check if it is a leave node then print its data
				
				System.out.println(nodeTraverse.data);	
			}
			
			else{																		// otherwise, traverse down the tree
				
				traverse(nodeTraverse);
			}
		}
		
		
	}
	
	private void traverse(Node node){
		
		//System.out.println(node.data);		// for pre-order traversal
		
		if(node.leftChild != null){
			
			traverse(node.leftChild);
		}
		System.out.println(node.data);	// for in-order traversal
		
		if(node.rightChild != null){
			
			traverse(node.rightChild);
		}
		//System.out.println(node.data);  // for post-order	traversal
	}
	
	
}
