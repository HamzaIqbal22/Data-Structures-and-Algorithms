#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);

int main(int argc, char * argv[]){


  int ch;
  int ch2;

  int key1;
  int key2;

  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;

   

   if ( ch == '<'){
      	
		ch = getchar(); 
		ch2 = getchar();


			if (isalpha (ch)){
			key1 = ch;
			}
			
			if isalpha (ch2){
			key2= ch2;
			}
		
		
		//checking for end tag
		if (ch == '/')
		{ 
		   
		   ch=getchar();
            
			
		   //checking if next inputs are a alphabet and the end tag
	   	   if (isalpha (ch2) && ch == '>')  {		
				pop();	
				
				if ( key1 == key2)
				printf ("Valid\n");
				else {
				printf ("Invalid\n");
				break;
				}
				
		   } else {
				fprintf( stderr, "Error\n");
		   }
		 }

		if (isalpha(ch) && ch2 == '>'){       
			push (ch);
	    }
		
		
    
	    

   } 

}    
  
  exit(0);
}
