#include <stdio.h>
int main()
{
    long long int number;
    scanf("%Ld",&number);
    if(number>0){
        printf("Positive\n");
    }
    else if(number<0){
        printf("Negative\n");
    }
    else{
        printf("Zero\n");
    }
    return 0;
}
