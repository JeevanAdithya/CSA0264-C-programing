question-1:
#include <stdio.h>

int main() {
    int intArr[5] = {12, 56, 34, 78, 100};
    int largest = intArr[0]; // assume the first element is the largest

    for (int i = 1; i < 5; i++) {
        if (intArr[i] > largest) {
            largest = intArr[i];
        }
    }

    printf("The largest element is %d\n", largest);

    return 0;
}

Question-2:
#include <stdio.h>

int main() {
    int n, i, max1, max2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];
    max2 = arr[1];

    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The FIRST LARGEST = %d\n", max1);
    printf("THE SECOND LARGEST = %d\n", max2);

    return 0;
}

Question-3
#include <stdio.h>

int main() {
    int n, i, j, temp;
    float sum = 0.0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in descending order: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Second largest element: %d\n", arr[1]);
    printf("Second smallest element: %d\n", arr[n-2]);
    sum = arr[1] + arr[n-2];
    avg = sum / 2;
    printf("Average of the second largest and second smallest element: %.2f\n", avg);
    for(i=0; i<n; i++) {
        if(avg == arr[i]) {
            printf("The average is present in the array.\n");
            break;
        }
    }
    if(i == n) {
        printf("The average is not present in the array.\n");
    }
    return 0;
}

Question-4
#include <stdio.h>

int main() {
    int array[] = {10, 15, 90, 200, 110};
    int n = sizeof(array) / sizeof(array[0]);
    int max_diff = array[1] - array[0];
    int min_element = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] - min_element > max_diff) {
            max_diff = array[i] - min_element;
        }
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    printf("Maximum difference is %d\n", max_diff);
    return 0;
}

Question-5
  
 #include <stdio.h>

int main() {
    int arr[100], n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // remove duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Resultant array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

Question-6
 #include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, j = 0, k = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        } else {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even elements: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

Question-7
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Frequency of all elements of array:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}  
 
Question-8
  #include <stdio.h>

void descending_sort(int arr[], int n);

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    descending_sort(arr, n);

    printf("The numbers arranged in descending order are given below:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void descending_sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

Question-9
#include <stdio.h>

void descending_sort(int arr[], int n);

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    descending_sort(arr, n);

    printf("The numbers arranged in descending order are given below:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void descending_sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

Question-10
  #include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
    if (n <= 1) return 0; // Already at the end or only 1 element in array

    int jumps = 1; // Minimum jumps required to reach end from start
    int farthest = arr[0]; // Farthest index that can be reached from start
    int currEnd = arr[0]; // Current end point of jump

    for (int i = 1; i < n; i++) {
        if (i == n - 1) return jumps; // Reached the end of array

        farthest = (farthest > i + arr[i]) ? farthest : i + arr[i]; // Update farthest index

        if (i == currEnd) { // Need to make another jump
            jumps++;
            currEnd = farthest; // Update current end point of jump
            if (currEnd <= i) return -1; // End point not reachable
        }
    }

    return -1; // End point not reachable
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minJumpsRequired = minJumps(arr, n);
    if (minJumpsRequired == -1) {
        printf("End point is not reachable");
    } else {
        printf("Minimum number of jumps required = %d", minJumpsRequired);
    }
    return 0;
}
