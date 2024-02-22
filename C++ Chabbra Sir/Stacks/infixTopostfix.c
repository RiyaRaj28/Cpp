#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100

char stack[100];
int top = -1; 

int isEmpty()
{
    if(top==-1){
        return -100; 
    }
}

int isFull()
{
    if(top==MAX-1){
        return -200; 
    }
}

int push(int val)
{
    if(isFull()==-200)
    {
        printf("Stack is full!");
    }
    else 
    {
        top++;
        stack[top] = val; 
    }
}

int pop()
{
    int check = isEmpty();
    if(check==-100)
    {
        printf("Stack is empty!");
    }
    else
    {
        int val = stack[top];
        top--;
        return val;
    }
}

int priority(char op)
{
    switch(op)
    {
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
        case '^':                                                        
        return 3;
        default:
        return 0; 
    }
}

void infixTopostfix(char infix[], char postfix[])
{
    int k=0, i=0, x;
    int len = sizeof(infix)/sizeof(infix[i]); 
    for(i=0, i<len, i++)
    {
        //operand
        if((int)infix[i] < (int)'9' && (int)infix[i]>(int)'0')
        {
            postfix[k] = infix[i]; 
            k++;
        }

        else if(infix[i]=='(')
        {
            push(infix[i]); 
        }
        else if(infix[i]==')')
        {
            while((x = pop())!='(')
            { 
                postfix[k++] = x; 
            }
        }
        else
        {
            while(priority(stack[top])>=priority(infix[i]))
            {
                postfix[k] = infix[i];
                k++;
            }

            while(priority(stack[top])<priority(infix[i]))
            {
                postfix[k] = infix[i];
                k++;
            }

        }
