#include <iostream>
using namespace std; 

int main() {
    int Arr[] = {0, 1, 1,2, 0, 0, 0, 2,2,1, 1, 0, 0,2};
    int Size = 14;
    int i;
    int countZero = 0;
    int countOne = 0;
    int counttwo=0;
    for ( i = 0; i < Size; ++i) {
        if (Arr[i] == 0) {
            countZero++;
        } else if (Arr[i] == 1) {
            countOne++;
        } else if(Arr[i] ==2){
		   counttwo++;
		}
    }

    for ( i = 0; i < countZero; ++i) {
        Arr[i] = 0;
    }
    for (i = countZero; i < countOne+countZero; ++i) {
        Arr[i] = 1;
    }
    for(i=countOne+countZero;i<Size;++i){
    	Arr[i]= 2;
	}
    for (i = 0; i < Size; ++i) {
        cout<< Arr[i] <<" ";
    }

    return 0;
}