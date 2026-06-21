#include <iostream>

int a[] = {1,3,6,7,1,2,25,23,56,62};


void BubbleSort(int a[], int array_size) {
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    printf("Initial array:\n");
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d", a[i]);
        printf(" ");
    }
    BubbleSort(a, sizeof(a)/sizeof(a[0]));
    printf("\nSorted array:\n");
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d", a[i]);
        printf(" ");
    }


    return 0;
}