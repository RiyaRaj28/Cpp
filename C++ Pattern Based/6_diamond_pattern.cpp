#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of rows: ";
    cin>>n; 

    for(int i=1; i<=n; i++){

        //spaces:
        for(int j=1; j<= n-i; j++){
            cout<<" ";
        }

        //stars:
        for(int k=1; k<=(2*i)-1; k++){ 
            cout<<"*";
        }

        //spaces:
        for(int j=1; j<=n-1; j++)


        cout<<"\n";
    }

return 0;
}