#include <iostream>
using namespace std; 

int main()
{
    int arr[] = {-12,11,-13,-5,6,-7,5,-3,-6};
    int n = sizeof(arr)/sizeof(arr[0]); 

    int temp, i=0, j=0, k; 
    while(j<n)
    {
        if(arr[j]>0)
        {
            j++;
        }

        if(arr[j]<0)
        {
            temp = arr[j];
            for(k=j; k>i; k--)
            {
                arr[k] = arr[k-1];
            }
            arr[i]=temp;
            i++;
            j++;
        }

    }

    for(int l=0; l<n; l++)
    {
        cout<<arr[l]<<" "; 
    }

    return 0; 
}