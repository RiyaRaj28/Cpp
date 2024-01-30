#include <iostream>
using namespace std; 

int main(){
    int arr[] = {1,2,3,-7,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i=0, j=1; 
    
    int sum = arr[0]; 
    while(i<j && j<n)
    {
        if(sum>0)
        {
            sum = sum+arr[j];
            j++; 
        }

        if(sum<0)
        {
            i = j; 
            j = j+1;
            sum = arr[i]; 
        }
    }

    cout<<"Maximum sum is:"<<sum; 
    return 0; 


}
