#include <iostream>
using namespace std;

int main(){
    int n, i;
    bool flag = true;

    cout<<"Enter number to determine whether it is prime: ";
    cin>>n; 

    if(n==0 || n==1){
        cout<<n <<"is not a prime number!"; 
    }

    for(i=2; i<=n/2; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }

    if(flag)
        cout<<n <<" is a prime number!";
    else
        cout<<n <<" is not a prime number!"; 


    return 0;
}

