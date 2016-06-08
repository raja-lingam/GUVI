#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,sum,flag=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        int key=abs(sum-a[i]);
        for(j=i+1;j<n;j++){
            if(a[j]==key){
                printf("%d %d",a[i],abs(sum-a[i]));
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag!=1){
        printf("Not found");
    }
    return 0;
}
