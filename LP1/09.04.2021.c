/*
Nome: Igor de Matos da Rosa
Matr�cula: 20103930
quest�o realizada: 2, lista 4.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int Impar(int v[]);
int Sump(int v[]);
int i; // utilizei o i como variavel global para deixar o c�digo menor
int main(){
    setlocale(LC_ALL,"Portuguese");
    int v[10];
    int impar = 0, positivos = 0;

    for(i=0; i < 10; i++){
        printf("\nDigite o n�mero de v[%i] : ", i);
        scanf("%i", &v[i]);
        impar = Impar(v) + impar;
        positivos = Sump(v) + positivos;
    }

    printf("\nNo vetor V, estitem (%i) n�meros impares\n", impar);
    printf("\nA soma dos n�meros positivos de V � : %i \n", positivos);
    return 0;
}

int Impar(int v[]){
    int k = 0, par;
    par = v[i] % 2;
    if(par != 0){
        k++;
        }
    return k;
}

int Sump(int v[]){
    int k = 0;
    if(v[i] >= 0){
        k = v[i];
    }
    return k;
}