#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100];

    printf("Enter sentence :");
    gets(sentence);
    puts(sentence);

    int length = strlen(sentence);
    printf("%d", length); 
    int newsenten[100]; 

    int i=0; 

    while(i<length)
    {
        int count = i; 
        while(sentence[i]!=" ")
        {
            count++; 
            printf("%d", count); 
        }

        for(int j=length-count; j<=length-i; j++)
        {
            newsenten[j] = sentence[i];
            i++;
        }

        i++; 

    }

    for(int i=0; i<length; i++)
    {
        printf("%c", newsenten[i]); 
    } 



    return 0;
}