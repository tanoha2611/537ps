/******************************************************************************
 * Authors: Andrew Summers apsummers@wisc.edu
 *          Hai Thach      thach@wisc.edu
 * Project: Programming Assignment 1, 537ps
 * File:    main.c
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "optproc.h"

int main(int argc, char *argv[]) {

    char *prog;
    struct cliArgs *options;
    int procOptSuccess;

    prog = argv[0];

    /* Initialize options struct */
    options = (struct cliArgs *)malloc(sizeof(struct cliArgs));
    if (options == NULL) {
	fprintf(stderr, "Couldn't allocate memory");
	exit(0);
    }
    
    procOptSuccess = processOpts(argc, argv, options);

    if (procOptSuccess != 1) {
	fprintf(stderr, "Error: Couldn't process command line.");
	exit(0);
    }

    return 0;
}
