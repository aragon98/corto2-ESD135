#include <stdio.h>
#include <stdlib.h>
/*
 * Método para cambiar de variables
 * */
void cambio_variable(int *punteroA, int *punteroB){
	//Sumamos el valor de punteroA y punteroB y lo guardamos en 
    *punteroA=*punteroA+*punteroB;
    //En punteroB guardamos la resta punteroA-punteroB 
    //Que nos da el resultado del primer valor guardado en  punteroA
    *punteroB=*punteroA-*punteroB;
    //Ahora solo hace falta restarle al valor de punteroA.... 
    //....el actual valor guardado en punteroB
    *punteroA=*punteroA-*punteroB;
}

int main(){
    int a, b;
    
    printf("Ingrese el primer numero");
    scanf("%i",&a);
    printf("Ingrese el segundo numero");
    scanf("%i",&b);
    
	//Llamamos el método
    cambio_variable(&a,&b);
	//Imprimimos los valores actualizados de cada variable
    printf("El número de a es %d\n", a);
    printf("El número de b es %d\n", b);


    return 0;
}

