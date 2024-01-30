#include <iostream>
using namespace std; 

int main(){
    int arr[] = {8,3,4,6,-3,2,10,8};
    int n = sizeof(arr)/sizeof(arr[0]); 

    int i=0, j=1, sum = arr[0], size = n+1, target=10;

    while(i<n)
    {

        if(j<n || (sum>target || sum==target))
        {
            size = min(size, j-i);
            i=i+1;
            j=i+1;
            sum = arr[i];
        }
        else 
        {
            sum = sum+arr[j];
            j++;
        }
    }

    if(size==n+1){
        cout<<"Sub array not present";
    }else{
        cout<<size; 
    
    }
    return 0; 

}
