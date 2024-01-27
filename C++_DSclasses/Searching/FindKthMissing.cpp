#include <iostream>
using namespace std;

int main(){
    int arr[6] = {2,5,7,8,11,13};
    int k;

    cout<<"Enter the count of the element to be found: ";
    cin>>k; 

    int min = arr[0];
    int count = 0;

    for(int i=0; i<6; ){
        if(arr[i] == min){  //element present in array
            min = min+1;     //next element
            i = i+1;
            continue;
        }
        else{
            count++;
            if(count==k){
                cout<<arr[i];
                break;
            }

        }

    }
    return 0; 
}

               