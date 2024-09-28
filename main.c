#include "remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char mensagem[101];
    char hex[3];
    int i, j, b, veri, x = 1, nume;
    char resultado;
    char fim[] = "00";

    printf("Escreva o valor de b: ");
    scanf("%d", &b);

    printf("Coloque a mensagem: ");
    scanf("%100s", mensagem); // O uso do %100s serve para limitar a quantidade de caracteres que podem ser lidos e armazenados na variável mensagem

    for (i = 0; i < strlen(mensagem); i += 2){
        x = i / 2 + 1;
        veri = func_val(x, b);
        if (veri != 0){
            hex[0] = mensagem[i];
            hex[1] = mensagem[i + 1];
            hex[2] = '\0';
            if (strcmp(hex, fim) == 0){
                break;
            }
            int resultado = strtol(hex, NULL, 16); // como essa linha converte uma string hexa para numero utiilizamos o int para melhor funcionanmento;
            printf("%c", resultado);
        }
    }
    return 0;
}