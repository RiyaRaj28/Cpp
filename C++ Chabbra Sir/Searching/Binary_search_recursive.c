#include <stdio.h>

int BinSearch(int arr[50], int start, int end, int target)
{
    int mid, status; 
    if(start<=end)
    {
        mid = (start+end)/2;

        if(arr[mid]==target) return mid; 

        else if (arr[mid]>target)
        {
            status = BinSearch(arr, start, mid-1, target);
            return status; 
        }

        else
        {
            status = BinSearch(arr, mid+1, end, target);
            return status; 
        }
    }
    else
    {
        return -1; 
    }
}



int main()
{

     int arr[6] = {4,5,6,7,8,9};
     int result = BinSearch(arr, 0, 5, 8);

     printf("%d", result); 

     return 0;
}