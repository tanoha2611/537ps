#include "optproc.h"
#include <stdio.h>

#define OPT_SIZE 6

int main(int argc, char *argv[]) {

    int pid, scState, userTime, sysTime, virtMem, cmd;
    int optArray[OPT_SIZE];

    int j;
    for (j = 0; j < OPT_SIZE; j++) {
        optArray[j] = 0;
    }

    processOpts(argc, argv, optArray);

    printf("optArray:\n");

    int i;
    for (i = 0; i < OPT_SIZE; i++) {
        printf("%d", optArray[i]);
    }

    printf("\n");

    return 1;
}
