#include<stdio.h>
int main()
{
    char q;
    printf("This is my First Interactive C Program\n");
    printf("Enter C to close or any button to continue\n");
    
    scanf(" %c", &q);

    while(1)
    {
        if (q == 'C')
    {
        printf("Ok the program is closed bye\n");
        break;
    }
    
    printf("Welcome to Codemir\n");

    char name[30],fname[30];
    printf("Enter your name ");
    scanf(" %s", name);
    printf("Enter your father's name ");
    scanf(" %s", fname);

    printf("Welcome %s,son of %s\n",name,fname);
    printf("You know what you seek\n");
    printf("The stone of coding enlightment\nIt demands a SACRIFICE\n");
    printf("Are you willing to do have it at the cost of time\n");
    
    return 0;
    }
}