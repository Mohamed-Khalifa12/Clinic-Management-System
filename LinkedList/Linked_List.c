#include "Linked_List.h"

// Function to create a new Node
static Node* createNode(u32 ID, u8* name, u8* gender, u32 age) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    newNode->ID = ID;
    newNode->age = age;
    strcpy(newNode->gender, gender);
    strcpy(newNode->name, name);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to add ID to the end of the list
void addNode(Node** head, u32 ID, u8* name, u8* gender, u32 age)
{
    Node* newNode = createNode(ID, name, gender, age);

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

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

// Function to remove a node with specific ID
void removeNode(Node** head, u32 ID){
    //check if the list is empty
    if(*head == NULL)
    {
        printf("Error: List is Empty");
        return ;
    }

    Node* removedNode = searchNode(*head, ID);
    if (removedNode == NULL) {
        printf("Error: No such person in");
        return ;
    }

    // If the node to be deleted is the first node
    if (*head == removedNode) {
        *head = (*head)->next;
        if (head != NULL)
            (*head)->prev = NULL;
    } else {
        removedNode->prev->next = removedNode->next;
        if(removedNode->next != NULL)
            removedNode->next->prev = removedNode->prev;
    }
    free(removedNode);
}

// Function to update a node with specific ID
void updateNode(Node* head, u32 ID, u8* name, u8* gender, u32 age){
    //check if the list is empty
    if(head == NULL)
    {
        printf("Error: List is Empty");
        return ;
    }

    Node* updatedNode = searchNode(head, ID);
    if (updatedNode == NULL) {
        printf("Error: No such person in");
        return ;
    }

    updatedNode->ID = ID;
    updatedNode->age = age;
    strcpy(updatedNode->gender, gender);
    strcpy(updatedNode->name, name);
}



// For testing List
void showList(Node* head){
    Node* current = head;
    printf("Data in List is: \n");

    while (current != NULL)
    {
        printf("id = %d, name = %s, age = %d and gender is %s\n", current->ID, current->name, current->age, current->gender);
        current = current->next;
    }
}
