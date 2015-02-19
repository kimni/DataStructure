package linkedlist;

import org.junit.Test;

public class LinkedListTest {

	@Test
	public void test(){
		
		LinkedList list =  new LinkedList();
		
		list.addNode(34);
		list.addNode(78);
		list.addNode(12);
		list.addNode(3);
		list.addNode(94);
		
		list.display();
		
		list.search(13);
		
		list.display();
	}
}
