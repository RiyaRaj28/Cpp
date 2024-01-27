#include <iostream>
using namespace std; 

int main(){
    int arr[10] = {0,1,1,2,2,2,3,4,5,3};
 
    for(int i=0; i<10; i++){
            int c = 1;

        for(int j=0; j<10; j++){

            if(i!=j && arr[i]==arr[j]){
                c = c+1; 
            }
           
        }
         cout<<"Frequency of "<< arr[i] << " is " << c;
            cout<<"\n";
    }



   for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
   }
    return 0;
  }





    





    

