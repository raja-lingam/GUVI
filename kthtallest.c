#include <stdio.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n,i;
    int a[50];
    for(i=0;i<50;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    qsort(a,50,sizeof(int),cmp);
    printf("%d",a[k-1]);
    return 0;
}
