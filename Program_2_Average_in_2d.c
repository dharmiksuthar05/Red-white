#include<stdio.h>
//UDF for finding averge of All elements in 2d array
int average_2d(int a[100][100],int row ,int col);
int main(){
	int a[100][100],i,j,row,col;
	
//	Taking user input 
	printf("Enter the number of Row:");
	scanf("%d",&row);
	printf("\nEnter the number of Columns:");
	scanf("%d",&col);
	
	printf("\nEnter the number of elements in Array:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your 2d Array is \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
//	passing values to function for performing logic
	average_2d(a,row,col);

}
// main logic for finding average 
int average_2d(int a[100][100],int row,int col){
	
//	set count and sum to 0 for better calculation 
	int i, j, sum = 0, count = 0;
    float avg;

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			sum += a[i][j]; //Sum = sum+a[i][j]
			count++; //Increasing count 
		}
	}
	printf("Sum = %d",sum);
	printf("\nCount = %d",count);
	//Finding average 
	avg= sum / count ;
	printf("\nAverage of 2d array total is %f",avg);
}
