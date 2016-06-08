#include <stdio.h>

int main()
{
    int number,i,product;
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        if(number%i==0){
            int temp=i;
            product=i;
            while(temp!=0){
                product=product*(temp%10);
                temp=temp/10;
            }
            if(product==number){
                printf("%d ",i);
            }
        }
    }
    return 0;
}
