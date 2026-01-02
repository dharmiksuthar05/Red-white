#include<stdio.h>
//int main(){
//	
////	1)Positive and Negative 
//	// --- Variable Declaration ---
//	int array1[100][100]; // The main 2D array (Matrix)
//	int array_positive[100], array_negative[100]; // Arrays to store separated values
//	int i, j, k, row, col; 
//	int p = 0, n = 0; // Counters: 'p' tracks the index for positive array, 'n' for negative
//	
//    // --- Step 1: Input Matrix Dimensions ---
//	printf("Enter the number of Rows:");
//	scanf("%d",&row);
//	
//	printf("\nEnter the Number of col:");
//	scanf("%d",&col);
//	
//    // --- Step 2: Input Matrix Elements ---
//	printf("Enter the data for rows and cols:");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			scanf("%d",&array1[i][j]); // Reading input into the 2D array
//		}
//	}
//	
//    // --- Step 3: Display the Original Matrix ---
//	printf("\nThe matrix is\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("%d ",array1[i][j]); // Printing elements row by row
//		}
//		printf("\n"); // Move to the next line after printing one row
//	}
//	
//	// --- Step 4: Logic to Separate Positive and Negative Numbers ---
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//            // Check if element is positive (or zero)
//			if(array1[i][j]>=0){
//				array_positive[p++]=array1[i][j]; // Store in positive array and increment 'p'
//			}
//			else{
//				array_negative[n++]=array1[i][j]; // Store in negative array and increment 'n'
//			}
//		}
//		printf("\n");
//	}
//
//    // --- Step 5: Output the Separated Lists ---
//    
//	// Loop to print all positive values found
//	for(i=0;i<p;i++){
//		printf("Positive number  is : %d\n",array_positive[i]);
//	}
//	
//	// Loop to print all negative values found
//	for(i=0;i<n;i++){
//		printf("Negative Number is %d\n",array_negative[i]);
//	}
	
//	Enter the number of Rows:2
//	Enter the Number of col:2
//	Enter the data for rows and cols:5
//	9
//	-8
//	-7
//	The matrix is
//	5 9
//	-8 -7
//	Positive number  is : 5
//	Positive number  is : 9
//	Negative Number is -8
//	Negative Number is -7


//	2)Largest in 2D
//	int main() {                                
//    int row, column, i, j;                  // row & column size, loop variables
//    int a[10][10];                          // Declare 2D array
//    int max;                                // Variable to store largest value
//
//    printf("Enter the array's row size: "); // Ask user for number of rows
//    scanf("%d", &row);                      // Read row size
//
//    printf("Enter the array's column size: "); // Ask user for number of columns
//    scanf("%d", &column);                      // Read column size
//
//    printf("Enter array's elements:\n");    // Ask user to enter elements
//    for(i = 0; i < row; i++) {              // Loop for rows
//        for(j = 0; j < column; j++) {       // Loop for columns
//            scanf("%d", &a[i][j]);          // Store element in array
//        }
//    }
//
//    max = a[0][0];                          // Assume first element is largest
//    for(i = 0; i < row; i++) {              // Loop through rows
//        for(j = 0; j < column; j++) {       // Loop through columns
//            if(a[i][j] > max) {             // Compare current element with max
//                max = a[i][j];              // Update max value
//            }
//        }
//    }
//    printf("The largest element is: %d", max); // Print largest element
//}
//Enter the array's row size: 2
//Enter the array's column size: 2
//Enter array's elements:
//9
//8
//7
//6
//The largest element is: 9

//3)Transpose2d
//#include <stdio.h>                               
//
//int main() {                                     
//    int row, column, i, j;                       // row & column sizes, loop variables
//    int a[10][10];                               // Declare 2D array
//
//    printf("Enter the array's row & column size: "); // Ask user for row and column
//    scanf("%d %d", &row, &column);                   // Read row and column values
//
//    printf("Enter array's elements:\n");         // Ask user to enter array elements
//    for(i = 0; i < row; i++) {                   // Loop through rows
//        for(j = 0; j < column; j++) {            // Loop through columns
//            printf("a[%d][%d] = ", i, j);        // Display index position
//            scanf("%d", &a[i][j]);               // Store element in array
//        }
//    }
//
//    printf("The transpose matrix of an array:\n"); // Display transpose 
//    for(j = 0; j < column; j++) {                  // Loop for transpose columns
//        for(i = 0; i < row; i++) {                 // Loop for transpose rows
//            printf("%d ", a[i][j]);                // Print transpose element
//        }
//        printf("\n");                              // Move to next row
//    }
//
//}
//Enter the array's row & column size: 2
//2
//Enter array's elements:
//a[0][0] = 5
//a[0][1] = 6
//a[1][0] = 3
//a[1][1] = 1
//The transpose matrix of an array:
//5 3
//6 1

//4) Sum of row and column
//
//#include <stdio.h>                               
//
//int main() {                                     
//    int r, c, i, j;                              // r = rows, c = columns, i & j = loops
//    int a[10][10];                               // Declare 2D array
//    int row, col;                                // Selected row and column numbers
//    int rowSum = 0, colSum = 0;                  // Variables to store sums
//
//    printf("Enter the array's row size: ");      // Ask user for row size
//    scanf("%d", &r);                             // Read row size
//	                                        
//    printf("Enter the array's column size: ");   // Ask user for column size
//    scanf("%d", &c);                             // Read column size
//
//    printf("Enter array's elements:\n");         // Ask user to enter elements
//    for(i = 0; i < r; i++) {                     // Loop through rows
//        for(j = 0; j < c; j++) {                 // Loop through columns
//            printf("a[%d][%d] = ", i, j);        // Show array index
//            scanf("%d", &a[i][j]);               // Store element in array
//        }
//    }
//
//    printf("Enter row number: ");                // Ask for row number
//    scanf("%d", &row);                           // Read row number
//
//    printf("Elements of row %d: ", row);         // Display row elements
//    for(j = 0; j < c; j++) {                     // Loop through selected row
//        printf("%d ", a[row][j]);                // Print row element
//        rowSum += a[row][j];                     // Add element to row sum
//    }
//    printf("\nThe sum of row %d: %d\n", row, rowSum); // Print row sum
//
//    printf("Enter column number: ");             // Ask for column number
//    scanf("%d", &col);                           // Read column number
//
//    printf("Elements of column %d: ", col);      // Display column elements
//    for(i = 0; i < r; i++) {                     // Loop through selected column
//        printf("%d ", a[i][col]);                // Print column element
//        colSum += a[i][col];                     // Add element to column sum
//    }
//    printf("\nThe sum of column %d: %d", col, colSum); // Print column sum
//
//}
//Enter the array's row size: 2
//Enter the array's column size: 2
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 2
//a[1][0] = 2
//a[1][1] = 2
//Enter row number: 2
//Elements of row 2: 3 0
//The sum of row 2: 3
//Enter column number: 1
//Elements of column 1: 2 2
//The sum of column 1: 4

