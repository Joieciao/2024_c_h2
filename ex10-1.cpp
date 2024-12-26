#include <stdio.h>

int main()
{
    char greetings[] = "Hello World!";
    
    printf("%s\n", greetings);
    
    greetings[0] = 'J';
    
    printf("%s\n", greetings);
    
    greetings[4] = '4';
    
    printf("%s\n", greetings);
    
    return 0;
}
