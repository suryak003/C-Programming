//Write a program to declare an integer array of size 5, initialize it, and print all elements.
#include <stdio.h>
int main() {
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    printf("Elements of the array: \n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
//Create a program to calculate the average of 10 numbers stored in an array.
#include <stdio.h>
int main() {
    int numbers[10];
    int sum = 0;
    float average;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = (float)sum / 10;
    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);
    return 0;
}
//Write a program to find the maximum value in an integer array.
#include <stdio.h>
int findMax(int arr[], int n) {
    int max_val = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}
int main() {
    int numbers[] = {12, 45, 9, 78, 34, 56};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int max_value = findMax(numbers, n);
    printf("The maximum value in the array is: %d\n", max_value);
    return 0;
}
//Implement a program to copy the contents of one array into another in reverse order.
#include <stdio.h>
int main() {
    int original_array[5] = {10, 20, 30, 40, 50};
    int reversed_array[5];
    int i, j;
    for (i = 0, j = 5 - 1; i < 5; i++, j--) {
        reversed_array[i] = original_array[j];
    }
    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", original_array[i]);
    }
    printf("\n");

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", reversed_array[i]);
    }
    printf("\n");

    return 0;
}
//Write a program to count how many positive and negative numbers exist in an array.
#include <stdio.h>
int main() {
    int arr[] = {2, -1, 5, 6, 0, -3, 10, -9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++; 
        } else if (arr[i] < 0) {
            negative_count++; 
        } else {
            zero_count++;
        }
    }
    printf("Original array: {2, -1, 5, 6, 0, -3, 10, -9}\n");
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);
    printf("Number of zeros: %d\n", zero_count);

    return 0;
}
//Create a 3x3 integer matrix and print it in a grid format.
#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
//Write a program to add two 2x2 matrices and store the result in a third matrix.
#include <stdio.h>
int main() {
    int matrix1[2][2], matrix2[2][2], sum[2][2];
    int i, j;
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
//Implement a Linear Search algorithm to find if a number exists in an array.
#include <stdio.h>
int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;
    int result_index = linearSearch(numbers, size, target);

    if (result_index != -1) {
        printf("Element %d found at index: %d\n", target, result_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    target = 50;
    result_index = linearSearch(numbers, size, target);

    if (result_index != -1) {
        printf("Element %d found at index: %d\n", target, result_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
//Write a user-defined function int multiply(int, int) to return the product of two numbers.
#include <stdio.h>
int multiply(int a, int b);
int main() {
    int num1, num2, product;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    product = multiply(num1, num2);
    printf("Product of %d and %d is: %d\n", num1, num2, product);
    return 0;
}
int multiply(int a, int b) {
    return a * b;
}
//Create a function that attempts to swap two integers using Call by Value (to demonstrate it fails).
#include <stdio.h>
void swap_fail(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_fail function: a = %d, b = %d\n", a, b);
}
int main() {
    int num1 = 5;
    int num2 = 10;
    printf("Before swap_fail function: num1 = %d, num2 = %d\n", num1, num2);
    swap_fail(num1, num2);
    printf("After swap_fail function: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
//Write a recursive function factorial() to calculate the factorial of a number.
#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int main() {
    int number = 10;
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }
    return 0;
}
//Implement a program where you pass an array to a function to verify if it is sorted.
#include <stdio.h>
#include <stdbool.h> 
bool isSorted(int arr[], int n) {
    if (n <= 1) {
        return true;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    if (isSorted(arr1, n1)) {
        printf("Array 1 is sorted in ascending order.\n");
    } else {
        printf("Array 1 is not sorted in ascending order.\n");
    }
    int arr2[] = {3, 5, 2, 8, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSorted(arr2, n2)) {
        printf("Array 2 is sorted in ascending order.\n");
    } else {
        printf("Array 2 is not sorted in ascending order.\n");
    }

    return 0;
}
// Write a program to accept a string using gets() and display it using puts().
#include <stdio.h>
#include <string.h> 
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    printf("Enter a string (max 99 characters): ");
    if (fgets(str, MAX_SIZE, stdin) != NULL) {
        size_t length = strlen(str);
        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
        }

        printf("You entered: ");
        puts(str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
//Create a program to calculate the length of a string without using the strlen() library function.
#include <stdio.h>
int calculateStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    int length = calculateStringLength(myString);
    printf("The string is: \"%s\"\n", myString);
    printf("The calculated length is: %d\n", length);
    return 0;
}
//Write a program to check if a given string is a Palindrome (e.g., "MADAM").
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length, i, is_palindrome = 1; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0; 
            break;             
        }
    }
    if (is_palindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}
//Implement a program to concatenate two strings using the strcat() function.
#include <stdio.h>
#include <string.h>
int main() {
    char s1[20] = "Hello ";
    char s2[] = "World!";
    strcat(s1, s2); 
    printf("The concatenated string is: %s\n", s1);
    return 0;
}
//Write a program that uses strcmp() to implement a basic password check.
#include <stdio.h>
#include <string.h>
int main() {
    char password[] = "sri123"; 
    char userInput[50]; 
    int comparisonResult;
    printf("Enter the password: ");
    fgets(userInput, sizeof(userInput), stdin);
    if (strlen(userInput) > 0 && userInput[strlen(userInput) - 1] == '\n') {
        userInput[strlen(userInput) - 1] = '\0';
    }
    comparisonResult = strcmp(password, userInput);

    if (comparisonResult == 0) {
        printf("Access Granted: Passwords match.\n");
    } else {
        printf("Access Denied: Passwords do not match.\n");
    }

    return 0;
}
//Create a program to reverse a user's name using strrev().
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    strrev(name);
    printf("Reversed name: %s\n", name);
    return 0;
}
// Create a program to count the total number of vowels in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_vowel(char c) {
    char upper_c = toupper(c);
    if (upper_c == 'A' || upper_c == 'E' || upper_c == 'I' || upper_c == 'O' || upper_c == 'U') {
        return 1; 
    } else {
        return 0; 
    }
}
int count_vowels(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (is_vowel(str[i])) {
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char str[100]; 
    int total_vowels;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    total_vowels = count_vowels(str);

    printf("The total number of vowels in the string are: %d\n", total_vowels);
    return 0;
}
//Write a program to find the transpose of a 3x3 matrix.
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
    int matrix[ROWS][COLS], transpose[COLS][ROWS];
    int i, j;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Implement a program to multiply two matrices.
#include <stdio.h>
void multiplyMatrices(int m, int n, int p, int q, int A[10][10], int B[10][10], int C[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m, n, p, q, i, j;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter rows and cols for 1st matrix (max 10x10): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and cols for 2nd matrix (max 10x10): ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Error: Columns of 1st must equal rows of 2nd.\n");
        return 1;
    }
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    multiplyMatrices(m, n, p, q, A, B, C);
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
//Write a recursive function to generate the Nth term of the Fibonacci sequence.
#include <stdio.h>
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; 
    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    n = 45;
    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    return 0;
}
