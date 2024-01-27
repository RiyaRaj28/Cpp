#include <iostream>
using namespace std; 

int main(){

    int arr[10] = {1,2,3,4,5,6,7,2,2,3}; 
    int n = 10; 
    int k = 3;
    int maxsum = 0; 

    // //M1 : find sum of 3 consecutive elements, update if you get a greater sum 

    // int maxsum = 0, sum = 0;  
    // for(int i=0; i<n; i++ )
    // {
    //     sum = 0; 
    //     for(int k=0; k<3; k++)
    //     {
    //         sum = arr[i+k] + sum;
    //         maxsum = max(maxsum, sum); 

    //     }
        
    // }


    //sliding window 
    int window_sum = 0; 

    //first find sum of first k elements 
    for(int i=0; i<k; i++)
    {
        window_sum = window_sum + arr[i];  
    }

    //now slide the window, remove (i-k)th element, add ith element where i starts from k
    for(int i=k; i<n; i++)
    {
        // int sum = 0; 
        window_sum = window_sum - arr[i-k] + arr[i]; 
        maxsum = max(maxsum, window_sum); 
    }

    cout<<"The maximum sum is:" << maxsum;

    return 0; 
}