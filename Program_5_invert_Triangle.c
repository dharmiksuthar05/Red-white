#include<stdio.h>
int main(){
	int i,j,k;
	
	for(i=0;i<5;i++){
//		print blak space 
		for (j = 0; j < 4 - i; j++) {
		    printf("  ");
		}

        // print numbers
        for (k = 10 - i; k <= 10; k++) {
            printf("%d ", k);
        }
        printf("\n");
	}
	
}
