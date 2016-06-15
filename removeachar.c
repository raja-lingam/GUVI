#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int j=strlen(str)-1,i;
    for(i=0;i<j;i++){
        if(str[i]!=str[j]){
            if(str[i]==str[j-1]){
                printf("%c",str[j]);
            }
            else if(str[j]==str[i+1]){
                printf("%c",str[i]);
            }
            else{
                printf("%c",str[j]);
            }
        }
        j--;
    }
    return 0;
}
