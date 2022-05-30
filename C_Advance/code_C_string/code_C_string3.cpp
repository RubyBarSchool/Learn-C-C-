#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
    char *name;
    name = (char *) malloc (100*sizeof(char));
 
    printf("What your name? ");
    gets(name);
 
    printf("Oh, Hello %s\n", name);
 
    return 0;
}
