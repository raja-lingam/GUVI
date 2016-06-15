#include <stdio.h>
#include<math.h>
int main()
{
    int n,d,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    scanf("%d",&d);
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==d){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
