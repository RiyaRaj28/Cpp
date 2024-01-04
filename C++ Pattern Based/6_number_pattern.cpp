// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout<<"Enter number of rows: ";
//     cin>>n; 

//     for(int i=1; i<=n; i++){

//         //spaces:
//         for(int j=1; j<= n-i; j++){
//             cout<<" ";
//         }

//         //stars:
//         for(int k=1; k<=(2*i)-1; k++){ 
//             cout<<"*";
//         }

//         cout<<"\n";
//     }

// return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of rows: ";
    cin>>n; 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j; 
        }
        cout<<"\n";
    }

return 0;
}