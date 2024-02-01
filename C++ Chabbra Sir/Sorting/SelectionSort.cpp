#include <iostream>
using namespace std;


void SelectionSort(int n, int arr[50])
{
int minindex, j, min, temp; 

    for(int i=0; i<n-1; i++)
    {
        min = arr[i], minindex = i; 
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j]; 
                minindex = j; 
            }
        temp = arr[i];
        arr[i] = arr[minindex]; 
        arr[minindex] = temp; 
        } 


    }

    for(int i=0; i<6; i++)
     {
        printf("%d ", arr[i]); 
     }

}

int main()
{

     int arr[6] = {12,8,5,17,21,4};
     SelectionSort(6, arr);

     return 0;
}
