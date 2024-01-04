#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces:
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //stars:
        for(int j=1; j<=n; j++){
            cout<<"*"; 
        }

        cout<<"\n";
    }
}