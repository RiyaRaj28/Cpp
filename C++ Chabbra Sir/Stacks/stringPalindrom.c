#include <stdio.h>
#define MAX 100
#include <string.h>

char stack[MAX];  
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

char pop()
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

// void isFull()
// {
//   if(top==MAX-1)
//   {
//     printf("Stack is already full!");
//   }
//   else 
//   {
//     printf("Stack is not yet full.");
//   }
// }

// void isEmpty()
// {
//   if(top==-1)
//   {
//     printf("Stack is empty!");
//   }
//   else
//   {
//     printf("Stack is not empty."); 
//   }
// }

int main()
{
    char word[50];
    printf("Enter word : ");  
    int j, flag=1; 

    gets(word); 
    puts(word);

    int n = strlen(word);

    for(int i=0; i<n/2; i++)
    {
      push(&word[i]); 
    }

    if(n%2==0)
    {
      j = n/2;
    }
    else{
      j = n/2 + 1; 
    }

    for(j; j<n; j++)
    {
      if(word[j] != pop())
      {
        flag = 0;
        break; 
      } 
    }

    if(flag)
    {
      printf("Palin");
    }
    else{
      printf("Not palindrome"); 
    }

    return 0; 
}