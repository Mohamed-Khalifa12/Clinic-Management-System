#include <stdio.h>
#include <stdlib.h>
#include"STD_Types.h"

// Define the Node structure for a doubly linked list
typedef struct Node 
{
    u32 ID;
    struct Node* prev;
    struct Node* next;
} Node;

// Function to create a new Node
static Node* createNode(u32 ID) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    newNode->ID = ID;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to add ID to the end of the list
void addNode(Node** head, u32 ID) 
{
    Node* newNode = createNode(ID);

    Node* current = *head;
    while (current->next != NULL) 
    {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
    
}

// Function to search for a node with specific ID
Node* searchNode(Node* head, u32 ID) 
{
    Node* current = head;
    while (current != NULL) 
    {
        if (current->ID == ID) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

