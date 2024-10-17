#include<stdio.h>

int main () {
    int i, j;
    
    // Declare and initialize a 2D array
    int marks[2][3] = {
        {40, 50, 60},
        {80, 30, 92}
    };

    // Use nested loops to print each element
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}