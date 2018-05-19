/*
 * Random bag: Random bag stores a collection of items
 * and supports the following API
 *
 * 	public class RandomBag<Item> implements Iterable<Item>
 * 		RandomBag()
 * 		boolean isEmpty()
 * 		int size()
 * 		void add(Item item)
 *
 * Write a class 'RandomBag' that implements this API.
 * 'random' indicates that the items should be provided 
 * in random order. 
 * Hint: Put the items in an array and randomize their
 * order in the iterator's constructor.
 */

public class RandomBag<Item> implements Iterable<Item>
{

	private Item[] a = (Item[]) new Object[1];
	private int N = 0;

	public RandomBag()


	public boolean isEmpty() { return N == 0; }
	
	public int size() { return N ; }
	
	public void add(Item item)
	{
		
	}



}
