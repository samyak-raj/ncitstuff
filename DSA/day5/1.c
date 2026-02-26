//Singular linear linked list
//for first node
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node SLL;
SLL *first  = NULL, *temp;

void insert(int value) {
    temp = (SLL *) malloc(sizeof(SLL));
    temp->data = value;
    temp->next = first;
    first = temp;
    printf("Inserted: %d\n", value);
}

void delete() {
    if (first ==NULL) {
        printf("linked list is empty");
        return;
    }
    temp = first;
    first = first->next;
    printf("Deleted node: %d", temp->data);
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
