#include <stdio.h>
#include<string.h>
int main()
{
    int length,i,j,flag=0,countdot=0,count_e=0;
    scanf("%d",&length);
    char str[length+1];
    scanf("\n%[^\n]s",str);
    for(i=0;str[i];i++){
       
        if(str[i]=='.'){
            countdot++;
        }
        if(str[i]=='e'){
            count_e++;
            if((str[i-1]<'0'&&str[i-1]>'9')){
                count_e++;
            }
        }
        if(str[i]!='.'&&str[i]!='e'){
            if(!(str[i]>='0'&&str[i]<='9')||str[i]==' '){
           
                flag=1;
               
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        printf("false");
        return 0;
    }
    if(count_e>1){
        printf("false");
        return 0;
    }
    if(countdot>1){
        printf("false");
        return 0;
    }
    printf("true");
    return 0;
}
