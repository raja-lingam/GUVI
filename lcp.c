#include <stdio.h>

int main()
{
    char str[100][100];
    int n,i,min=1000001,j,index,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("\n%[^\n]s",str[i]);
        int l=strlen(str[i]);
        if(l<min){
            min=l;
        }
    }
    for(i=0;i<min;i++){
        index=i;
        char c=str[0][i];
        for(j=0;j<n;j++){
            if(str[j][i]!=c){
                index=i;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        
    }
    if(flag!=1){
        for(i=0;i<=index;i++){
            printf("%c",str[0][i]);
        }
    }
    else{
        for(i=0;i<index;i++){
            printf("%c",str[0][i]);
        }
    }
    return 0;
}
