#ifndef LinkedList_H_
#define LinkedList_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"../util/DataBase.h"

// prototypes of functions
static Node* createNode(u32 ID, u8* name, u8* gender, u32 age);
void addNode(Node** head, u32 ID, u8* name, u8* gender, u32 age);
Node* searchNode(Node* head, u32 ID);
void removeNode(Node** head, u32 ID);
void updateNode(Node* head, u32 ID, u8* name, u8* gender, u32 age);

//For Testing List
void showList(Node* head);

#endif /* LinkedList_H_ */