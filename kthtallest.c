#include <stdio.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    qsort(a,n,sizeof(int),cmp);
    printf("%d",a[k-1]);
    return 0;
}
