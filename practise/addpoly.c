#include<stdio.h>

int * add(int deg1, int deg2,int k,int poly1[deg1+1], int poly2[deg2+1],int *p){
	int i;
	
	if(deg1>deg2){
		for(i=0;i<deg1-deg2;i++){
			*(p+i)=poly1[i];
		}
		int j=0;
		for(i= deg1-deg2;i<=k;i++){
			*(p+i)=poly1[i]+poly2[j];
			j++;
		}
	}
	else{
		for(i=0;i<deg2-deg1;i++){
			*(p+i)=poly2[i];
		}
		int j=0;
		for(i= deg2-deg1;i<=k;i++){
			*(p+i)=poly1[j]+poly2[i];
			j++;
		}
	}
	return 0;
}
int main(){
int deg1,deg2,i,j;
	printf("enter the degree of first polynomial: ");
	scanf("%d",&deg1);
	printf("enter the degree of second polynomial: ");
	scanf("%d",&deg2);
	printf("enter the coefficient of poynomial one:\n\n");
	int poly1[deg1+1],poly2[deg2+1];
	
		for(i=0;i<=deg1;i++){
		printf("enter the coefficient of degree %d:  ",deg1-i);
		scanf("%d",&poly1[i]);
	}
	printf("enter the coefficient of poynomial two:\n\n");
    for(i=0;i<=deg2;i++){
		printf("enter the coefficient of degree %d:  ",deg2-i);
		scanf("%d",&poly2[i]);
	}
	
	int k;
	if(deg1>deg2){
		k=deg1;
	}
	else{
		k=deg2;
	}
	int res[k+1];
    
	add(deg1 ,deg2 ,k ,poly1,poly2,&res[0]);
	
	for(i=0;i<=k;i++){
		printf("%dx^%d  ",res[i],k-i);
	}
	return 0;
}