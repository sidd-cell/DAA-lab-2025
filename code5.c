#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("give number of terms which should be there in Fibonacci series : ");
    scanf("%d", &n);
    printf("\t%d,%d", a,b);
    for(i=2; i<n; i++)
    {
        c = a + b;
        printf(",%d",c);
        a = b;
        b = c;
    }
    return 0;

}
