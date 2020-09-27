#include <stdio.h>

int main()
{
    float Vin,LedAmarillo,ResledA,VledA,IledA,VR;
    float LedR,ResledR,VledR,IledR,VR2;
    float LedV,ResledV,VledV,IledV,VR3;

    VledA= 1.9;
    IledA= 0.015;

    VledR= 1.8;
    IledR= 0.15;

    VledV= 2.0;
    IledV= 0.02;

    printf("Ingrese el valor del voltaje de alimentacion\n");
    scanf ("%f",&Vin);
    printf("Voltaje de alimentacion= %f\n",Vin);

    VR= Vin-VledA;
    ResledA= VR/IledA;

    printf("Resistencia para el Led Azul STD= %f\n",ResledA);



               VR2= Vin-VledR;
               ResledR= VR/IledR;

               printf("Resistencia para el Led Rojo brillante= %f\n",ResledR);


    VR3= Vin-VledV;
    ResledV= VR/IledV;

    printf("Resistencia para el Led Verde STD = %f\n",ResledA);


    return 0;
}
