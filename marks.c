#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void calculateGrades(int marks[], int n) {
    sortArray(marks, n);
    
    int gradeA = n / 5;  
    int gradeB = 2 * gradeA;  
    int gradeC = 2 * gradeA;  
    int gradeD = n - gradeA - gradeB - gradeC;  
    
    int boundaryA = marks[gradeA - 1]; 
    int boundaryB = marks[gradeA + gradeB - 1];  
    int boundaryC = marks[gradeA + gradeB + gradeC - 1];
    
    printf("%d\n", gradeA);
    printf("%d\n", gradeB);
    printf("%d\n", gradeC);
    printf("%d\n", gradeD);
    printf("%d\n", boundaryA);
    printf("%d\n", boundaryB);
    printf("%d\n", boundaryC);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int marks[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    calculateGrades(marks, n);
    
    return 0;
}
