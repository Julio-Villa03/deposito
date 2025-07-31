#include <stdio.h>
#include <math.h>

int main()
{
    //inizializzo i valori D N e L sono i numeri inseriti da tastiera, Pi è il pigreco
    float D, N, L;
   
    //questo per far inserire in input il primo numero che sarebbe D e lo utlizzeremo per calcolare le aree delle figure
    printf("\nInserisci un numero: ");
    scanf("%f", &D);

   //inizializzo R ovvero il raggio che mi servirà per l'area del cerchio, M_PI sarebbe il pigreco
    float R = D / 2;

    //inizio con il calcolo delle aree + stampando anche il risultato non decimale
    printf("Area del Quadrato: %.2f - %.0f\n", D * D, D*D);
    printf("Area del Cerchio: %.2f - %.0f\n", R * R * M_PI, R * R * M_PI);
    printf("Area del Triangolo Equilatero: %.2f - %.0f\n", sqrt(3) / 4 * D * D, sqrt(3) / 4 * D * D);

    //inserisco altri due numeri per poi fare la media dei tre numeri inseriti
   float media;
    printf("\nInserisci altri 2 numeri: \n");
    scanf("%f", &N);
    scanf("%f", &L);

    //calcolo della media
    printf("\nMedia dei 3 numeri inseriti: %.2f", media=(D + N + L)/3);
    printf("\nMedia non decimale: %.0f", media);

    return 0;
}