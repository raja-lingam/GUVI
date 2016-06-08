#include <stdio.h>

int main()
{
    int number,i,product;
    scanf("%d",&number);
    int five=0,three=0,one=0;
    if(number>=5)
        five=number/5;
    number=number%5;
    if(number>=3)
        three=number/3;
    number=number%3;
    if(number!=0){
        printf("%d coin of 1\n",number);
    }
    if(three!=0){
        printf("%d coin of 3\n",three);
    }
    if(five!=0){
        printf("%d coin of 5\n",five);
    }
    return 0;
}
