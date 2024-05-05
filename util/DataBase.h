#include "STD_Types.h"

// Define the Node structure for a doubly linked list
typedef struct Node 
{
    u32 ID;
    u8 name[50];
    u8 gender[7];
    u32 age;
    struct Node* prev;
    struct Node* next;
} Node;