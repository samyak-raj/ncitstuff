//singly circular linked list
//insertion and deletion in first node
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node SCLL;
SCLL *first = NULL, *temp, *p;
void insert(int value) {
    temp = (SCLL *) malloc(sizeof(SCLL));
    temp->data = value;
    
    if (first == NULL) {
        first = temp;
        temp->next = first;  // Point to itself (circular)
        return;
    }
    
    p = first;
    while(p->next != first) {
        p = p->next;
    }
    
    temp->next = first;   
    p->next = temp;       
    first = temp;         
}

void delete() {
    if(first == NULL) {
        printf("List is empty\n");
        return;
    }

    if (first->next == NULL) {
        printf("Deleted: %d\n", first->data);
        free(first);
        first = NULL;
        return;
    }

    p = first;
    while(p->next != first) {
        p = p->next;
    }
    temp = first;
    first = first->next;
    p->next = first;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void display() {
    if(first == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = first;
    printf("Circular linked list: \n");
    do{
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != first);
    printf("Back to head\n");
}

int main() {
    int choice, value;
    while(1) {
        printf("\nSingly Circular Linked List\n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter value: ");
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
                exit(0);
            
            default:
                printf("Invalid choice");
        }
    }
}