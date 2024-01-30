#include <iostream>
using namespace std;

int pow(int a, int b){
    if(b==0 || b==1){
        return a;
    }
    else{
    return a*pow(a, b-1); 
    }
}

int main(){
    int a, b;

    cout<<"Enter first number:\n";
    cin>>a;

    cout<<"Enter second number:\n";
    cin>>b;

    cout<<a <<" raised to power " <<b <<" is " <<pow(a,b);

    return 0; 
}