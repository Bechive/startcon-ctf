/*
 | Format string CTF challenge
 | compile with 'gcc source.c -o format_string -Wall -m32'
 | by pasteBin for the StartCon CTF
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *	   ____                    __        __      _             *	
 *	  / __/__  ______ _  ___ _/ /_  ____/ /_____(_)__  ___ _   *	
 *	 / _// _ \/ __/  ' \/ _ `/ __/ (_.-/ __/ __/ / _ \/ _ `/   *	
 *	/_/  \___/_/ /_/_/_/\_,_/\__/ /___/__/ _/ /_/_//_/\_, /    *	
 *	                                                 /___/     *	
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

#define NOPE 0
#define LEGIT 1


void do_the_format(void);

int main(int argc, char *argv[]){
	printf(
"___________                          __      _________ __         .__                \n"
"\\_   _____/__________  _____ _____ _/  |_   /   _____//  |________|__| ____    ____  \n"
" |    __)/  _ \\_  __ \\/     \\\\__  \\\\   __\\  \\_____  \\\\   __\\_  __ \\  |/    \\  / ___\\ \n"
" |     \\(  <_> )  | \\/  Y Y  \\/ __ \\|  |    /        \\|  |  |  | \\/  |   |  \\/ /_/  >\n"
" \\___  / \\____/|__|  |__|_|  (____  /__|   /_______  /|__|  |__|  |__|___|  /\\___  / \n"
"     \\/                    \\/     \\/               \\/                     \\//_____/  \n"
"\n"

	);
	fflush(stdout);
	do_the_format();
	return EXIT_SUCCESS;
}

void do_the_format(void){
	char format_string[101];
	printf("Once thought to be just a lazy short cut,\n"
		"actually leads to remote code execution!\n\n"
		"\n"
		"\n"
		"Lets give that a crack shall we?.\n"
		"format string> ");
	fflush(stdout);
	fgets(format_string, 99, stdin);
	int i = 0;
	int valid = LEGIT;
	for (i = 0; i < 100; ++i) {
		switch (format_string[i]) {
			case '7': valid = NOPE;
			case '3': valid = NOPE;
		}
	}
	if (valid == NOPE){
		printf("Bad input detected!\n");
		return;
	}
	format_string[100] = '\0';
	printf(format_string);
	puts("Having fun?");
	fflush(stdout);
}









