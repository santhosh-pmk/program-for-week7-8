#include <stdio.h>
float avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum =sum+arr[i];
    }
    return sum / size;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    float average = avg(arr, n);
    printf("Average of the array elements: %f", average);
    return 0;
}