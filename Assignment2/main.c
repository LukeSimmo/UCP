#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "match.h"
#include "colour.h"


/*
* main driver file that handles most functions
*/
int main(int argc, char* argv[])
{    
    int inLength;
    int *length;
    inFile file;

    if(argv[1] == NULL)
    {
        printf("usage\n\n");
        printf("  ./main <filename>\n\n");
        printf("  where\n");
        printf("    <filename>\n");
        printf("      is the file you want to import\n");
    }
    else
    {
        file = import(argv[1], &inLength);

        length = &inLength;

        if( (checkMatch(file, length) == TRUE) )
        {
            setColour("green");
            printf("\nBalanced\n");
            setColour("reset");
        }
        else
        {
            setColour("red");
            printf("\nNot balanced\n");
            setColour("reset");
        }
    }

    return 0;
}
