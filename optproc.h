/******************************************************************************
 * Authors: Andrew Summers apsummers@wisc.edu
 *          Hai Thach      thach@wisc.edu
 * Project: Programming Assignment 1, 537ps
 * File:    optproc.h
 *****************************************************************************/

/******************************************************************************
 * cliArgs defines a structure to hold the arguments passed to the program.
 * 
 * pid - the ID of the process. -1 indicates no PID was specified.
 * all others - boolean flags indicating whether the option was specified
 *****************************************************************************/
struct cliArgs {
    int pid;
    int opt_pid;
    int singleChar;
    int userTime;
    int sysTime;
    int virtMem;
    int cli;
};

/******************************************************************************
 * Process command line arguments.  The following options are available:
 *
 * -p <pid>
 *     Display process information only for the process whose number is <pid>.
 *     If this option is not present then display information for all processes
 *     of the current user.
 * -s
 *     Display the single character state information about the process.  If
 *     this option is not present, do not display this information.
 * -U
 *     Display the amount of user time consumed by this process.  This
 *     defaults to TRUE, so if it is not present, then this information is
 *     displayed.
 * -S
 *     Display the amount of system time consumed by this process.
 * -v
 *     Display the amount of virtual memory currently being used (in pages) by
 *     this program.
 * -c
 *     Display the command line that started this program.  This defaults to
 *     TRUE, so if it is not present, then this information is displayed.
 *
 * Paramters:
 *   int - length of arguments array
 *   char *[] - array of command line arguments
 *   struct cliArgs * - pointer to arguments struct
 *
 * Returns: 1 indicating successful processing, 0 otherwise
 ******************************************************************************/
int processOpts(int, char *[], struct cliArgs *);
