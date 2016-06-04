#include <stdio.h>
#include<string.h>
int main()
{
    int length,i,j;
    scanf("%d",&length);
    char str[length+1];
    scanf("\n%[^\n]s",str);
    for(i=0;str[i];i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            for(j=i+1;str[j];j++){
                str[j-1]=str[j];
            }
            str[j-1]='\0';
        }
       
    }
    length=strlen(str);
    j=length-1;
    for(i=0;i<j;i++){
        char tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
        j--;
    }
     printf("%s\n",str);
    return 0;
}
