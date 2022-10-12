#include <stdio.h>

int main()
{    char name[30];
    printf("Enter your name.\n");
    gets(name);      // using gets function for easily print the blanks and string here 
    printf("\"Hello,%s\"",name);

    return 0;
}