//we make a prefix sum array where we store the sum of all the previous indexes from a given index. Then we subtract two given arrays to get the sum of a range.


#include <iostream>
using namespace std; 

int main(){
    int n;

    cout<<"Enter size of array: ";
    cin>>n; 

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<"["<<i+1<<"]:";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
        cout<<"\n";
    
    //prefix sum array 

    int psum_arr[n];
    for(int i=0; i<n; i++){
        if(i==0){
            psum_arr[i] = arr[i]; 
        }
        else{
            psum_arr[i] = psum_arr[i-1] + arr[i]; 
        }
    }

      for(int i=0; i<n; i++){
        cout<<psum_arr[i]<<" ";
    }

    cout<<"\n"; 

    //calculate sum between two index 
    int stidx, endidx, ans; 

    cout<<"Enter starting index to calculate sum within a range :";
    cin>> stidx; 
    cout<<"Enter ending index to calculate sum within a range :";
    cin>> endidx; 

    if(stidx==0){
        ans = psum_arr[endidx]; 
    }
    else{
    ans = psum_arr[endidx] - psum_arr[stidx-1]; 
    }

    cout<<"Answer is:"<<ans;  

    return 0;
}


