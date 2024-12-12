#include <iostream>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int main()
{
    int a,b;
    char c;
    printf("please input + or - or * or /");
    scanf("%c",&c);
    printf("please input int a =");
    scanf("%d",&a);
    printf("please input int b =");
    scanf("%d",&b);
    
    switch(c){
    case '+':
    printf("a+b = %d\n",add(a,b));
    break;
    case '-':
    printf("a-b = %d\n",sub(a,b));
    break;
    case '*':
    printf("a*b = %d\n",mul(a,b));
    break;
    case '/':
    printf("a/b = %d\n",divi(a,b));
    break;
    default:
    printf("please input + or - or * or /\n");
    break;
    }
    return 0;
}
