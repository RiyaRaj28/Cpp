#include <iostream>
using namespace std; 

int main(){

    int arr[] = {-7,2,6,-8,-1,4,12}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //do it such that the sequence stays the same

    //insertion sort
    int i=0, j, temp; 
    // if (arr[0]>0) j = 0;
    // else j = 1;  

    // for(i; i<n; i++)
    // {
    //     temp = arr[j]; 
    //     for(int k=j; k>i; k--){ 
    //     if(arr[j]>0){
    //         j++; 
    //     }
    //     if(arr[j]<0)
    //     {
    //         arr[k] = arr[k-1]; 
    //     }
    //     arr[i] = temp; 
    //     }
    // }

   for(i; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]<0){
                i++; 
            }
            if(arr[j]>
            +)
        }


    }
    
    for(int m=0; m<n; m++){
        cout<< arr[m] <<" "; 
    }



    return 0;


}


    
