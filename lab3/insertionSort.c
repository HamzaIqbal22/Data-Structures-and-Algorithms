#include "mySort.h"
#include "metrics.h"
#include  <stdio.h>
//Insertion sort algorithm
//Metric functions will be used instead for data elements instead of comparison & assignment operator

void mySort(int array[], unsigned int front, unsigned int end)
    {

	int temp;	
	int i;
	int j;
	
	
	for (i=front;i<end+1;i++)
	{
	
	//Assigning the value of array[i] to temp using 'myCopy ()' metric
	myCopy (&array [i], &temp);
	j=i-1;
		
	//Using 'myCompare ()' metric instead of the standard comparision operator
		while (j>=0 && myCompare (array[j],temp)>= 0)
		{	//Enterchanging the element array[i] to array[j+1] 'mySwap ()' metric instead of assignment operator
			mySwap (&array[j], &array [j+1]);
			j=j-1;
		}   
 	}
}
