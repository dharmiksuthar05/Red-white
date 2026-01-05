#include<stdio.h>
int odd_element(int a[100],int n);
int main(){
	int  i,a[100],n;
	//Taking values from User 
	printf("Enter the size of Array:");
	scanf("%d",&n);
	printf("Enter the elements of Array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	Udf for Finding ODD elements 
	odd_element(a,n);
}
int odd_element(int a[100],int n){
	int i;
//	Used module for Checking odd elemetns if reminder is 1 its conside that as odd 
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("odd element at index %d is %d\n",i,a[i]);
		}
	}
}
