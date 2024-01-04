#include <iostream>
using namespace std;

int main(){
    int n, i;
    // bool flag = true;

    cout<<"Enter  number to find its factorial: ";
    cin>>n; 

    int fac = 1;

    for(i=1; i<=n; i++){
        fac = fac*i;
    }

    cout<<"Factorial of the given number is: " <<fac <<"!";

    return 0;
}




