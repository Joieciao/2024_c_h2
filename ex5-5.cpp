#include <stdio.h>

int main()
{
    int x;
    int 周長,面積;
    printf("please input int x=");
    scanf("%d",&x);
    面積 =  3.14 * x * x;
    周長 =  3.14 * 2 * x;
   
    printf("面積 = %d\n",面積);
    printf("周長 = %d\n",周長);
    return 0;
}
