#include <stdio.h>

//int main() {
//    // Declare a character array to store the string
//    char str[100];
//    
//    // Declare a pointer variable that can point to a character
//    char *ptr;
//    
//    // Variable to store the count (length)
//    int length = 0;
//
//   	printf("Enter any string: "); 
//    // scanf("%[^\n]", str) reads the string including spaces until enter is pressed.
//    scanf("%[^\n]", str);
//
//    // Initialize the pointer to point to the first character of the string
//    ptr = str;
//
//    // Loop until the pointer points to the null terminator '\0' (end of string)
//    while (*ptr != '\0') {
//        length++;   // Increment the length counter
//        ptr++;      // Move the pointer to the next memory address (next character)
//    }
//
//    // Output: Display the final count
//    printf("The length of a string is: %d\n", length);
//
//    
//}



//2.Cubes Generator 
//#include <stdio.h>
//
//int main() {
//    int size, i, j;
//    int a[10][10]; // Declare 2D array
//
//    // Input: Array Size
//    printf("Enter array's size: ");
//    scanf("%d", &size);
//
//    // Input: Array Elements
//    printf("\nEnter array elements:\n");
//    for (i = 0; i < size; i++) {
//        for (j = 0; j < size; j++) {
//            printf("a[%d][%d] = ", i, j);
//            scanf("%d", &a[i][j]);
//        }
//    }
//    
//    printf("\nOutput:\n");
//    
//    // We pass &a[0][0] which is the address of the very first element.
//    find_cubes(&a[0][0], size);
//
//    return 0;
//}
//void find_cubes(int *arr, int size) {
//    int i, j;
//    int element;
//    
//    printf("Cubes of all elements:\n");
//    
//    // Loop through rows
//    for (i = 0; i < size; i++) {
//        // Loop through columns
//        for (j = 0; j < size; j++) {
//            
//            // Access the value using the pointer
//            // (*arr) gets the current value pointed to
//            element = *arr;
//            
//            // Calculate and print the cube
//            printf("%d ", element * element * element);
//            
//            // Move the pointer to the next element in memory
//            arr++; 
//        }
//        // Print a new line after every row to maintain 2D format
//        printf("\n");
//    }
//}

