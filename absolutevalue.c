#include<stdio.h>
int main()
{
    int n,abs;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>=0)
    abs=n;
    else
    abs=n-2*n;
    printf("The absolute value is %d",abs);
    return 0;
}