#include <stdio.h>

int main()
{
    int num,sum=0,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("sum- %d",sum);
    return 0;
}