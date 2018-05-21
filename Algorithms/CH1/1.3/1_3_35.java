/*
 * Random queue
 * 
 * To remove an item, swap one at a random position with the one 
 * in the last position. Delete and return the last object,
 * as in ResizingArrayStack. 
 *
 * Write a cleint that deals bridge hands (13 cards each)
 * using RandomQueue<Card>
 * 
 *
 * Notes to myself:
 * 	'extends' is for extending a class
 * 	'implements' is for implementing an interface
 *
 * 	java imports 'Iterator so the code can
 * 	refer to the Iterator interface.
 */

import java.util.Iterator;


private class RandomQueue<Item> implements Iterable<Item>
{

	private Item[] a = (Item[]) new Object[1];
	private int N = 0;


	public boolean isEmpty(){ return first == NULL; }
	public boolean size(){ return N; }

	public void enqueue(Item item)
	{
		a[N] = item;
		N++;	
	}

	public Item dequeue()	//remove and return a random item
				//(sample without replacement)
	{
		int index = new Random().nextInt(a.length);
		int temp = a[index];
		a[index] = a[N-1];
		a[N-1] = null;	
		return temp;
	}

	public Item sample()	//return a random item, but do not remove
				//(sample with replacement)
	{
		int index = new Random().nextInt(a.length);
		return a[index];
	}
}

public static void main(String[] args)
{
}

