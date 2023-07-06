//this program is for digits invertion of number 0-9999. eg. 1234>>4321

#define _CRT_SECURE_NO_WARNINGS.
#include <stdio.h>
#include <string.h>

main(){
    int i; //index no. of num
    char num[5];

        printf("enter number(0-9999): ");
        scanf("%s", &num);
    if(strlen(num)>4||strlen(num)<1||num[0]=='-'){ //for checking if number is in '0-9999' or not.
        printf("This number isn't in range of 0-9999, pls try again");
    }
    else{
        for(i=4; i>=0; i--){
        printf("%c", num[i]);
        }
    }
}