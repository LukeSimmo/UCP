#include <stdio.h>
#include <string.h>
#include "match.h"


/*
* handles the importing of the file specified by user
*/
struct arr import(char* filename, int *length)
{
    struct arr in;
    FILE *filePtr = NULL;
    int i, j;
    j = 0;
    i = 0;

    filePtr = fopen(filename, "r");


    /*
    * reads into a struct for ease of use and transferring between files
    */
    while(fgets(in.arr[i], 200, filePtr))
    {
        in.arr[i][strlen(in.arr[i]) - 1] = '\0';
        i++;
    }

    j = i;

    *length = j;

    fclose(filePtr);
    
    return in;
}
