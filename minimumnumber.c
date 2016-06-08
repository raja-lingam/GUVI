#include <stdio.h>
int cmp(const void *a,const void *b){
    return (*(char*)a)-(*(char*)b);
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int l=strlen(str),k,firstindex,i;
    scanf("%d",&k);
    qsort(str,l,sizeof(char),cmp);
    for(i=0;i<l-k;i++){
        if(str[i]!='0'){
            firstindex=i;
            break;
        }
    }
    if(str[0]=='0'){
        str[0]=str[firstindex];
        str[firstindex]='0';
    }
    for(i=0;i<l-k-1;i++){
        printf("%c",str[i]);
    }
    return 0;
}
