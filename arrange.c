#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(char*)b)-(*(char*)a);
}
int main()
{
    int n;
    scanf("%d",&n);
    char str[2*n];
    scanf("\n%[^\n]s",str);
    qsort(str,2*n,sizeof(char),cmp);
    printf("%s",str);
    return 0;
}
