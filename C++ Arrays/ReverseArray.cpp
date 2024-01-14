#include <iostream>
using namespace std; 

int main(){
    int n, temp;

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

    int i = 0;

    while(i<=n/2){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        i++;
    }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}