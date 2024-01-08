#include <iostream>
using namespace std;

int main(){
    int n, i;
    bool flag = true;

    cout<<"Enter number till which have to print prime numbers: ";
    cin>>n; 

    // if(n==0 || n==1){
    //     cout<<n <<"is not a prime number!"; 
    // }
     
     

    for(i=2x; i<=n; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }

    if(flag)
        cout<<n;
    // else
    //     cout<<n <<" is not a prime number!"; 


    return 0;
}





