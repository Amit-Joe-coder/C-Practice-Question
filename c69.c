//Understanding to create Pointer Function
#include<stdio.h>
int add(int,int );
int sub(int,int);
int pro(int,int);
int div(int,int );
int main()
{
    printf("###WELCOME TO THE CALCULATOR###\n");
    int result,x,y,choice;
    int (*ptr[5])(int,int),i,j;
    printf("Enter 2 value that you want to calculate:");
    scanf("%d %d",&x,&y);
    //printf("Enter Operation You Want To Apply:");
    printf("Enter 0 for addition\n");
    printf("Enter 1 for subtraction\n");
    printf("Enter 2 for multiplication\n");
    printf("Enter 3 for division\n");
    scanf("%d",&choice);
    ptr[0]=add;
    ptr[1]=sub;
    ptr[2]=pro;
    ptr[3]=div;
    result=ptr[choice](x,y);
    printf("Answer of you value is %d",result);
    printf("\n___THANKS VISIT AGAIN___");
}
int add(int x,int y)
{
int num=x+y;
return num;
};
int sub(int x,int y){
    int num=x-y;
    return num;
}
int pro(int x,int y)
{
int num=x*y;
return num;
}
int div(int x,int y)
{
    int num=x / y;
    return num;
}