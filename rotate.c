#include <stdio.h>

int main()
{
    int n,d,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    scanf("%d",&d);
    j=d-1;
    for(i=0;i<j;i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    j=n-1;
    for(i=d;i<j;i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    j=n-1;
    for(i=0;i<j;i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
