/******************************************************************************
 * Authors: Andrew Summers apsummers@wisc.edu
 *          Hai Thach      thach@wisc.edu
 * Project: Programming Assignment 1, 537ps
 * File:    optproc.c
 *****************************************************************************/

#include <unistd.h>
#include <stdlib.h>
#include "optproc.h"

/* atoi() will return 0 when trying to convert non-integer values
 * to an integer, so define a PID error as 0 and no PID specified
 * as -1
 */
#define NO_PID -1
#define PID_ERR 0

int processOpts(int argc, char *argv[], struct cliArgs *options) {

    char opt;
    int success;

    /* Assume success by default */
    success = 1;

    /* Assume no PID is given by default */
    options->pid = NO_PID;

    /* getopt() returns -1 when no more arguments are found, loop until
     * no more options are left
     */
    while ((opt = getopt(argc, argv, "p:sUSvc")) != -1) {
	switch (opt) {
        case 'p':
	    options->opt_pid = 1;
            options->pid = atoi(optarg);
	    
	    if (options->pid == PID_ERR) {
		success = 0;
	    }

            break;
	case 's':
	    options->singleChar = 1;
            break;
	case 'U':
	    options->userTime = 1;
            break;
	case 'S':
	    options->sysTime = 1;
            break;
	case 'v':
	    options->virtMem = 1;
            break;
	case 'c':
	    options->cli = 1;
            break;
	}
    }
    
    return success;
}
