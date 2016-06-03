#include <stdio.h>
int main()
{
    long long int number;
    scanf("%Ld",&number);
    if(number&1){
        printf("Odd\n");
    }
    else{
        printf("Even\n");
    }
    return 0;
}
