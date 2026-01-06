#include <stdio.h>                       

//1) Frequency checker

//int main()
//{
//    char str[100];                      // Array to store input string
//    int freq[256] = {0};                // Array to store frequency of characters
//    int i;                              // Loop counter
//     
//    printf("Enter any string: ");       // Ask user to enter a string
//    scanf("%s", str);                   // Read the string from user
//     
//    for (i = 0; str[i] != '\0'; i++)    // Loop until end of string
//    {
//        freq[str[i]]++;                 // Increase count of character
//    }
//
//    printf("Frequence of each letter:\n"); // Display message
//     
//    for (i = 0; i < 256; i++)           // Loop for all ASCII characters
//    {
//        if (freq[i] != 0)               // Check if character exists
//        {
//            printf("%c => %d\n", i, freq[i]); // Print character and its frequency
//        }
//    }
//}



//   OUTPUT

//  Enter any string: development
//  Frequence of each letter:
//  d => 1
//  e => 3
//  l => 1
//  m => 1
//  n => 1
//  o => 1
//  p => 1
//  t => 1
//  v => 1


//2) Palindrome 


//#include <stdio.h>              
//
//int main()
//{
//    char str[100];                // Character array to store the string
//    int i = 0, len = 0, flag = 1; // i = loop variable, len = string length, flag = palindrome indicator
//
//    printf("Enter any string: "); // Ask user to enter a string
//    scanf("%s", str);             // Read the string from user
//
//    while (str[len] != '\0')      // Loop until end of string is reached
//    {
//        len++;                    // Count number of characters
//    }
//
//    for (i = 0; i < len / 2; i++) // Loop from start to middle of string
//    {
//        if (str[i] != str[len - i - 1]) // Compare characters from both ends
//        {
//            flag = 0;             // Set flag to 0 if characters do not match
//            break;                // Exit loop
//        }
//    }
//
//    if (flag == 1)                // Check if flag is still 1
//        printf("The given string is Palindrome"); // Palindrome case
//    else
//        printf("The given string is Not Palindrome"); // Not palindrome case
//
//}


//   OUTPUT

//  Enter any string: Manan
//  The given string is Palindrome


