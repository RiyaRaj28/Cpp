#include <iostream>
using namespace std;

//insertion sort
//assume the first element to be sorted. From the next element onwards, check if it is smaller that the prev element. If so, swap. 

    int main(){
    int arr[6] = {12,8,5,17,21,4};
    int i, j, curr;
    
    for(int i=1; i<6; i++)
    {
        curr = arr[i], j = i-1;
        for(j; j>=0; j--)
        {
            if(arr[j]>curr)
            {
                arr[j+1] = arr[j];
            }

            else 
            {
                break;
            }

        }
        arr[j+1] = curr;    

    }

     for(int i = 0; i<6; i++)
    {
        cout<<arr[i] <<" "; 
    }

    return 0; 
    
    }