#include <stdio.h>
#include <stdlib.h>


/* Se debe ingresar valores 505p, 50l, -500d, 88b, 100p. Siendo el mayor dolares.
validar las tipo, realizar el promedio de pesos y el porcentaje de pesos ingresados*/
int main()
{
    int dinero;
    char tipo;
    int contador;
    int importeMayorEnDolares;
    float promedioDePesos;
    int esElPrimerDolar=1;
    int contadorDePesos=0;


    for (contador=0; contador<5 ; contador++)
    {

    printf ("Ingrese la cantidad de dinero: ");
    fflush (stdin);
    scanf ( "%d" , &dinero);
    printf ( "Ingrese el tipo de dinero: ");
    fflush (stdin);
    scanf ( "%c" , &tipo);

    while(!(tipo == 'p' || tipo =='d' || tipo == 'l' || tipo == 'b'))
    {
        printf ( "No es un tipo valido. Ingrese el tipo de dinero: ");
        fflush (stdin);
        scanf ( "%c" , &tipo);
    }

    if(tipo == 'd')

    {
        if(esElPrimerDolar==1)
        {
            esElPrimerDolar=0;
            importeMayorEnDolares=dinero;
        }


        if(dinero>importeMayorEnDolares)
        {
            importeMayorEnDolares=dinero;
        }

    }

    if(tipo=='p')
    {
        promedioDePesos+=dinero;
        contadorDePesos++;
    }



}

        promedioDePesos = promedioDePesos/contadorDePesos;

        printf("El promedio de pesos es de:  %f ",promedioDePesos);
        printf("El valor maximo en dolares es de: %d", importeMayorEnDolares);

return 0;
}

