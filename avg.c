#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,count=0,temp=0,temp1=0;
    float avg;
    while(1){
    printf("enter number: \n");
    scanf("%d",&n);
    if(n==0)
        break;
    sum = sum + n;
    count++;
    if(n>temp){
       temp1=temp;
       temp=n;
    }
    }
    avg=sum/count;
    printf("avg is : %.2f\n",avg);
    printf("second biggest number is: %d",temp1);
    return 0;
}
