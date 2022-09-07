#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedListNode
{
    char data;
    struct LinkedListNode* next;
} LinkedListNode;

typedef struct
{
    int count;
    LinkedListNode* head;
} LinkedList;

LinkedList* createLinkedList(void);
void insertStart(LinkedList* list, char entry);
char removeStart(LinkedList* list);
void printLinkedList(LinkedList* list);

#endif
