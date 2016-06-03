Solution 1:

#include <stdio.h>

int main()
{
    int num,j;
    scanf("%d",&num);
    int arr[num+1],i;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    j=num-k-1;
    for(i=0;i<j;i++){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        j--;
    }
    printf("\n");
    j=num-1;
    for(i=k+1;i<j;i++){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        j--;
    }
    j=num-1;
    for(i=0;i<j;i++){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        j--;
    }
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
