#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
        printf("Alphabet\n");
    }
    else{
        printf("Not an Alphabet\n");
    }
    return 0;
}
