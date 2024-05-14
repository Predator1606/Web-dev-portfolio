#include <stdio.h>
#include <stdlib.h>

int main()
{  int num,i;

    printf("enter the number:\n");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(num%i==0)
            printf("%d\n",i);
        i++;
    }
    return 0;
}
