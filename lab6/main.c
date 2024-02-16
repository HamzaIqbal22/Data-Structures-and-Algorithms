#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void addHeap();
extern int heapSize();
extern int heapDelete();

int main(int argc, char * argv[])
{
	printf("To run this program, enter input,then press 'ctrl-d' to view the whole output\n");

  int value;
  int i=0;
  
    	
    while (scanf("%d\n\n", &value) != EOF) {   
	  addHeap(value);  	
	  push (value);
      fprintf(stderr, "\n%d", value);
      heapDelete();
	
	for (i=0;i < heapSize();i++){
		addHeap (value);
		heapDelete ();
		
	} 
			
	for (i=0; i< heapSize();i++){
		printf ("%d\n",pop());
	} 
    
  }
  exit(0);
}



