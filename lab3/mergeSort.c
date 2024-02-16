
#include <stdio.h>
#include "metrics.h"
#include "mySort.h"
// mergesort algorithm
// replacing comparison, assignment and equality operators involving the input array with metrics

	void Merge(int arr[], unsigned int front, unsigned int middle, unsigned int end)
    { 
	// key array that will be used temporarily for merging
		int key[end - front + 1];
		
	//index variables, where i1 used for the start of the first list and i2 represents the start of the 2nd list
		int i1 = front;
		int i2 = middle + 1;
		int j = 0;
		
	//comparing values to sort
		while(myCompare(i1, middle) <= 0 && myCompare(i2, end) <= 0)
		{
			if( myCompare ( arr[i1] , arr[i2]) < 0)
				myCopy(&arr[i1++], &key[j++]);
			 else 
				myCopy(&arr[i2++], &key[j++]);
			
		}		
	// copying elements of first and 2nd list, respectively
		while ( myCompare(i1, middle) <= 0)
			myCopy(&arr[i1++], &key[j++]);
		
		while ( myCompare(i2, end) <= 0)	 
			myCopy(&arr[i2++], &key[j++]);

		//moving elements from key [] back to arr[]
		for ( i1 =front, i2 = 0; myCompare(i1, end) <= 0; i1++,i2++)
			mySwap(&arr[i1], &key[i2]);
    	}



	void mySort(int arr[], unsigned int front, unsigned int end)
    {
		if( myCompare (end - front + 1, 1) == 0)
			return;
		else {
			int middle = (end + front)/2;

			mySort(arr, front , middle);
			mySort(arr , middle + 1, end);
			Merge(arr , front , middle ,  end);
		}
    }



