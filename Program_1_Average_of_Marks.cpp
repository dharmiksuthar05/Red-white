#include<stdio.h>
int main(){
	//variable for marks and subject 
	int total_marks,total_subject;
	float avg; //float for average 
	
//	Taking values as Input 
	printf("Enter the Total Marks out of 600 :");
	scanf("%d",&total_marks);
	printf("Enter the Total Subject :");
	scanf("%d",&total_subject);
	// check valdation for number of subject and Marks 
	if(total_subject > 5){
		printf("You entered above 5 Subject when your syllabus have only 5");
	}
	if(total_marks > 600){
		printf("You entered above 600 please enter value between 1-600");
	}
	//Check validation for Both to find average
	if(total_subject <=5 && total_marks <=600){
		avg = total_marks / total_subject;
		//	printing msg for grades 
		if(avg >= 90 ){
			printf("Congrulation you clear the exam with A grade yeyyyy!!!!!!");
		}
		else if(avg>=80){
			printf("Congrulation you Clear the exam with B grade");
		}
		else  if(avg>=60){
			printf("You had achieve C grade you can work hard");
		}
		else if(avg >= 50){
			printf("You really nee to work hard to clear exams");
		}
		else{
			printf("You have failed the exam , word hard next time");
		}
	}


}
