#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int c;
	char data[100];
	char exit[] = "Exit";
    while(1)
	{
        printf("Enter new line: ");
		gets(data);  
		// Get one character from the input     
	 	if (strcmp(data,exit)==0)
		{
			printf("Break!!");
			break;
		}       
		printf("--> Put %s \n", data );               // Put the character to the output
    }

    return 0;
}
