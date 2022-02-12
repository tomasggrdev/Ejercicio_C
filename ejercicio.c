#include<stdio.h>

float regular(){
    int min;
    printf("inserte el numero de minutos gastados\n");
    scanf("%d",&min);

    if (min > 50){
        min = min -50;
    } else {
        min = 0;
    }
    return 10 + min*0.2;

}
float premiun(){
    int minDia,minNoche;
    printf("inserte minutos gastados de dia\n");
    scanf("%d",&minDia);
    printf("inserte minutos gastados de noche\n");
    scanf("%d",&minNoche);

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

    return 10 + 0.1*minDia + 0.05*minNoche;

}
void facturar(){
    int cuenta,isPremiun;
    char p[] = "Premiun";
    char r[] = "Regular";
    printf("inserte numero de cuenta\n");
    scanf("%d",&cuenta);
    printf("inserte codigo de servicio: 1 para premiun 0 regular\n");
    scanf("%d",&isPremiun);
    while(isPremiun < 0 || isPremiun > 1){
        printf("numero insertado no valido, inserte 1 o 0\n");
        scanf("%d\n",&isPremiun);
    }

    if(isPremiun == 1){
        printf("cuenta: %d\nmodalida: %s\nmonto: %f",cuenta,p,premiun());
    } else {
        printf("cuenta: %d\nmodalidad: %s\nmonto: %f",cuenta,r,regular());
    }
    

}
int main(){
	facturar();
}
