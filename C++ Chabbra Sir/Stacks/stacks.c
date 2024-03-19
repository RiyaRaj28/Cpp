#include <stdio.h>
#define MAX 100

int stack[MAX]; 
int top = -1; 

void push(int val)
{
    if(top>=MAX-1)
    {
        printf("Stack is already full!");
    }
    else
    {
        top++;
        stack[top] = val; 
    }
}

int pop()
{
    if(top=-1)
    {
        return -100; 
    }
    else 
    {
        int val = stack[top];
        top--;
        return val; 
    }
}

void isFull()
{
  if(top==MAX-1)
  {
    printf("Stack is already full!");
  }
  else 
  {
    printf("Stack is not yet full.");
  }
}

void isEmpty()
{
  if(top==-1)
  {
    printf("Stack is empty!");
  }
  else
  {
    printf("Stack is not empty."); 
  }
}

int decimalToBin(int n)
{
  while(n>0)
  {
    push(n%2);
    n = n/2;
  }

  while(top != -1)
  {
    printf("%d", pop()); 
  }
  return 0; 



}

int main()
{
    int choice, val, i; 

    // do
    // {
    //     printf("Enter 1 : push, 2 : pop, 3 : display stack, 4 : exit : "); 
    //     scanf("%d", &choice); 

    //     switch(choice)
    //     {
    //         case 1 :
    //           printf("Enter value : ");
    //           scanf("%d", &val);
    //           push(val); 
    //         break;

    //         case 2:
    //           pop();
    //           printf("%d\n", val); 
    //         break; 

    //         case 3:
    //           for(i=top; i>=0; i--)
    //           {
    //             printf("%d\n", stack[i]); 
    //           }
    //         break;

    //         case 4:
    //           printf("Exiting...");
    //         break; 

    //         default:
    //           printf("Enter correct choice!");
    //     }
    // }while(choice!=4);

    int n;
    printf("Enter number :");
    scanf("%d", &n);

    decimalToBin(n); 



    return 0; 
}





























