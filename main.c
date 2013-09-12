/******************************************************************************
 * Authors: Andrew Summers apsummers@wisc.edu
 *          Hai Thach      thach@wisc.edu
 * Project: Programming Assignment 1, 537ps
 * File:    main.c
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "optproc.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[]) {

    char *prog;
    struct cliArgs *options;

    prog = argv[0];

    /* Initialize options struct */
    options = (struct cliArgs *)malloc(sizeof(struct cliArgs));
    if (options == NULL) {
	fprintf(stderr, "Couldn't allocate memory");
	exit(0);
    }
    
    procOptSuccess = processOpts(argc, argv, options);

    printf("-p: %d\n", options->opt_pid);
    printf("pid: %d\n", options->pid);

    return EXIT_SUCCESS;
}
