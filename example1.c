#include <stdio.h>
#include <stdlib.h>
//print mosalas n bodi

int main()
{
    int n=0;
    printf("enter n:\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
