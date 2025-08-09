#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int size ;
    int top ;
    char *arr ;
};

int main(){
    char * func = "x-y/z-k*d" ;
    printf("%s" , infix_to_postfix(func)) ;
return 0 ;
}