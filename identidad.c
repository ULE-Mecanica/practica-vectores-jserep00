#include <stdio.h>
#include <stdlib.h>

int inici(int m[9][9]);
int main (){
	int m[9][9];
	inici (m);

return 0;
}
int inici(int m[9][9]){
	int matriz[9][9] = {0}, i, j;
    	for(i = 0; i < 9; i++) {
          	for(j = 0; j < 9; j++){
               		if(i == j){
                    		matriz[i][j] = 1;
			}
		}
	}
     	for(i = 0; i < 9; i++) {
        	for(j = 0; j <9;j++){
               		printf("%d", matriz[i][j]);
		}
          printf("\n");
   	}
int inici;
} 
		
