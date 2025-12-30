#include<stdio.h>
int main(){
	int i,j,num=11,k;

//    for (i = 41; i <= 45; i++) {          // Outer loop controls rows (41 to 45)
//        for (j = 41; j <= i; j++) {       // Inner loop prints numbers from 41 to i
//            printf("%d ", j);             // Print current number
//        }
//        printf("\n");                     // Move to next line after each row
//    }

    /* Output:
       41
       41 42
       41 42 43
       41 42 43 44
       41 42 43 44 45
    */

//    int num = 11;                         // Initialize starting number

//    for (i = 0; i <= 5; i++) {            // Outer loop controls number of rows
//        for (j = 0; j <= i; j++) {        // Inner loop controls numbers per row
//            printf("%d ", num);           // Print current value of num
//            num++;                        // Increment num for continuous sequence
//        }
//        printf("\n");                     // New line after each row
//    }

    /* Output:
       11
       12 13
       14 15 16
       17 18 19 20
       21 22 23 24 25
       26 27 28 29 30 31
    */



//    for (i = 1; i <= 5; i++) {      // Outer loop for rows
//
//        for (j = i; j < 5; j++) {   // Print spaces
//            printf("  ");
//        }
//        
//        num = 6 - i;   // Calculate starting number for this row
//
//        for (k = num; k <= 5; k++) {  // Print numbers from num to 5
//            printf("%d ", k);
//        }
//
//        printf("\n");   // Move to next line
//    }	

//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5


//	 for(i = 0; i < 5; i++) {  // loop for rows
//        for(j = 0; j < i; j++) {  // loop for spaces
//            printf("  ");  // print a space
//        }
//
//        for(k = 1; k <= 5 - i; k++) {  // loop for numbers in row
//            if(k % 2 != 0)             // if position is odd
//                printf("1 ");            // print 1
//            else                        // if position is even
//                printf("0 ");            // print 0
//        }
//
//        printf("\n");  // move to next row
//    }
//	
//	1 0 1 0 1
//	  1 0 1 0
//	    1 0 1
//	      1 0
//	        1

//    for(i = 1; i <= 5; i++) {  // loop for rows
//
//        // print spaces
//        for(j = i; j < 5; j++) {  // loop for spaces before numbers
//            printf("  ");          // print a space
//        }
//
//        // print decreasing part first
//        for(k = 5 - i + 1; k <= 5; k++) {  // loop for left side numbers
//            printf(" %d", k);               // print number
//        }
//
//        // print increasing part after the peak
//        for(k = 4; k >= 5 - i + 1; k--) {  // loop for right side numbers
//            printf(" %d", k);               // print number
//        }
//
//        printf("\n");  // move to next row
//    }
//	       5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1



//    for (i = 1; i <= 5; i++) {           // Loop for rows
//
//        for (j = 1; j <= i; j++) {       // Print left side numbers
//            printf("%d", j);             // Display number
//        }
//
//        for (k = i; k < 5; k++) {        // Loop for middle spaces
//            printf("  ");                // Print two spaces
//        }
//
//        for (j = 1; j <= i; j++) {       // Loop for right side numbers
//            printf("%d", i - j + 1);     // Print numbers in reverse
//        }
//
//        printf("\n");                    // Move to next line
//    }
//  1        1
//	12      21
//	123    321
//	1234  4321
//	1234554321

//    int height = 6;                    // Number of rows
//    int width = 5;                     // Number of stars per row
//
//    for (i = 0; i < height; i++) {     // Loop for rows
//        for (j = 0; j < width; j++) {  // Loop for columns
//
//            if (i == 0)                // Top horizontal line
//                printf("* ");
//
//            else if (i == 2)           // Middle horizontal line
//                printf("* ");
//
//            else if (j == 0)           // Left vertical line
//                printf("* ");
//
//            else if (j == width - 1 && i == 1) // Right vertical (upper only)
//                printf("* ");
//
//            else
//                printf("  ");          // Spaces for empty area
//        }
//
//        printf("\n");                  // Move to next line
//    }
//  * * * * *
//	*       *
//	* * * * *
//	*
//	*
//	*
}
