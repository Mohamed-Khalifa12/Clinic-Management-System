#include <stdio.h>
#include <stdlib.h>
#include"STD_Types.h"

typedef struct Node
{
    u32 Data;
    struct Node* prev;
    struct Node* Next;
}Node;

static Node* createNode(u32 Data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->Data = Data;
    newNode->prev = NULL;
    newNode->Next = NULL;

    return newNode;
}

void addNode(Node** head,u32 Data)
{
    Node* newNode = createNode(Data);
    Node* current = *head;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    //Detect Last Node
    while (current->Next != NULL)
    {
        current = current->Next;
    }
    current->Next = newNode;
    newNode->prev = current;
}

Node* searchNode(Node* head,u32 Data)
{
    Node* current = head;

    while (current != NULL)
    {
        if(current->Data == Data)
        {
            return current;
        }

        current = current->Next;
    }
    return NULL;
    
}

void PrintList(Node* head)
{
    Node* current = head;

    u8 counter=0;

    while (current != NULL)
    {
        printf("\nNode(%d): %d \n",counter,current->Data);
        counter++;
        current = current->Next;
    } 
}
