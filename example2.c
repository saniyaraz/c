#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,temp,state=0;
    printf("enter n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        temp=n/2;
        for(int j=0;j<n-temp-i-1;j++)
            printf(" ");
        for(int m=0;m<i*2+1;m++){
            printf("*");
            if(m==n-1){
                state=1;
                break;
            }
        }
        if(state==1)
            break;
        for(int k=temp+i;k<n;k++)
            printf(" ");
        printf("\n");

    }
    return 0;
}
