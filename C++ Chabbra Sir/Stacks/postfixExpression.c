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

int postfixexpeval(char postfixexp[], int length)
{
    int i=0, v1, v2, result = 0, x;
    while(i<length)
    {
        switch(postfixexp[i])
        {
            case '+' :
            v1 = pop();
            v2 = pop();
            result = v2+v1;
            push(result);
            break; 

            case '-' :
            v1 = pop();
            v2 = pop();
            result = v2-v1;
            push(result);
            break; 

            case '*' :
            v1 = pop();
            v2 = pop();
            result = v2*v1;
            push(result);
            break; 

            case '/' :
            v1 = pop();
            v2 = pop();
            result = v2/v1;
            push(result);
            break; 

            case '^' :
            v1 = pop();
            v2 = pop();
            result = pow(v2, v1);
            push(result);
            break; 

            default :
            x = (int)postfixexp[i] - (int)'0'; 
            push(x);
        }
        i++;
    }

    result = pop();
    return result; 
}

int main()
{
    char exp[] = "6543*2/+-1+";
    int result = postfixexpeval(exp, 11);
    printf("%d", result);

    return 0; 
}

