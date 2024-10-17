//1.D ARRAY
#include<stdio.h>

int main() {
    // First array declaration and access
    int marks1[5] = {50, 60, 70, 80, 2};
    printf("Element of index zero is %d\n", marks1[0]);
    printf("Element of index one is %d\n", marks1[1]);

    // Second array declaration
    int marks2[5] = {50, 60, 70, 80, 3};

    // Using a for loop to print array elements
    int i;
    for (i = 0; i < 5; i++) {
        printf("marks2[%d] = %d\n", i, marks2[i]);
    }

    return 0;
}