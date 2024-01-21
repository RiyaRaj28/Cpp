#include <iostream>
using namespace std;

//selection sort
//for each element from L-->R assume it min, and for the remaining array, find the the min and swap it 
    // int swap(int a, int b){
    //     int temp = a; 
    //     a = b;
    //     b = temp;
    // }

    int main(){

    int arr[6] = {12,8,5,17,21,4};

    for(int i=0; i<5; i++){
        int mini = i, j=i+1; 

        for(j=i+1; j<6; j++){
            if(arr[j]<arr[mini])  
                 mini = j; 
        }

    int temp = arr[i]; 
    arr[i] = arr[mini];
    arr[mini] = temp;

    }

     for(int i = 0; i<6; i++)
    {
        cout<<arr[i] <<" "; 
    }

   
    return 0;
}