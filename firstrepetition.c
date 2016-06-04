#include <stdio.h>
#include<string.h>
int main()
{
    int num,i,max=0,min=1000001;
    scanf("%d",&num);
    int a[num+1];
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
        min=(min<a[i])?min:a[i];
        max=(max>a[i])?max:a[i];
        
    }
    int hash[max+1];
    for(i=min;i<num;i++){
        hash[i]=0;
    }
    for(i=0;i<num;i++){
         hash[a[i]]++;
        if(hash[a[i]]>1){
            printf("%d",a[i]);
            return 0;
        }
    }
    return 0;
}
