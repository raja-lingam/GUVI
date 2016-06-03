#include <stdio.h>

int main()
{
    int num,j;
    scanf("%d",&num);
    int arr[num+1],i,xxor=0;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        xxor=xxor^arr[i];
    }
    printf("%d",xxor);
    return 0;
}
