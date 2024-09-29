#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int size ;
    int top ;
    char *arr ;
};
int isoperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'|| ch=='%')
        return 1 ;
    else
        return 0 ;
}

int preference(char ch){
    if(ch == '*' || ch == '/')
        return 2 ;
    else if(ch == '+' || ch == '-')
        return 1 ;
    else 
        return 0 ;
}


char *infix_to_postfix(char * func){

    struct stack * op = (struct stack *) malloc(sizeof(struct stack)) ;
    op->size = 50 ;
    op -> top = -1 ;
    op->arr = (char *) malloc(op->size * sizeof(char)) ;
    int i = 0 ; // for infix count
    int j = 0 ; // for postfix count
    char * postfix = (char *) malloc((strlen(func)+1) * sizeof(char) ) ;

    while(func[i] != '\0'){
        if(!isoperator(func[i])){
            postfix[j] = func[i] ;
            i++ ;
            j++ ;
        }

        else{
            if(preference(func[i]) > preference((op->arr)[op->top])){
                (op->top)++ ;
                (op->arr)[op->top]=func[i] ;
                i++ ;
            }

            else{
                postfix[j] = (op->arr)[op->top] ;
                op->top -- ;
                j++ ;
            }

        }
    }

    while(op->top >=0){
        postfix[j] = (op->arr)[op->top] ;
        op->top-- ;
        j++ ;
    }

    postfix[j] = '\0' ;
    return postfix ;
}



int main(){
    char * func = "x-y/z-k*d" ;
    printf("%s" , infix_to_postfix(func)) ;

return 0 ;
}