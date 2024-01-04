#include <iostream>
using namespace std;

int main(){
    int n,temp,sum,r;

    cout<<"Enter number:\n";
    cin>>n;
    // temp = n;
    sum = 0;

    while(n>0){
        int r = n%10;
        sum = sum + r; 
        n = n/10; 
    }

    cout<<"Sum of the digits of the given number is : " <<sum; 

    return 0;
}

