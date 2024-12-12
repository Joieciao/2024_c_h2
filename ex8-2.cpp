#include <iostream>
int min(int a, int b){
    int v_min = 0;
    if(a > b){
        v_min = b;
    }else{
        v_min = a;
    }
    return v_min;
}
int max(int a, int b){
    int v_max = 0;
    if(a < b){
        v_max = b;
    }else{
        v_max = a;
    }
    return v_max;
}
int main()
{
    int a,b;
    printf("please input int a:");
    scanf("%d",&a);
    printf("please input int b:");
    scanf("%d",&b);
    printf("min value = %d\n",min(a,b));
    printf("max value = %d",max(a,b));
    return 0;
}
