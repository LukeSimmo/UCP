#include <stdio.h>
#include "match.h"
#include "LinkedList.h"


/*
* Prints imported file to the user
*/
void print(inFile file)
{
    int ii;

    for(ii = 0; ii < 7; ii++)
    {
        printf(" %s\n", file.arr[ii]);
    }
}

/*
* Checks if two parenthesis are balanced
* and returns a boolean (defined in header)
*/
int matchingPair(char one, char two)
{
    int returnVal;

    if((one == '<') && (two == '>'))
    {
        returnVal = TRUE;
    }
    else if((one == '{') && (two == '}'))
    {
        returnVal = TRUE;
    }
    else if((one == '[') && (two == ']'))
    {
        returnVal = TRUE;
    }
    else if((one == '(') && (two == ')'))
    {
        returnVal = TRUE;
    }
    else
    {
        returnVal = FALSE;
    }

    return returnVal;
}


/*
* checks entire file for matching brackets
*/
int checkMatch(inFile file, int* length)
{
    char current;
    int count, ii;
    LinkedList *list;

    list = createLinkedList();


    /*
    * Since imported file is sotred in a 2d array a nested loop is 
    * required to iterate through each value
    */

    for(ii = 0; ii < *length; ii++)
    {
        count = 0;

        while(file.arr[ii][count] != 0)
        {
            current = (char)file.arr[ii][count];

            /*
            * when the program encounters a open bracket it is inserted into the list
            * to compare to other brackets
            */
            if((current == '(') || (current == '<') || (current == '{') || (current == '['))
            {
                insertStart(list, current);
            }

            if((current == ')') || (current == '>') || (current == '}') || (current == ']'))
            {
                if((*list).head == NULL)
                {
                    print(file);
                    return FALSE;
                }
                else if(!matchingPair(removeStart(list), current))
                {
                    print(file);
                    return FALSE;
                }
            }

            count++;
        }
    }

    /*
    * if the list is null here it means the brackets are balanced, as all
    * brackets had a match
    */
    if((*list).head == NULL)
    {
        print(file);
        return TRUE;
    }
    else
    {
        print(file);
        return FALSE;
    }
}
