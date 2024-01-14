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
        cout<<"\n";
    }

    int max = arr[0], smax;

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
    }

    cout<<"Second maximum element is "<<smax <<" and maximum element is "<<max; 

return 0;
}
        