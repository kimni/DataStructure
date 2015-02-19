package tree;

import org.junit.Test;
 

public class BinaryTreeTest {

	@Test
	public void test(){
		
		BinaryTree node = new BinaryTree();
		
		node.add(56);
		node.add(23);
		node.add(87);
		node.add(37);
		node.add(2);
		node.add(100);
		node.add(12);
		node.add(71);
		
		node.traverse();
	}
}
