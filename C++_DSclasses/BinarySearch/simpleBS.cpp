#include <iostream>
using namespace std; 

int main(){
    int n;

    cout<<"Enter size of array: ";
    cin>>n; 

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<"["<<i+1<<"]:";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<"\n";

int target; 
        cout<<"Enter target element: ";
        cin>>target; 

        int l = 0;
        int h = n-1;

        while(l<=h){
            int mid = l + (h-l)/2;

            if(target = arr[mid])
            {
                cout <<"index is:" << mid; 
                break; 
            }

            else if(target>arr[mid])
            {
                l = mid + 1; 
            }

            else
            {
                h = mid - 1 ;  
            }

        }





return 0; 
}
