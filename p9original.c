#include <stdio.h>
#define MAX_SIZE 100
int compare(char * str1, char * str2);

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;
    printf("Enter first string: ");
    scanf("%s", &str1);
    printf("Enter second string: ");
    scanf("%s", &str2);
    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string  %s is smaller than %s", &str1, &str2);
    }
    else
    {
        printf("First string  %s is larger than %s", &str1, &str2);
    }

    return 0;
}

int compare(char * str1, char * str2)
{
    int i = 0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }
    return str1[i] - str2[i]; 
} 
