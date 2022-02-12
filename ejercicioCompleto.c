#include<stdio.h>

void regular(float *costo, int *mins){
    int min;
    printf("inserte el numero de minutos gastados\n");
    scanf("%d",&min);
    *mins = min;

    if (min > 50){
        min = min -50;
    } else {
        min = 0;
    }
    *costo = 10 + min*0.2;

}
void premiun(float *costo, int *mins){
    int minDia,minNoche;
    printf("inserte minutos gastados de dia\n");
    scanf("%d",&minDia);
    printf("inserte minutos gastados de noche\n");
    scanf("%d",&minNoche);
    *mins = minDia + minNoche;

    if(minDia > 75){
        minDia = minDia - 75;
    } else {
        minDia = 0;
    }

    if(minNoche > 100){
        minNoche = minNoche - 100;
    } else {
        minNoche = 0;
    }

    *costo = 10 + 0.1*minDia + 0.05*minNoche;

}
void facturar(){
    int cuenta,mins;
    char modalidad;
    float costo;
    char p[] = "Premiun";
    char r[] = "Regular";
    printf("inserte numero de cuenta\n");
    scanf("%d",&cuenta);
    printf("inserte modalidad P o p para Premiun y R o r para regular");
    scanf("\n%c",&modalidad);
    while(modalidad != 'p' && modalidad != 'P' && modalidad != 'r' && modalidad != 'R'){
        printf("caracter invalido, inserte P o R");
        scanf("\n%c",&modalidad);
    }

    if(modalidad == 'p' || modalidad == 'p'){
        premiun(&costo,&mins);
        system("clear");
        printf("cuenta: %d\nmodalida: %s\nminutos: %d\nmonto: %0.2f$\n",cuenta,p,mins,costo);
    } else {
        regular(&costo,&mins);
        system("clear");
        printf("cuenta: %d\nmodalida: %s\nminutos: %d\nmonto: %0.2f$\n",cuenta,r,mins,costo);
    }

}
int main(){
	facturar();
}
