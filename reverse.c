#include <stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    char str[num+1];
    int i;
    scanf("\n%[^\n]s",str);
    
    int j=strlen(str)-1;
    for(i=0;i<j;i++){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
    printf("%s",str);    
    return 0;
}
