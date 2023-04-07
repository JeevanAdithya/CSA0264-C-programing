q.1;
#include<stdio.h>
struct employee
{
     int e;
     char name[20];
     char designation[20];
     char dept[20];
     int sal;
};
int main()
{
     struct employee a;
     printf("Enter Employee Details:\n");
     printf("-------------------------------\n");
     printf("Enter Employee-Id : ");
     scanf("%d",&a.e);
     printf("Enter Name        : ");
     scanf("%s",a.name);
     printf("Enter Designation : ");
     scanf("%s",a.designation);
     printf("Enter Department  : ");
     scanf("%s",a.dept);
     printf("Enter Salary      : ");
     scanf("%d",&a.sal);
     printf("-------------------------------");
     printf("\nEmployee Details: \n---------------------------------\n");
     printf("Employee-Id : %d\n",a.e);
     printf("Name        : %s\n",a.name);
     printf("Designation : %s\n",a.designation);
     printf("Department  : %s\n",a.dept);
     printf("Salary      : %d\n",a.sal);
     return 0;
}

q-2;

#include<stdio.h>
struct player
{
     char name[20];
     int runs;
};
int main()
{
     int i,s=0;
     struct player a[11]; //a[11] - no. of players
     printf("Enter Name of Player Runs Scored \n");
     printf("---------------------------------------------\n\t");
     for(i=0;i<=10;i++)
     {
          scanf("%s",a[i].name);
          scanf("%d",&a[i].runs);
          printf("\t");
     }
     for(i=0;i<=10;i++)
          s=s+a[i].runs;
     printf("\n---------------------------------------------\n");
     printf("Total Runs Scored by Team: %d",s);
     return 0;
}
q-3;

#include<stdio.h>
/Here, we are using nested structure/
struct student
{
     int roll_num;
     char name[20];
     struct Date
     {
          int D;
          int M;
          int Y;
     }bd,ad;
};
int main()
{
     int r;
     struct student a;
     printf("\tEnter Student Details\n");
     printf("----------------------------------------------------\n");
     printf("Enter Roll-Number    : ");
     scanf("%d",&a.roll_num);
     printf("Enter Name      : ");
     scanf("%s",a.name);
     printf("Enter Birth-Date     : ");
     scanf("%d-%d-%d",&a.bd.D,&a.bd.M,&a.bd.Y);
     printf("Enter Admission-Date : ");
     scanf("%d-%d-%d",&a.ad.D,&a.ad.M,&a.ad.Y);
     r=a.ad.Y-a.bd.Y;
     printf("----------------------------------------------------\n");
     printf("\nApproximate Age of Student at the Time of Admission\n");
     printf("----------------------------------------------------\n");
     printf("\t%d Years",r);
     return 0;
}
q-4;
#include<stdio.h>
/* Defining Structre*/
struct bank
{
     int acc_no;
     char name[20];
     int bal;
}b[3];
/*Function to find the details of customer whose balance < 100.*/
void check(struct bank b[],int n) /Passing Array of structure to function/
{
     int i;
     printf("\nCustomer Details whose Balance < 100 Rs. \n");
     printf("----------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          if(b[i].bal<100)
          {
               printf("Account Number : %d\n",b[i].acc_no);
               printf("Name           : %s\n",b[i].name);
               printf("Balance        : %d\n",b[i].bal);
               printf("------------------------------\n");
          }
     }
}
int main()
{
     int i;
     for(i=0;i<3;i++)
     {
          printf("Enter Details of Customer %d\n",i+1);
          printf("------------------------------\n");
          printf("Enter Account Number : ");
          scanf("%d",&b[i].acc_no);
          printf("Enter Name           : ");
          scanf("%s",b[i].name);
          printf("Enter Balance        : ");
          scanf("%d",&b[i].bal);
          printf("------------------------------\n");
     }
     check(b,3);           //call function check
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
#include<stdlib.h>
#include<string.h>
struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("\t\tMENU");
          printf("\n-------------------------------------\n");
          printf("PRESS 1.TO ADD BOOK DETAILS.");
          printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO COUNT NUMBER OF BOOKS.");
          printf("\nPRESS 5.TO EXIT.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("-------------------------------------\n");
                    printf("Add Details of %d Book\n",n);
                    printf("-------------------------------------\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                         printf("-------------------------------------\n");
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name\t  Author Name\tNo. of Pages");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t  %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].no_pages);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    printf("--------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_name);
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    printf("-----------------------------------------\n");
                    break;
               case 5 :
                    exit(0);
          }
     }while(ch != 5);
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

union Data {
    int i;
    float f;
};

int main() {
    union Data data;
    char choice;

    printf("Enter 'i' to input an integer, or 'f' to input a float: ");
    scanf("%c", &choice);

    if (choice == 'i') {
        printf("Enter an integer: ");
        scanf("%d", &data.i);
        printf("You entered: %d\n", data.i);
    } else if (choice == 'f') {
        printf("Enter a float: ");
        scanf("%f", &data.f);
        printf("You entered: %f\n", data.f);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
q.9;
#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;

    printf("Enter the student's name: ");
    scanf("%s", s.name);

    printf("Enter the student's GPA: ");
    scanf("%f", &s.gpa);

    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);

    return 0;
}
q.10;
#include <stdio.h>

#define PI 3.14159265359

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char choice;

    printf("Enter 'c' for circle or 'r' for rectangle: ");
    scanf("%c", &choice);

    if (choice == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        printf("Area of the circle: %.2f\n", PI * s.radius * s.radius);
    } else if (choice == 'r') {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &s.rectangle.length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &s.rectangle.width);
        printf("Area of the rectangle: %.2f\n", s.rectangle.length * s.rectangle.width);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


