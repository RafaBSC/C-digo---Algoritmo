#include "remove.h"
#include <math.h>
#include <stdio.h>

int func_val(int x, int b){
    double a0 = 186.752;
    double a1 = -148.235;
    double a2 = 34.5049;
    double a3 = -3.5091;
    double a4 = 0.183166;
    double a5 = -0.00513554;
    double a6 = 0.0000735464;
    double a7 = -4.22038 * pow(10, -7);

    double resultado = a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);
    return round(resultado);

     //Utilizamos o double por conta dele ter mais espaços em sua memoria fazendo com que nao perca nehum numero gerado pos o calculo
}
