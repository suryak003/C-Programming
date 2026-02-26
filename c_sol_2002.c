Write a C program to find the size (number of elements) of an array using the sizeof operator.
#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
    return 0;
}
Write a C program to remove duplicate elements from an array and print only the unique elements.
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    if (n == 0) {
        printf("No element inside the array.\n");
        return 0;
    }
    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    temp[0] = arr[0];
    count = 1;
    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < count; j++) {
            if (arr[i] == temp[j]) {
                break; 
            }
        }
        if (j == count) {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}
Write a C program to rotate the elements of an array to the left by n positions.	
#include <stdio.h>
void leftRotate(int arr[], int n, int d) {
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[i + (n - d)] = temp[i];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3; 
    printf("Original array: ");
    printArray(arr, n);
    leftRotate(arr, n, d);
    printf("Array after left rotation by %d positions: ", d);
    printArray(arr, n);
    return 0;
}
Write a C program to calculate and print the sum of all elements in an array.
#include <stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        sum += numbers[i]; 
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    return 0; 
}
Write a C program to print a diamond star (*) pattern for a given number of rows.
#include <stdio.h>
int main() {
    int i, j, space, rows;
    printf("Enter the number of rows for the diamond (half-height): ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
Write a C program to print a pyramid star (*) pattern for a given number of rows.
#include <stdio.h>
int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
Write a C program to check whether the given array is a palindrome or not. (An array is palindrome if it reads the same forward and backward.)
#include <stdio.h>
int isPalindrome(int arr[], int n) {
    int i;
    for(i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            return 0;  
        }
    }
    
    return 1;  
}

int main() {
    int arr[100], n, i;	

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(isPalindrome(arr, n)) {
        printf("The array is a Palindrome.\n");
    } else {
        printf("The array is NOT a Palindrome.\n");
    }

    return 0;
}
Write a C program to find the missing number from an array containing numbers from 1 to n, where exactly one number is missing.
#include <stdio.h>
int findMissingNumber(int arr[], int size, int n) {
    int i;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for(i = 0; i < size; i++) {
        actual_sum += arr[i];
    }
    return (expected_sum - actual_sum);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d numbers (from 1 to %d with one missing):\n", n-1, n);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    int missing = findMissingNumber(arr, n-1, n);
    printf("The missing number is: %d\n", missing);
    return 0;
}
transpose
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
Matrix cross multiplication
#include <stdio.h>
int main() {
    int r1 = 2, c1 = 3; 
    int r2 = 3, c2 = 4; 

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][4] = {{7, 8, 9, 1}, {2, 3, 4, 5}, {6, 7, 8, 9}};
    int res[2][4]; 
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0; 
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
