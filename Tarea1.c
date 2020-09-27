#include <stdio.h>

int main()
{

            float ResT,R1,R2,R3,Paralelo,Volin,Itotal,I1,I2,I3,Comprobar;

            R1 = 0;
            R2 = 0;
            R3 =0;
            Paralelo = 0;
            ResT =0;

            printf ("Escribe el valor del Voltaje de entrada \n");
            scanf ("%f", &Volin);
            printf("Escribe el valor de la R1 \n");
            scanf("%f", &R1);
            printf("Escribe el valor de la R2 \n");
            scanf("%f", &R2);
            printf("Escribe el valor de la R3 \n");
            scanf("%f", &R3);

                    Paralelo = (R1 * R2)/(R1 + R2);
                    ResT = (Paralelo * R3)/(Paralelo + R3);

                       printf("Resistencia Total: %.2f \n",ResT);

                        Itotal= Volin/ResT;
                           printf("Corriente total %f\n",Itotal);
                           printf("Voltaje total = V1 = V2 = V3 = %f\n",Volin);

                           printf("Corrientes en cada resistencia %f\n");
                           I1= Volin/R1;
                           printf("Corriente de resistencia 1= %f\n",I1);
                           I2= Volin/R2;
                           printf("Corriente de resistencia 2= %f\n",I2);
                           I3= Volin/R3;
                           printf("Corriente de resistencia 3= %f\n",I3);

                           Comprobar =I1+I2+I3;
            printf("Comprobacion de la suma de las corrientes I1, I2, I3 = %f\n \n",Comprobar);

            return 0;
            }
