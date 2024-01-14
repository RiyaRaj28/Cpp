#include <iostream>
using namespace std; 

//two pointer approach
// int main(){
//     int arr[10] = {0,1,1,0,0,0,1,1,0,0};

//     int i=0, j=9, temp;
// while(i<j){
//     if(arr[i]==0) i++;
//     else if(arr[j]==1) j--;
//     else {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
// }

// for(int i=0; i<10; i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }


//count 0's and 1's, add that many in the array.
int main(){
    int arr[10] = {0,1,1,0,0,0,1,1,0,0};

    int zeros=0, ones=0;

    for(int i=0; i<10; i++){
        if(arr[i]==0) 
            zeros++;
        else
            ones++;
    }

    for(int i=0; i<zeros; i++){
        arr[i] = 0;
    }

    for(int j= zeros; j<10; j++){
        arr[j] = 1;
    }

   for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
   }
    return 0;
  }





    





    

