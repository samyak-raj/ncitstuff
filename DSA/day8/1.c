#include <stdio.h>
int i, j;
void insertionSort(int a[], int n){
    int k;
    for(i = 0; i < n; i++) {
        k = a[i];
        j = i-1;
        while(j >=0 && a[j] > k) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = k;
    }
}

void selectionSort(int a[], int n) {
    int min, temp;
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

    }
}

void bubbleSort(int a[], int n) {
    int temp;
    for(i = 0; i < n-1; i++) {
        for (j = 0; j < n - i -1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void exchangeSort(int a[], int n) {
    int temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[50], n, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nSorting method\n");
    printf("1. insertion sort\n2. selection sort\n3. bubble sort\n4. exchange sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            insertionSort(a, n);
            break;
        case 2:
            selectionSort(a, n);
            break;
        case 3:
            bubbleSort(a, n);
            break;
        case 4:
            exchangeSort(a, n);
            break;
        default:
            printf("Invalid number");
            return 0;
    }

    printf("sorted list\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}