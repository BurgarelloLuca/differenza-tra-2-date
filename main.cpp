#include <iostream>
#include<stdio.h>
int main() {
int giorno1, giorno2,mese1,mese2,anno1,anno2,differenza;
    int differenzaAnno,differenzaMese,differenzaGiorno;
    int restoAnno,restoMese;
    printf("inserire l' anno della prima data");
    scanf("%d",&anno1);
    printf("inserire il mese della prima data");
    scanf("%d",&mese1);
    printf("inserire il giorno della prima data");
    scanf ("%d",&giorno1);
    printf("inserire l' anno della seconda data");
    scanf ("%d",&anno2);
    printf("inserire il mese della seconda data");
    scanf("%d",&mese2);
    printf("inserire il giorno della seconda data");
    scanf("%d",&giorno2);
    differenza=giorno1-giorno2+(mese1-mese2)*30+(anno1-anno2)*360;
    differenzaAnno=differenza/360;
    printf("%i anni\n",differenzaAnno);
    restoAnno=differenza%360;
    differenzaMese=restoAnno/30;
    printf("%i mesi\n",differenzaMese);
    restoMese=restoAnno%30;
    differenzaGiorno=restoMese;
    printf("%i giorni\n",differenzaGiorno);
}

