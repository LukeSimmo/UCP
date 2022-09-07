#include <stdio.h>
#include <string.h>
#include "colour.h"

/*
* 6 colours available but not all are used
* acessed via setColour function
*/
void red(void)
{
    printf("\033[1;31m");
}

void green(void)
{
    printf("\033[0;32m");
}

void yellow(void)
{
    printf("\033[0;33m");
}

void blue(void)
{
    printf("\033[0;34m");
}

void magenta(void)
{
    printf("\033[0;35m");
}

void cyan(void)
{
    printf("\033[0;36m");
}

void reset(void)
{
    printf("\033[0m");
}


/*
* uses a string from calling program to determine colour
* for easier use
*/ 
void setColour(char* choice)
{
    if( (strcmp(choice, "red") == 0) )
    {
        red();
    }
    else if( (strcmp(choice, "green") == 0) )
    {
        green();
    }
    else if( (strcmp(choice, "yellow") == 0) )
    {
        yellow();
    }
    else if( (strcmp(choice, "blue") == 0) )
    {
        blue();
    }
    else if( (strcmp(choice, "magenta") == 0) )
    {
        magenta();
    }
    else if( (strcmp(choice, "cyan") == 0) )
    {
        cyan();
    }
    else if( (strcmp(choice, "reset") == 0) )
    {
        reset();
    }
}
