#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3; // number of disks
    int from = 1; // initial tower
    int dest = 2; // final tower
    if (argc == 2) {        
        n = atoi(argv[1]);
    }
// if 4 arguements passed (the word "towers" count's as an arguement).. 
	if (argc ==4){
		n = atoi(argv[1]); // let the number of disks equal to 2nd element
		from = atoi (argv [2]); // let the initial tower equal the 3rd element
		dest = atoi (argv [3]); // let the final tower equal the 4th element
	
	if (dest == from) {
	fprintf (stderr, "Error. The initial and final towers cannot be the same");
	exit (-1);
	}
}

	if (argc ==3){
		fprintf (stderr, "Error. Cannot perform with 2 arguements");
		exit (-1);	
}

    towers(n, from, dest);
    exit(0);
}

