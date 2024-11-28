我的寫法
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



老師的寫法
#include <iostream>

int main()
{
    int r;
    printf("please input 圓半徑:");
    scanf("%d",&r);
    
    if(r>=0){
        printf("圓的面積 = %f",3.14*r*r);
        printf("圓的周長 = %f",2*3.14*r);
        
    }else{
        printf("r < 0 is wrong");
    }
    
    
    return 0;
}
