#include <stdio.h>

int main()
{
    int num, contador, factorial=1;
    printf("Introduce un numero para calcular su factorial\n");
    scanf("%i",&num);

    for(contador = num; contador > 1; contador--){
        factorial = factorial*contador;
    }
    printf("El factorial del_numero %i es = %i \n", num, factorial);
    getchar();
    return 0;
}
