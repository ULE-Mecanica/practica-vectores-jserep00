#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inici (int num);

int main () {
	int num
	num = inici (num);
	printf("%d", num);
	return 0;
}

int inici (int num){
	int matriz [5][5];
	int i,j,n;
	srand(time(NULL));
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
		matriz [i][j] = n;			
		n = 3+rand() %16;
		}
		printf ("\n");
	}
	return inici;
}
