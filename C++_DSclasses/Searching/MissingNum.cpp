#include <iostream>
using namespace std;

int main(){
    int arr[6] = {2,5,1,3,6,7};

    int temp; 

    //sorting through bubble sort
    for(int i = 0; i<5; i++)
    {
        for(int j=0; j<5-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    
    //print sorted array
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n"; 
    
    //to find missing element
    int check = arr[0];
    for(int i=0; i<6; i++)
    {
        check = check + 1;
        if(arr[i+1]!=check)
        {
            cout<<"Missing element is : " << check;  
            break;
        }
        else
        {
            continue;
        }  
    }

    return 0;
}
    
    