\\第一種
#include <stdio.h>

int hello(){
    printf("Hello World");
    return 0;
}
int main()
{
    hello();

    return 0;
    
}

\\第二種
#include <iostream>
int hello(){
    printf("Hello World");
    return 0;
}
int main()
{
    hello ();
    hello ();

    return 0;
}

\\第三種
#include <iostream>
void hello (){
    printf("Hello World");
}
int main()
{
    hello ();
    hello ();

    return 0;
}



