#include <stdio.h>

int main()
{
    int x,y;
    
    printf("please input int x=");
    scanf("%d",&x);
    printf("please input int y=");
    scanf("%d",&y);
    if (x >y){
        printf("x > y\n");
    }else if (x <y){
        printf("x < y \n");
    }else {
        printf("x == y \n");
    }
    
    (x < 18) ? printf("Good morning.") : printf("Good evening.");
    return 0;
}
