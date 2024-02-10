#include <stdio.h>
#define MAX 100
#include <string.h>

char stack[MAX]; 
char stack2[MAX]; 
int top = -1; 

void push(char *val)
{
    if(top>=MAX-1)
    {
        printf("Stack is already full!");
    }
    else
    {
        top++;
        stack[top] = *val; 
    }
}

char pop(char stack[])
{
    if(top==-1)
    {
        return '\0'; 
    }
    else 
    {
        char val = stack[top];
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

int main()
{
    char word[50];
    printf("Enter word : ");  

    //   for(int i=0; i<n; i++)
    // {
    //      printf("%c", word[i]);

    gets(word); 
    puts(word);

    int n = strlen(word);


    for(int i=0; i<n; i++)
    {
      push(&word[i]); 
    }

    for(int i=0; i<n; i++)
    {
      stack2[i] = pop(stack[i]); 
    }

    for(int i=0; i<n; i++)
    {
      stack2[i] = stack[i]; 
    }




    return 0; 
}