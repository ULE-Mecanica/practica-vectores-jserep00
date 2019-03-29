#include <stdio.h>
#include <math.h>


float distancia(float v1[],float v2[]);
float x1,z,x2,y2,result;
int main(){
    printf("Introduzca las cordenadas de X del primer punto:");
    scanf("%f",&x1);
    printf("Introduzca las cordenadas de Y del primer punto:");
    scanf("%f",&z);
    printf("Introduzca las cordenadas de X del segundo punto:");
    scanf("%f",&x2);
    printf("Introduzca las cordenadas de Y del segundo punto:");
    scanf("%f",&y2);
    float v1[2] = {x1,z};
    float v2[2] = {x2,y2};
    float result = distancia(v1,v2);
    printf("%f",result);
    return 0;
}
float result1;
int i;
float distancia(float v1[2],float v2[2]){
    for (i=0;i<=1;i++) {
        result1 += (v2[i]-v1[i])*(v2[i]-v1[i]);
    }
    return sqrt(result1);
}



