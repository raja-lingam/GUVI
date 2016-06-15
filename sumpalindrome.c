#include <stdio.h>
#include<strings.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int sum=0,i;
    for(i=0;str[i];i++){
        sum=sum+(str[i]-48);
    }
    char value[10];
    sprintf(value,"%d",sum);
    int len=strlen(value);
    int j=len-1;
    for(i=0;i<j;i++){
        if(value[i]!=value[j]){
            break;
        }
    }
    if(value[i]!=value[j]){
        printf("Its not a palindrome\n");
    }
    else{
        printf("Its a palindrome\n");
    }
    return 0;
}
