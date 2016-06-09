#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[n][n],d[n][n];
    int row[n],col[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            d[i][j]=a[i][j];
        }
    }
    int k=0,l=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(a[i][j]==0){
                    for(k=0;k<n;k++)
                        d[i][k]=0;
                    for(l=0;l<n;l++)
                        d[l][j]=0;
                }
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
