/*Write a program to perform following operation string operations with help of string
manipulation functions.(Using switch case statement)
a. Find the length
b. Compare two string
c. Copy
d. Concatenation
e. Reverse */

#include <stdio.h>
#include <string.h>
char *strrev();

int main()
{
    int choice;
    char str1[10], str2[10];
    menu:
    printf("\n\n 1. find a lenght\n 2. Compare Two String\n 3. copy\n 4. Concatenation\n 5. reverse\n");
    printf("Select Your Choice: ");
    scanf("%d", &choice);

    printf("\nstring1 value: ");
    scanf("%s", str1);

    printf("\nstring2 value: ");
    scanf("%s", str2);

    switch (choice)
    {
    case 1:
        printf("\t Lenght of string1 is %ld", strlen(str1));
        printf("\t Lenght of string2 is %ld", strlen(str2));
        break;
    case 2:
        choice = strcmp(str1, str2);
        if (choice == 0)
        {
            printf("str1 and str2 are equal\n");
        }
        else if (choice > 0)
        {
            printf("The first non-matching character in str1 is greather than that of str2\n");
        }
        else
        {
            printf("The first non-matching character in str2 is greather than that of str1\n");
        }
        break;

    case 3:
        printf("coping string 1 to string 2\n");
        strcopy(str2, str1);
        printf("string 1 vlaue: %s\n", str1);
        printf("string 2 vlaue: %s\n", str2);
        break;
    case 4:
        strcat(str1, str2);
        printf("Output: %s\n", str1);
        break;

    case 5:
        printf("String1 reverse is %s\n", strrev(str1));
        printf("String2 reverse is %s\n", strrev(str2));

    default:
        printf("Please enter valid value\n");
        break;
    }

    menu2:
    printf("\n[0] exit, [1] back to the menu\n choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        /* code */
        goto menu;
    }
    else if (choice == 0)
    {
        /* code */
        printf("Exiting Program.....\n");
    }
    else
    {
        printf("Enter Valid Value\n");
        goto menu2;
    }


    char *p1, *p2;

    if (!str1 || !str2)
    {
    /* code */
    return str;
    }
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
    /* code */
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
    }
    return str;
}