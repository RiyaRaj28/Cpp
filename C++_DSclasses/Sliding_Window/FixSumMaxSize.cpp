#include <iostream>
using namespace std; 

int main(){

    int arr[10] = {3,3,2,3,1,1,2,1,1,1};  
    int maxsum = 6; 
    int n = sizeof(arr)/sizeof(arr[0]);   
    int k = 3;
    
    int i=0, j=1, sum=0, size=0;

    while(i<j)
    {
        sum = sum + arr[i]; 
        // cout<<sum<<"\n"; 

        if(sum<maxsum) {
            sum = sum + arr[j];
             j++; 
        }


        if(sum>=maxsum)   {
        sum = sum - arr[i];
           i++; 
        }

    //     while(sum>maxsum){
    //         sum = sum-arr[i];
    //         i++; 
    //     }

        size = max(size, j-i); 
   
    
    }

    cout<<size; 
    return 0; 

} 