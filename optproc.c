#include <unistd.h>
#include <stdlib.h>

/* atoi() will return 0 when trying to convert non-integer values
 * to an integer, so define a PID error as 0 and no PID specified
 * as -1
 */
#define NO_PID -1
#define PID_ERR 0

int processOpts(int argc, char *argv[], int optArray[]) {

    int pid;
    char opt;

    pid = NO_PID;
    
    /* getopt() returns -1 when no more arguments are found, loop until
     * no more options are left
     */
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
    
    return pid;
}
