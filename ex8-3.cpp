#include <iostream>
void print_array(int a[]){
    int i;
    for(i=0;i<3;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
int main()
{
    int i,a[3];
    
    for(i=0;i<3;i++){
        a[i]=i+7;
    }
    for(i=0;i<3;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}