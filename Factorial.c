#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(){
    
    long int n;
    long int sum = 1;
    int fac = 1;

    printf("Enter number: ");
    scanf("%ld", &n);

    while(fac<=n){
        sum = sum*fac;
        fac = fac+1;
    }

    printf("%ld", sum);
}