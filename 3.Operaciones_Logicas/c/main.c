#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int numberOne=4, numberTwo=5;
    int resultSum= numberOne+numberTwo;
    int resultRest= numberOne-numberTwo;
    int resultMult= numberOne*numberTwo;
    float resultDiv= (float)(numberOne/numberTwo); // Casteo
    int resultMod= numberOne%numberTwo;
    int resultExp= pow(numberOne, numberTwo);
    int resultSqrt= sqrt(numberOne);

    printf("Suma %d \n", resultSum);
    printf("Resta %d \n", resultRest);
    printf("Multiplicacion %d \n", resultMult);
    printf("Division %d \n", resultDiv);
    printf("Modulo %d \n", resultMod);
    printf("Exponencia %d \n", resultExp);
    printf("Raiz %d \n", resultSqrt);
}