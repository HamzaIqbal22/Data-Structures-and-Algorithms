#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

int numElements=0;
static int top=0;
static int heap [100];

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	int i;
	int key = heap [0]; 
	int key2; 

	for (i=0; i < heap[i]; i++){
		if (key < heap [i]){
            key = heap [i]; 
        } else {
			key2= heap [i];	
		  }					
		if (key < key2){
		printf ("%d\n", key);
		}
    }

  return key;  
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	
	heap[top] = thing2add;
	top++;
	
	
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return numElements;  //A dummy return statement
}
