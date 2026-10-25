#include <stdio.h>

int main()
 {int n;
printf("Enter the value for n: ");
scanf("%d", &n);

if(n>0)
{
    if(n%2==0 && n%5==0)
    {
        printf("n is positive divisible by both 2 nadd 5");
    }
    else
    printf("n is positive");
}
else if(n<0)
{
    printf("Negative");
}
else
{
    printf("zaro");
 }
return 0;
}
