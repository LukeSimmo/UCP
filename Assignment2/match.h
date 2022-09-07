#ifndef FILEIO_H
#define FILEIO_H

typedef struct arr
{
    char arr[30][100];
} inFile;

struct arr import(char* filename, int *length);
int checkMatch(inFile file, int* length);

#define FALSE 0
#define TRUE !FALSE

#endif
