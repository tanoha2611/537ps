#include <unistd.h>
#include <stdlib.h>

#define NO_PID -1

int processOpts(int argc, char *argv[], int optArray[]) {

    int pid;
    char opt;

    pid = NO_PID;

    while ((opt = getopt(argc, argv, "p:sUSvc")) != -1) {
	    switch (opt) {
	    case 'p':
            optArray[0] = 1;
	        pid = atoi(optarg);
            break;
	    case 's':
            optArray[1] = 1;
            break;
	    case 'U':
            optArray[2] = 1;
            break;
	    case 'S':
            optArray[3] = 1;
            break;
	    case 'v':
            optArray[4] = 1;
            break;
	    case 'c':
            optArray[5] = 1;
            break;
	    }
    }
    
    return 1;
}
