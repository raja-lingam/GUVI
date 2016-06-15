#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int j=strlen(str)-1,i,flag=0;
    for(i=0;i<j;i++){
        if(str[i]!=str[j]){
            if(flag!=1){
                if(str[i]==str[j-1]){
                    printf("%c",str[j]);
                    flag=1;
                }
                else if(str[j]==str[i+1]){
                    printf("%c",str[i]);
                    flag=1;
                }
                else{
                    printf("%c",str[j]);
                    flag=1;
                }
            }
            j--;
            else{
                printf("cannot be converted\n");
            }
        }
    }
    return 0;
}
