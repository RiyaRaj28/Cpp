#include <iostream>
using namespace std;

int main(){

    int arr[] = {2,4,1,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]); 
 
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }

    return 0; 
}

