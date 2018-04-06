/*
 * Question: Make insertion sort print out 
 	     the number of compares divided 
	     by the array size of each increment. 

	     Sort arrays of random double values.
	     Use arrays that start at 100 and increase
	     in size by 10. 

	     Use linked lists from the DSandALG textbook
	     to streamline modifying the sorted array.
	     (i.e. change the link pointers of the respective elements.)

 */
 #include <iostream>
 #include <math>
 #include <stack>
 #include <vector>
 
 class Sort
 {
	public:
		void insertionSort(int *arrayArg);	//the sorting algorithm
		int size();				//function to return size of array.
	private:
		int* arrayObject
		int *nextlink;
		int *prevlink;

 }

 void insertionSort :: Sort (int *arrayArg) 
 {
 	
 	for (int i = 0; i < arrayArg.size(); i++)
	{
		for (int k = i; k > 0; k--)
		{
			if (arrayArg[k] < arrayArg[i])
			{
				
			}
		}
	}
 }
