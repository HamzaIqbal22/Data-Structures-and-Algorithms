#include <stdlib.h>
#include <stdio.h>



typedef struct fsm {

//Variables to be used to define states
	int num;
	char stateName;
	int delete;

	struct fsm * nextState0;
	struct fsm * nextState1;
}

stateMachine;
stateMachine state [8];

//Initializing each state function
void startingStates(){

//Setting initial details about state A
 state[0].num = 0;
 state[0].stateName = 'A';
 state[0].nextState0 = state + 7;
 state[0].nextState1 = state + 2;

//Setting initial details about state B
 state[1].num = 1;
 state[1].stateName = 'B';
 state[1].nextState0 = state + 1;
 state[1].nextState1 = state + 4;

//Setting initial details about state C
 state[2].num = 2;
 state[2].stateName = 'C';
 state[2].nextState0 = state + 3;
 state[2].nextState1 = state + 5;

//Setting initial details about state D
 state[3].num = 0;
 state[3].stateName = 'D';
 state[3].nextState0 = state + 6;
 state[3].nextState1 = state + 7;

//Setting initial details about state E
 state[4].num = 4;
 state[4].stateName = 'E';
 state[4].nextState0 = state + 5;
 state[4].nextState1 = state + 0;

//Setting initial details about state F
 state[5].num = 5;
 state[5].stateName = 'F';
 state[5].nextState0 = state + 0;
 state[5].nextState1 = state + 6;

//Setting initial details about state G
 state[6].num = 6;
 state[6].stateName = 'G';
 state[6].nextState0 = state + 1;
 state[6].nextState1 = state + 3;

//Setting initial details about state H
 state[7].num = 7;
 state[7].stateName = 'H';
 state[7].nextState0 = state + 2;
 state[7].nextState1 = state + 1;

//initializing states to 1 for the delete function
	
	int k=0;

	for (k=0;k<8;k++){
		state[k].delete = 1;
}


}

//function to print/display the states
void printState(){

	int i;
	
		
	for (i=0; i<8; i++){
		fprintf (stdout, "%c %c %c \n", state[i].stateName, state[i].nextState0->stateName,state[i].nextState1->stateName);
	}
		
}


int main(int argc, char * argv[]){

//index variables   
	int i; 
	int j=0;

//Storing inputs given into an array	
	char store[3];

	 
// Calling the "startingStates function to assign the inital states
	startingStates();

// Setting starting state as A	
	stateMachine presentState = state[0]; 
	

	
fprintf(stdout,"Welcome To The State Machine Program!\n");

fprintf(stdout,"\nUse lowercase p to print the Machine\n");

fprintf(stdout,"\nUse lowercase q to quit the program\n");

fprintf(stdout,"\nUse lowercase d to delete a state\n");

fprintf(stdout,"\nUse lowercase c to change the state, followed by 0/1 , and the letter to replace with in capitals\n");

fprintf(stdout,"\nUse lowercase g to use garbage collect operation\n");

fprintf(stdout,"\nUse lowercase 0 or 1 to move to the next state\n");

fprintf(stdout, "\nThe Current State Machine is:\n");	
printState();

fprintf(stdout, "\nThe starting state is: %c \n", presentState.stateName);
 	
	while(j != 1) {
		
	//enter input
		for( i=0;i <= 4; i++){
	    		scanf("%c", &store[i]);
			if (store[i] == '\n'){
				break;
			}
	 	}
		//next state when inputing 0
		if(store[0] == '0'){
						
			fprintf(stdout, "The Current State: %c\n",presentState.nextState0->stateName);
			presentState = state[presentState.nextState0->num];
		}
	  //next state when inputing 1
		if(store[0] == '1'){
						
			fprintf(stdout, "The Current State: %c\n",presentState.nextState1->stateName);
			presentState = state[presentState.nextState1->num];
		}
		//prints all the states when inputing p
		if(store[0] == 'p'){
			fprintf(stdout,"Printing states...\n");					
			printState();
		}

		//ends program when inputing q
		if(store[0] == 'q'){
			fprintf(stdout,"Quitting program...\n");	        	
			j = 1;
			break;
	  	}


// change operation (if input is 0)
	if (store [0] == 'c' && store [1]== '0'){
		if (store [2] == 'A'){
			
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state;
			state [presentState.num].nextState0 = state;
			
		}
        else if (store [2] == 'B'){
			
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);			
			presentState.nextState0 = state +1;
			state [presentState.num].nextState0 = state +1;
			
		}
        else if (store [2] == 'C'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +2;
			state [presentState.num].nextState0 = state +2;
		    
		}
		else if (store [2] == 'D'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +3;
			state [presentState.num].nextState0 = state +3;
			
		}
		else if (store [2] == 'E'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +4;
			state [presentState.num].nextState0 = state +4;
			
		}
		else if (store [2] == 'F'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +5;
			state [presentState.num].nextState0 = state +5;
		    
		}
		else if (store [2] == 'G'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +6;
			state [presentState.num].nextState0 = state +6;
					
					
		}
		else if (store [2] == 'H'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState0->stateName, presentState.stateName);	
			presentState.nextState0 = state +7;
			state [presentState.num].nextState0 = state +7;
						
		}
	}
	
// change operation (if input is 1)
	if (store [0] == 'c' && store [1]== '1'){
		if (store [2] == 'A'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);	
			presentState.nextState1 = state;
			state [presentState.num].nextState1 = state;
			
		}
        else if (store [2] == 'B'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +1;
			state [presentState.num].nextState1 = state +1;
			
		}
        else if (store [2] == 'C'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +2;
			state [presentState.num].nextState1 = state +2;
		    
		}
		else if (store [2] == 'D'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +3;
			state [presentState.num].nextState1 = state +3;
			
		}
		else if (store [2] == 'E'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +4;
			state [presentState.num].nextState1 = state +4;
			
		}
		else if (store [2] == 'F'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +5;
			state [presentState.num].nextState1 = state +5;
		    
		}
		else if (store [2] == 'G'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +6;
			state [presentState.num].nextState1 = state +6;
					
					
		}
		else if (store [2] == 'H'){
			fprintf(stdout, "%c in state %c has been changed\n",presentState.nextState1->stateName, presentState.stateName);
			presentState.nextState1 = state +7;
			state [presentState.num].nextState1 = state +7;
						
		}
	}
//delete operation
	if (store [0] == 'd'){
		if (store [1] == 'A'){
			fprintf(stdout, "deleting State A...\n");
			state [0].delete = 0;
		}
		if (store [1] == 'B'){
			fprintf(stdout, "deleting State B...\n");
			state [1].delete = 0;
		}
		if (store [1] == 'C'){
			fprintf(stdout, "deleting State C...\n");
			state [2].delete = 0;
		}
		if (store [1] == 'D'){
			fprintf(stdout, "deleting State D...\n");
			state [3].delete = 0;
		}
		if (store [1] == 'E'){
			fprintf(stdout, "deleting State E...\n");
			state [4].delete = 0;
		}
		if (store [1] == 'F'){
			fprintf(stdout, "deleting State F...\n");
			state [5].delete = 0;
		}
		if (store [1] == 'G'){
			fprintf(stdout, "deleting State G...\n");
			state [6].delete = 0;
		}
		if (store [1] == 'H'){
			fprintf(stdout, "deleting State H...\n");
			state [7].delete = 0;
		}
	}
//garbage operation
	if (store [0] == 'g'){	
		fprintf(stdout, "The reachable states are %c & %c\n",presentState.nextState0->stateName,presentState.nextState1->stateName);		
	}

  }


    exit(0);
}

