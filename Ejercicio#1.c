/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ejercicio#2.c
 * Author: root
 *
 * Created on 7 de noviembre de 2019, 10:20 AM
 */

#include <stdio.h>
#include <math.h>
int conversioBin_dec(long long n);
int main()
{
    long long n;
    printf("Ingrese numero binario ");
    scanf("%lld", &n);
    printf("%lld en base 2(binario) = %d en base 10(decimal)", n, conversioBin_dec(n));
    return 0;
}

/*
 *Método para convertir de binario a decimal
 **/
int conversioBin_dec(long long numero)
{
    /*
     *declaramos donde guardar el número decimal, y el residuo
     **/
    int decimal = 0, i = 0, residuo;
    while (numero!=0)
    {
        
        residuo = numero%10;
        numero /= 10;
        decimal += residuo*pow(2,i);
        ++i;
    }
    return decimal;
}


