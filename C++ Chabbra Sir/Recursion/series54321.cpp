
#include <stdio.h>

int revCount(int n)
{
    int result;
    if(n==1 || n==0)
    {
        printf("%d", n);
        result = 1;
    }

    else
    {
        printf("%d", n); 
        result = revCount(n-1); 
    }
    
}

int main()
{
    int n; 
    printf("Enter number to count backwards from : ");
    scanf("%d", &n);

    // int rev = revCount(n);

    printf("Rev count is :");
    revCount(n); 


    return 0; 
    
}