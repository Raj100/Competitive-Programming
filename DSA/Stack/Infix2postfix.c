#include <limits.h>  
#include <stdio.h>  
#include <stdlib.h>  
#define MAX 20  
  
char stk[20];  
int top = -1;  

  
int isEmpty()  
{  
    return top == -1;  
}  
int isFull()  
{  
    return top == MAX - 1;  
}  
  
char peek()  
{  
    return stk[top];  
}  
  
char pop()  
{  
    if(isEmpty())  
        return -1;  
  
    char ch = stk[top];  
    top--;  
    return(ch);  
}  
  
void push(char oper)  
{  
    if(isFull())  
        printf("Stack Full!!!!");  
     
    else{  
        top++;  
        stk[top] = oper;  
    }  
}  
  
int checkIfOperand(char ch)   
{   
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');   
}   
  
int precedence(char ch)   
{   
    switch (ch)   
    {   
    case '+':   
    case '-':   
        return 1;   
  
    case '*':   
    case '/':   
        return 2;   
  
    case '^':   
        return 3;   
    }   
    return -1;   
}   
  
int covertInfixToPostfix(char* expression)   
{   int ans[10][2];
    int i=0, j=-1;    
    while(expression+i){
        for(int k=0;k<2;k++){

            if (checkIfOperand((expression+i)[k]))   
            *((ans+(++j))[k]) = *((expression+i)[k]);   
  
        else if ((expression+i)[k] == '(')   
            push((expression+i)[k]);   
  
        else if ((expression+i)[k] == ')')   
        {   
            while (!isEmpty() && peek() != '(')   
                (expression+++j)[k] = pop();   
            if (!isEmpty() && peek() != '(')   
                return -1;             
            else  
                pop();   
        }  
        else   
        {   
            while (!isEmpty() && precedence((expression+i)[k]) <= precedence(peek()))   
                (expression+(++j))[k] = pop();   
            push((expression+i)[k]);   
        }   
  
        }
    }
  int k=0;
    while (!isEmpty())   {
        (expression+(++j))[k] = pop();
        if(k==0){
            k=1;
        }   
        else k=0;
    }
  
    expression[++j] = '\0';   
    printf( "%s", expression);   
}   
  
int main()  
{  
    char expression[3][2] = {{'2','3'},{'*','*'},{'5','7'}};   
    covertInfixToPostfix(expression);   
    return 0;   
}  
