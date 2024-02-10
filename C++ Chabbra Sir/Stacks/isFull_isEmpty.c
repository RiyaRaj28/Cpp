#include <stdio.h>
#define MAX 2

int stack[MAX]; 
int top = -1; 

void isFull()
{
  if(top>=MAX-1)
  {
    printf("Stack overflow!\n");
  }
}

void isEmpty()
{
  if(top<0)
  {
    printf("Stack underflow!\n");
  }
}

void push(int val)
{
   isFull(); 
        top++;
        stack[top] = val; 
    
}

int pop()
{
    isEmpty();
        int val = stack[top];
        top--;
        return val; 
}


int main()
{
    int choice, val, popped, i; 

    do
    {
        printf("Enter 1 : push, 2 : pop, 3 : display stack, 4 : exit : "); 
        scanf("%d", &choice); 

        switch(choice)
        {
            case 1 :
              printf("Enter value : ");
              scanf("%d", &val);
              push(val); 
            break;

            case 2:
              popped = pop();
              printf("%d\n", popped); 
            break; 

            case 3:
              for(i=top; i>=0; i--)
              {
                printf("%d\n", stack[i]); 
              }
            break;

            case 4:
              printf("Exiting...");
            break; 

            default:
              printf("Enter correct choice!");
        }
    }while(choice!=4);

    return 0; 
}