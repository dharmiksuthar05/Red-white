#include <stdio.h>
// We declare these functions before main() so the compiler knows they exist.
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b); // Returns float to handle decimal results
int modulus(int a, int b);

int main() {
    int choice;
    int num1, num2;
    // "while(1)" creates an infinite loop. 
    // The program will only stop when the user chooses '0'.
    while(1) {        
        // Display the Menu exactly as shown in the example
        printf("\nInput/Output:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n"); // Double %% is needed to print a single % sign
        printf("Press 0 for the exit\n");
        
        // Read user choice
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Exit Logic: If user enters 0, break the loop immediately
        if(choice == 0) {
            printf("Exiting program...\n");
            break; 
        }

        // Check for valid menu range (1-5) before asking for numbers
        if(choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n");
            continue; // Skip the rest of the loop and show menu again
        }

        // Input the two numbers
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch(choice) {
            case 1:
                // Calling the addition UDF
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;

            case 2:
                // Calling the subtraction UDF
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;

            case 3:
                // Calling the multiplication UDF
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;

            case 4:
                // Handling Division (checking for divide by zero)
                if(num2 == 0) {
                    printf("Error: Cannot divide by Zero\n");
                } else {
                    // %.2f limits output to 2 decimal places
                    printf("Division of %d and %d is %.2f\n", num1, num2, divide(num1, num2));
                }
                break;

            case 5:
                // Handling Modulus (checking for divide by zero)
                if(num2 == 0) {
                    printf("Error: Cannot find modulus with Zero\n");
                } else {
                    printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                }
                break;
                
            // 'default' is technically handled by the 'if' check above, 
            default:
                printf("Invalid Input.\n");
        }
    }

    return 0;
}

// 4. Function Definitions (Logic Implementation)
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    // Typecast to float so we get decimal results (e.g., 5/2 = 2.5)
    return (float)a / b; 
}

int modulus(int a, int b) {
    return a % b;
}
