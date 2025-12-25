#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number n:\n");
    scanf("%d",&n);
    for (int i=n;i<=100;i++){
        //printf("%d\n",i);
        if(i%2==0)
            printf("number %d is even\n",i);
        else
            printf("number %d is odd\n",i);
    }

    return 0;
}
