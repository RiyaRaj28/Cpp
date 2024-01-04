#include <iostream>
using namespace std;

int main(){
    int n,temp,sum,r;

    cout<<"Enter number:\n";
    cin>>n;
    temp = n;
    sum = 0;

    while(n>0){
        int r = n%10;
        sum = (sum*10)+r; 
        n = n/10; 
    }

    if(sum == temp){
        cout<< temp <<" is a palindrome number!"; 
    }
    else{
        cout<< temp <<" is a not palindrome number!"; 
    }

    return 0;
}
