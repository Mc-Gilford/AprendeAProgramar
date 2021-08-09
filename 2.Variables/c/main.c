#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> //Libreria para booleanos
#define v "Hola Mundo"

int main()
{
    int i=1;
    long l=1020303234;
    float f=1.2;
    double d=1.3;
    bool b = false;
    char c ='c';
    char *str = "Hola Amigo";
    //char *v = "Hey que pasa";
    printf("INT %d\n", i);
    printf("LONG %ld\n", l);
    printf("FLOAT %f\n", f);
    printf("DOUBLE %lf\n", d);
    printf("BOOLEAN %d\n", b);
    printf("CHAR %c\n", c);
    printf("STRING %s\n", str);
    printf("CONSTANT %s\n", v);
}