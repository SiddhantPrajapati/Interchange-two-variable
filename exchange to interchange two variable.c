/* WAP to exchange to interchange the value of two variables say x and y illustrate the use of this function in a calling function */
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter first variable:");
    scanf("%d",&a);
    printf("\n enter second variable:");
    scanf("%d",&b);
    printf("\n after swapping \n");
    swap(&a,&b);
    printf("\n first variable:%d",a);
    printf("\n second variable:%d",b);
}
void swap(int *x,int *y)
{
    int ans;
    ans=*x;
    *x=*y;
    *y=ans;
}
