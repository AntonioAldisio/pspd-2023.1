/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calcula.h"


void
sub_add_prog_100(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	numbers  add_100_arg;
	int  *result_2;
	numbers  sub_100_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SUB_ADD_PROG, SUB_ADD_PROG, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = add_100(&add_100_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = sub_100(&sub_100_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	sub_add_prog_100 (host);
exit (0);
}
