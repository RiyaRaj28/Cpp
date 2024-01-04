//some issue, 0 getting printed at last 
//can't solve lcm


#include <iostream>
using namespace std;

int gcd(int a, int b){
    int min = b;

    if(a<b){
        min = a; 
    }

    for(int i=2; i<=min; i++){
        if(a%i==0 && b%i==0){
            cout<<i <<" is the gcd of " <<a <<" and "<<b;
            break;
        }
    }

    return 0;

}

//
 int lcm(int a, int b){

// }

int main(){
    int a, b;

    cout<<"Enter first number:\n";
    cin>>a;

    cout<<"Enter second number:\n";
    cin>>b;

    // cout<<"LCM of the given two numbers is: " <<lcm(a,b) <<"\n"; 
    cout<<gcd(a,b); 

    return 0; 
}

