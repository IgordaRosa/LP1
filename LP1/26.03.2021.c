/*
Nome: Igor de Matos da Rosa
Matr�cula:20103930
 Escreva uma fun��o int fatorial (int N) que calcula N! (fatorial de N), sendo
que o valor inteiro (positivo) N � fornecido pelo usu�rio.
*/

#include <stdio.h>
//#include <math.h>
#include <locale.h>

int funcao(int num);


int main(){
    setlocale(LC_ALL,"Portuguese");

    int N;
    int res;

    printf("Dig�te o n�mero de N!: ");
    scanf("%i", &N);
    
    res = funcao(N);
    
    if(res > 0){
        printf("O n�mero %i! = %i", N, res);
    }
    else if(res == 0){
        printf("O n�mero %i! = 1", N);
    }
    else{
        printf("Este n�mero � inv�lido");
    }

    return 0;
}

int funcao(int num)
{
    int n;
    int m;

    for(n=0;n < num; n++){
        if(n == 0){
            m = num;
        }
        else{
            m = m * n;
        }
    }
    
    return m;
}