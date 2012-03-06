#include <stdio.h>
#include <string.h>
#include "fann.h"
#include "train.h"
#include "test.h"
#include "params.h"
#include "functions.h"

void strip_newline( char *str, int size )
{
    int i;
    for (  i = 0; i < size; ++i )
    {
        if ( str[i] == '\n' )
        {
            str[i] = '\0';
            return;   
        }
    }
}

int main()
{
	system("clear");
	printf("Fixing the trains - Daryll Doyle\n");
	printf("Enter 'help' below to access the help page.");
	while(1)
	{
		char usr_input[100];
		printf("\n\nEnter command: ");
		fgets ( usr_input, 100, stdin );
		strip_newline( usr_input, 100 );
	
		if(strcmp ( usr_input, "exit" ) == 0 )
			exit(0);
		else if(strcmp ( usr_input, "train" ) == 0 )
			// train(input, output, hidden, max_epochs);
			train(6,4,3,3000);
		else if(strcmp ( usr_input, "test" ) == 0 )
			test();
		else if(strcmp ( usr_input, "params" ) == 0 )
			params();
		else if(strcmp ( usr_input, "help" ) == 0 )
			help();
		else
			printf("Error, command not found.");
	}
}