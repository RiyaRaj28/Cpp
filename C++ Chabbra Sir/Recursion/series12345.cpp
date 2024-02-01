#include <stdio.h>

int revCount(int n)
{
    // int result;                                                                                    
    if(n>0)
    {
        revCount(n-1);
        printf("%d", n);  
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