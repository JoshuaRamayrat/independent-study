/*
 * Random iterator
 * 
 * Write an iterator for "RandomQueue<Item>" from the previous
 * exercise that returns the items in random order.
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
		a[index] = null;
		return temp;
	}

	public Item sample()	//return a random item, but do not remove
				//(sample with replacement)
	{
		int index = new Random().nextInt(a.length);
		return a[index];
	}

	public Iterator<Item> iterator()
	{
		return new ListIterator();
	}

	private class ListIterator implements Iterator<Item>
	{
		public Item Randomize()
		{
			while (N >= 0)
			{
				dequeue();
			}
		}
	}

}

//test client for RandomQueue and Randomize
public static void main(String[] args)
{
	StdOut.println("main start");
	RandomQueue<int> test1 = new RandomQueue<int>();
	test1.Randomize();
	StdOut.println("main end");

}


