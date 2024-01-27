#include <iostream>
using namespace std;

//insertion sort
//assume the first element to be sorted. From the next element onwards, check if it is smaller that the prev element. If so, swap. 

    int main()
    {
        int arr[6] = {12,8,5,17,21,4};
        int i, j, n=6;

        // while(n>1){
        //     for(int i = 0; i<n-1; i++)
        //     {
        //         if(arr[i]> arr[i+1])
        //         {
        //             int temp = arr[i];
        //             arr[i] = arr[i+1];
        //             arr[i+1] = temp;
        //         }
        //         n = n-1;
        //     }
        // }

        for(int i =0; i< n-1; i++){
            for(int i=0; i<n-1; i++){
                if(arr[i]>arr[i+1]){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }

         for(int i = 0; i<6; i++)
    {
        cout<<arr[i] <<" "; 
    }
        return 0;
    }






    
