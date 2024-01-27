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

    int sum = 0;    


    //sum of entire array 
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"\n" << sum <<"\n"; 

    //preix sum array 
    int psum_arr[n];
    psum_arr[0] = arr[0]; 
    for(int i=1; i<n; i++)
    {
        psum_arr[i] = psum_arr[i-1] + arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<psum_arr[i]<<" ";
    }

    cout<<"\n"; 

    //to find eqb point
    for(int i=1; i<=n-1; i++)
    {
        if(sum==psum_arr[i])
        {
            cout<<"Equilibrium point is at index :" << i ; 
        }

        sum = sum - arr[i];                 //this prevents the need to make a suffix sum array as it transverses through the array removing elements one by one from the total sum of array 
    }
    
return 0;
}











