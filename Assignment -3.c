q.1;
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

q.2;
include <stdio.h>

int isPrime(int n) {
    int i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i)) {
            if (isPrime(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("%d cannot be expressed as the sum of two prime numbers\n", n);
    }
    return 0;
}
q.3;
#include <stdio.h>

int isPrime(int n) {
    int i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i)) {
            if (isPrime(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("%d cannot be expressed as the sum of two prime numbers\n", n);
    }
    return 0;
  q.4;
  #include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}
q.5;
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}; // Initialize frequency array with 0
    int i, maxFreq, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // Count frequency of each character
    for(i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    maxFreq = freq[str[0]];
    for(i = 0; i < len; i++)
    {
        if(freq[str[i]] > maxFreq)
        {
            maxFreq = freq[str[i]];
        }
    }

    // Print highest frequency characters
    printf("Max repeated character in the string = ");
    for(i = 0; i < len; i++)
    {
        if(freq[str[i]] == maxFreq)
        {
            printf("%c ", str[i]);
        }
    }
    printf("\nIt occurs %d times", maxFreq);

    return 0;
}
q.6;
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // Check if both strings have same length
    if (len1 != len2)
    {
        printf("%s and %s are not anagrams.\n", str1, str2);
        return 0;
    }

    // Update frequency of characters in first string
    for (i = 0; i < len1; i++)
    {
        freq1[str1[i] - 'a']++;
    }

    // Update frequency of characters in second string
    for (i = 0; i < len2; i++)
    {
        freq2[str2[i] - 'a']++;
    }

    // Check if both strings have same set of characters
    for (i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("%s and %s are not anagrams.\n", str1, str2);
            return 0;
        }
    }

    printf("%s and %s are anagrams.\n", str1, str2);

    return 0;
}
q.7;
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int sum = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < strlen(str); i++)
    {
        sum += str[i];
    }
    
    printf("Sum of all characters : %d", sum);

    return 0;
}
  q.8;
  #include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int l, int r)
{
    if (l == r)
        printf("%s\n", str);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap((str+l), (str+i));
            permute(str, l+1, r);
            swap((str+l), (str+i)); // backtrack
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str)-1);

    return 0;
}
q.9;
#include <stdio.h>

int main()
{
    int array1[10], array2[10];
    int i, *p1, *p2;

    printf("Input array1 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &array1[i]);

    p1 = array1;
    p2 = array2;

    for (i = 0; i < 10; i++)
        *(p2 + i) = *(p1 + i);

    printf("Array1: ");
    for (i = 0; i < 10; i++)
        printf("%d ", array1[i]);

    printf("\nArray2: ");
    for (i = 0; i < 10; i++)
        printf("%d ", array2[i]);

    return 0;
}
  q.10;
  #include <stdio.h>

void reverse_string(char* str);

int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%s", str);
    reverse_string(str);
    printf("The reverse of the string [%s] is :: %s", str, str);
    return 0;
}

void reverse_string(char* str) {
    char* start = str;
    char* end = str;
    char temp;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

  
  
  
  

