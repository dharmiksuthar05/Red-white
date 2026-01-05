#include <stdio.h>
int main() {
    int arr[100], n, i;
    int *ptr; //Taking pointer for taravsal 
	
//	Taking input from USER 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;  // pointer points to the first element of array
    printf("Even elements in the array are:\n");
//    Logic for Even element
    for (i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }

}

