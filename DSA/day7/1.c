//BST program
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node* NodePtr;

NodePtr createNode(int value) {
    NodePtr newnode = (NodePtr) malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->left = newnode->right = NULL;
    return newnode;
}

NodePtr insert(NodePtr root, int value) {
    if(root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

void inorder(NodePtr root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

void preorder(NodePtr root) {
    if (root != NULL) {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(NodePtr root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

int main() {
    NodePtr root = NULL;
    int choice, value;
    while(1) {
        printf("\nBST\n");
        printf("1. Insert\n");
        printf("2. Inorder traversal\n");
        printf("3. Preorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Inorder: \n");
                inorder(root);
                break;
                
            case 3:
                printf("Preorder: \n");
                preorder(root);
                break;
            
            case 4:
                printf("Postorder: \n");
                postorder(root);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}