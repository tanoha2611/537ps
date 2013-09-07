#include "optproc.h"
#include <stdio.h>

#define OPT_SIZE 6
#define NO_PID -1
#define PID_ERR 0

int main(int argc, char *argv[]) {

    char *prog;
    int pid, scState, userTime, sysTime, virtMem, cmd;
    int optArray[OPT_SIZE];

    int j;
    for (j = 0; j < OPT_SIZE; j++) {
        optArray[j] = 0;
    }

    prog = argv[0];

    switch (pid = processOpts(argc, argv, optArray)) {
    case NO_PID:
	break;
    case PID_ERR:
	fprintf(stderr, "%s: Invalid process id: \n ", prog);
	break;
    default:
	printf("PID: %d\n", pid);
	break;
    }

    printf("optArray:\n");

    for (j = 0; j < OPT_SIZE; j++) {
        printf("%d", optArray[j]);
    }

    printf("\n");

    return 1;
}
