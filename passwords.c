#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicializa (char letras [26]);
void pw (char letras [26],char pass[9]);

int main () {
char letras [26];
char pass [9];
srand (time(NULL));
inicializa (letras);
pw (letras, pass);
pass [8]='\0';
printf ("%s \n", pass);
return 0;
}
void pw (char letras [26], char pass [9]){
	int i;
	for (i=0;i<8;i++){
		pass [i]=letras [rand()%26];
	}

}

void inicializa (char letras [26]){
	int i;
	for (i=0;i<26;i++){
		letras [i]='a'+i;
	}
}
