#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


LinkedList* createLinkedList(void)
{
    LinkedList* list;

    list = (LinkedList*)malloc(sizeof(LinkedList));
    (*list).head = NULL;

    return list;
}

void insertStart(LinkedList* list, char entry)
{
    LinkedListNode* newNode;
    newNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));

    (*newNode).data = entry;
    (*newNode).next = (*list).head;
    (*list).head = newNode;
}

char removeStart(LinkedList* list)
{
    LinkedListNode* temp;
    LinkedListNode* head = (*list).head;

    temp = head;
    (*list).head = (*head).next;

    return (*temp).data;
}

/*
* prints entire list to user
*/
void printLinkedList(LinkedList* list)
{
    int x = 0;
    LinkedListNode* temp;
    temp = (*list).head;

    while (temp != NULL)
    {
        x = (*temp).data;
        printf(" %c\n", x);
        temp = (*temp).next;
    }
}
