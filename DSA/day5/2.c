//Singular linear linked list
//for last node
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node SLL;
SLL *first  = NULL, *temp, *p;

void insert(int value) {
    temp = (SLL *) malloc(sizeof(SLL));
    temp->data = value;
    temp->next = NULL;
    
    if (first == NULL) {
        first = temp;
        printf("Inserted: %d\n", value);
        return;
    }
    
    p = first;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = temp;
    printf("Inserted: %d\n", value);
}

void delete() {
    if (first == NULL) {
        printf("List is empty, cannot delete\n");
        return;
    }
    
    if (first->next == NULL) {
        temp = first;
        first = NULL;
        printf("Deleted node: %d\n", temp->data);
        free(temp);
        return;
    }
    
    p = first;
    while(p->next->next != NULL) {
        p = p->next;
    }
    temp = p->next;      
    p->next = NULL;      
    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void display() {
    temp = first;
    if (temp == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    printf("Linked list: \n");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){ 
    int choice, value;
    while(1) {
        printf("\nLinked List\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a value: ");
                scanf("%d", &value);
                insert(value);
                break;
            
            case 2:
                delete();
                break;
            
            case 3:
                display();
                break;
            case 4:
                return 0;
            
            default:
                printf("Invalid choice\n");
        }
    }
}
