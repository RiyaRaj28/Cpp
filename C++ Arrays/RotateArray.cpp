// #include <iostream>
// using namespace std; 

// int main(){
//     int n;

//     cout<<"Enter size of array: ";
//     cin>>n; 

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cout<<"Enter element "<<"["<<i+1<<"]:";
//         cin>>arr[i];
//     }

//     int temp, k=3;

//     for(int i=0; i<3; i++){
//         temp = arr[n-1];
//         for(int j=0; j<n; j++){
//             arr[j+1] = arr[j];
//             }
//         arr[0] = temp;
//         }
    
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     // cout<<"\n";
//     }

//     return 0;
// }

// //clockwise
// #include <iostream>
// using namespace std; 

// int main(){
//     int n;

//     cout<<"Enter size of array: ";
//     cin>>n; 

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cout<<"Enter element "<<"["<<i+1<<"]:";
//         cin>>arr[i];
//     }

//     int k, temp;
//     cout<<"Enter number of steps to rotate array by:";
//     cin>>k;

//     for(int i=0; i<k; i++){
//         temp = arr[0];
//         for(int j=1; j<n; j++){
//             arr[j-1] = arr[j];
//             }
//         arr[n-1] = temp;
//         }
    
//     for(int j=0; j<n; j++){
//     cout<<arr[j]<<" ";
//     }

//     return 0;
// }

//anticlockwise

//doubt 
#include <iostream>
using namespace std; 

int main(){
    int n;

    cout<<"Enter size of array: ";
    cin>>n; 

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<"["<<i+1<<"]:";
        cin>>arr[i];
    }

    int k, temp;
    cout<<"Enter number of steps to rotate array by:";
    cin>>k;

    for(int i=0; i<k; i++){
        temp = arr[n-1];
        for(int j=0; j<n-1; j++){
            arr[j] = arr[j+1];
            }
        arr[0] = temp;
        }
    
    for(int j=0; j<n; j++){
    cout<<arr[j]<<" ";
    }

    return 0;
}















