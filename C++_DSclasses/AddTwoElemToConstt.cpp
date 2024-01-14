#include <iostream>
using namespace std; 

// two pointer approach : sort the array first
int main(){
    int arr[6] = {1,8,-3,8,4,-7};
    int target = 5;

    int temp;

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++)
        // if(i==5) break; 
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp; 
        }
    }

    for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
   }
   cout<<"\n"; 

    int i=0, j= 5, sum = 0, count = 0;
    while(i<j){

        sum = arr[i]+arr[j];

        if(sum < target) i++; 
        else if(sum > target) j--; 

        else {
            count++;
            i++;
            j--;
        }
    }

    cout<<"Number of pairs are: "<<count;
    return 0;

}

