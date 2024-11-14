#include <stdio.h>

int main()
{
    int x,y;
    
    printf("please input int x=");
    scanf("%d",&x);
    
    switch(x ){
        case 0:
        printf("sunday \n");
        break;
        case 1:
        printf("monday \n");
        break;
        case 2:
        printf("tuesday \n");
        break;
        case 3:
        printf("wednesday \n");
        break;
        case 4:
        printf("thursday \n");
        break;
        case 5:
        printf("friday \n");
        break;
        case 6:
        printf("saturday \n");
        break;
        default:
        printf("please input 1~7 number \n");
        break;
    }
    
    //(x < 18) ? printf("Good morning.") : printf("Good evening.");
    return 0;
}
