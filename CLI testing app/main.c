/*

Copyright (C) 2012  Daryll Doyle

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
long with this program.  If not, see <http://www.gnu.org/licenses/>.


*/

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
			train(6,4,11,500000);
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