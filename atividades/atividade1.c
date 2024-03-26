#include <stdio.h>
#include <stdlib.h>

    int main (int argc, char* argv[]){

        int qtd = argc - 1;
        int soma = 0;
        float media = 0;
        int menor_n= atoi(argv[1]);
        int maior_n = atoi(argv[1]);
        int vetor_ord_n[qtd];

        for (int i = 1; i <= qtd; i++) {
            int n = atoi(argv[i]);
            soma += n;

            if(menor_n > n){
                menor_n = n;
            }if(maior_n < n){
                maior_n = n ;           
                }

        }
        media = (float) soma / qtd;

        printf("quantidade de numeros recebidos = %d\n", qtd);
        printf("media = %.2f\n", media);
        printf("menor = %d\n", menor_n);
        printf("maior = %d\n", maior_n);

        for(int i = 0; i < qtd-1; i++){
            for(int j = i; j < qtd; j++){
                if(vetor_ord_n[i] > vetor_ord_n[j]){
                    int aux = vetor_ord_n[j];
                    vetor_ord_n[j] = vetor_ord_n[i];
                    vetor_ord_n[i] = aux;
                }
            }
        }

    
        for(int i = 0; i < qtd; i++){
            printf("%d ", vetor_ord_n[i]);
        }

        exit(0);
    }