#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int unique=0;
    for(i=0;i<n;i++){
        unique=unique^arr[i];
    }
    printf("%d",unique);
    return 0;
}
