#include "LinkedList/Linked_List.h"

int main(){
    Node* Patient = NULL;

    // Adding nodes to the list
    addNode(&Patient, 1, "Mostafa", "male", 22);
    addNode(&Patient, 3, "Fatma", "female", 15);
    addNode(&Patient, 2, "Ahmed", "male", 25);
    showList(Patient);

    //remove from beginning
    removeNode(&Patient, 1);
    printf("\nAfter removing node with ID=1:\n");
    showList(Patient);

    addNode(&Patient, 1, "Mostafa", "male", 22);
    printf("\nAfter Adding node with ID=1:\n");
    showList(Patient);

    //remove from the end
    removeNode(&Patient, 1);
    printf("\nAfter removing node with ID=1:\n");
    showList(Patient);

    addNode(&Patient, 1, "Mostafa", "male", 22);
    printf("\nAfter Adding node with ID=1:\n");
    showList(Patient);

    //remove from the middle
    removeNode(&Patient, 2);
    printf("\nAfter removing node with ID=2:\n");
    showList(Patient);

    //update data
    updateNode(Patient, 1, "Ali", "male", 33);
    printf("\nAfter updating node with ID=1:\n");
    showList(Patient);
}