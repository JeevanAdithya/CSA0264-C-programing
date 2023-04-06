Question-1
 #include <stdio.h>

int main() {
   int intArr[5] = {12, 56, 34, 78, 100};
   int largest = intArr[0];
   
   for(int i=1; i<5; i++) {
      if(intArr[i] > largest) {
         largest = intArr[i];
      }
   }
   
   printf("The largest element of the array is: %d", largest);
  
return 0;
} 
  
Question-2
  #include <stdio.h>

int main()
{
    int arr[100], n, i, max1, max2;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the first largest element in the array
    max1 = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    // Find the second largest element in the array
    max2 = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] != max1 && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    // Print the results
    printf("The FIRST LARGEST = %d\n", max1);
    printf("THE SECOND LARGEST = %d\n", max2);

    return 0;

  
Question-3
  #include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
  
Question-4
 #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is %d.\n", vowels);

    return 0;
} 
  
Question-5
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < size; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
            else {
                j++;
            }
        }
    }

    printf("Resultant Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
  
Question-6
  #include <stdio.h>

int main()
{
    int arr[100], even[100], odd[100];
    int i, n, even_count = 0, odd_count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)  // checking even numbers
        {
            even[even_count] = arr[i];
            even_count++;
        }
        else // checking odd numbers
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("\nEven numbers in array: ");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers in array: ");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
  
Question-7
  #include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // reverse the array
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // check if array is palindrome
    int isPalindrome = 1;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("\nArray is palindrome.");
    } else {
        printf("\nArray is not palindrome.");
    }
    return 0;
}
  
Question-8
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency count to -1
    }

    // Count the frequency of each element
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    // Display the frequency of each element
    printf("\nFrequency of each element in the array: \n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}  
  
Question-9
  #include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, j, temp, size;

    // Input size of the array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input elements in the array
    printf("Enter elements in the array:\n");
    for(i=0; i<size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] < arr[j])
            {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print array in descending order
    printf("\nElements of array in descending order:\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
  
Question-10
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minJumps(int arr[], int n)
{
    if (n <= 1) {
        return 0;
    }

    if (arr[0] == 0) {
        return -1;
    }

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps;
        }

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        steps--;

        if (steps == 0) {
            jumps++;

            if (i >= maxReach) {
                return -1;
            }

            steps = maxReach - i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number of jumps to reach end is %d\n", minJumps(arr, n));

    return 0;
}
