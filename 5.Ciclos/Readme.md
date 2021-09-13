# Ciclos
Es aquel que nos permite hacer n cantidad de iteracciones a un mismo proceso (repetir varias veces una tarea). Este tambien es conocido como un bucle.

Dentro de esto tenemos diferentes tipos de ciclos.

- **Ciclo infinito (Bucle infinito)**. Es aquel ciclo que se repite infinita mente y nunca se detiene.
- **Ciclo finito (bucle finito)**. Este tipo de ciclo es el que nos permite terminar un ciclo en un determinado momento, con el uso de una condicion. Estos corren hasta cumplir la condicion.

## Iteraciones
Significa repetir varias veces un proceso con la intención de alcanzar una meta deseada, objetivo o resultado

## Ciclos programacion
Exiten tres diferentes tipos de ciclos que nos permiten realizar la repeticion de n cantidad de veces de una tarea. Estis son:
- FOR
- WHILE
- DO WHILE

**Nota:** En algunos lenguajes de programacion ya se dejo de usar el do while.

## FOR
Este es un tipo de ciclo que nos permite realizar n cantitad de interacciones para realizar una tarea y esta compuesto de la siguiente manera.

``` powershell
    for (inicializacion,condicion,incremento)
```

Dentro de la programacion es una de las formas mas habituales de encontrar un ciclo, en el entorno de la programacion. La estructura de la programacion lo encontramos de la siguiente mane 
## C,C++,JAVA,JAVASCRIPT,PHP
``` C++
    for(i=0; i<9;i++)
    {
        //Tareas a realizar 
    }
```
**Nota:** Recuerda que en el caso de PHP cuando nosotros hacemos uso de una variable es mediante el signo de **$** y **nombre** que seria en este caso **$i**;
## PYTHON
``` python
    for i in range (9):
        # Tareas a realizar
```
**Nota:** En el caso de python nosotros usamos el range para llegar hasta 9 en este caso, podemos usar el range de las diferentes maneras como lo podemos a ver a continuacion.
``` python
    for x in range(inicializacion, condicion):
``` 

``` python
    for x in range(inicializacion, condicion,secuencia):
``` 

## WHILE
El uso del ciclo while es de los mas usados en el momento de la programacion, es lo podemos encontrar mas con el uso de ciclos infinitos.

``` powershell
    inicializacion
    while condicion
```
### Ciclo infinito
``` java
    while(1){

    }
```

``` java
    while(true){

    }
```
## C,C++,JAVA,JAVASCRIPT,PHP

La estructura del while se compone de la siguiente forma
``` c++
    i = 0;
    while(i<9){
        //Tareas a realizar
    }
```

## PYTHON
``` python
    i=0
    while i<9:
        # Tareas a realizar
```

## DO WHILE
Esta manera de realizar un ciclo es de las pocas usadas en la programacion e incluso algunos lenguajes de programacion la han dejado en el olvido como en el caso de Python.

Su composicion es de la siguiente manera.
``` powershell
do 
    #Tareas a realizar
while condicion
```
### C,C++,JAVA,JAVASCRIPT
``` c++
    do {
        i = i + 1;
        result = result + i;
    } while (i < 5);
```

## Diferencias
En el caso del **while** primero debe de cumplir la condicion para poder realizar el codigo mientras con el **do-while** realiza primero la tarea y despues verifica si la condicion cumple y termina el proceso en caso de cumplirla

## Ejemplos
En estos ejemplos veremos como imprimir del uno al creo usando diferentes ciclos.

## C
``` c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    // Uso con FOR
    printf("For con variable creada\n");
    for (i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("For con creacion de variable\n");
    for(int j=1;j<=10;j++){
        printf("%d ",j);
    }
    printf("\n");
    printf("While\n");
    i=1;
    while(i<=10){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    
    printf("Do While\n");
    i = 1;
    do{
        printf("%d ",i);
        i++;
    }while(i<=10);
    printf("\n");
}
```
## C++
``` c++
#include <iostream>
using namespace std;

int main()
{
    int i=0;
    // Uso con FOR
    cout<<"For con variable creada\n";
    for (i=1;i<=10;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"For con creacion de variable\n";
    for(int j=1;j<=10;j++){
        cout<<j<<" ";;
    }
    cout<<"\n";
    cout<<"While\n";
    i=1;
    while(i<=10){
        cout<<i<<" ";;
        i++;
    }
    cout<<"\n";
    
    cout<<"Do While\n";
    i = 1;
    do{
        cout<<i<<" ";;
        i++;
    }while(i<=10);
    cout<<"\n";
}
```
## JAVA
``` java
public  class Main {
    public static void main(String[] args) {
        int i=0;
        // Uso con FOR
        System.out.print("For con variable creada\n");
        for (i=1;i<=10;i++){
            System.out.print(i+" ");
        }
        System.out.print("\n");
        System.out.print("For con creacion de variable\n");
        for(int j=1;j<=10;j++){
            System.out.print(j+" ");
        }
        System.out.print("\n");
        System.out.print("While\n");
        i=1;
        while(i<=10){
            System.out.print(i+" ");
            i++;
        }
        System.out.print("\n");
        
        System.out.print("Do While\n");
        i = 1;
        do{
            System.out.print(i+" ");
            i++;
        }while(i<=10);
        System.out.print("\n");
    }
}
```
## JAVASCRIPT
``` js
var i=0;
    // Uso con FOR
    console.log("For con variable creada\n");
    for (i=1;i<=10;i++){
        console.log(i+" ");
    }
    console.log("\n");
    console.log("For con creacion de variable\n");
    for(var j=1;j<=10;j++){
        console.log(j+" ");
    }
    console.log("\n");
    console.log("While\n");
    i=1;
    while(i<=10){
        console.log(i+" ");
        i++;
    }
    console.log("\n");
    
    console.log("Do While\n");
    i = 1;
    do{
        console.log(i+" ");
        i++;
    }while(i<=10);
    console.log("\n");
```
## PHP
``` php
<?php
$i=0;
// Uso con FOR
echo"For con variable creada\n";
    for ($i=1;$i<=10;$i++){
        echo"$i ";
    }
echo"\n";
echo"For con creacion de variable\n";
    for($j=1;$j<=10;$j++){
        echo"$j ";
    }
echo"\n";
echo"While\n";
$i=1;
    while($i<=10){
        echo"$i ";
        $i++;
    }
echo"\n";

echo"Do While\n";
$i = 1;
    do{
        echo"$i ";
        $i++;
    }while($i<=10);
echo"\n";
?>
```
## PYTHON
``` python
i=0;
# Uso con FOR
for i in range (1,11):
    print(i," ")
print("\n")
print("While\n")
i=1
while i<=10:
    print(i," ")
    i+=1
print("\n")
    
```
## EJERCICIOS
1. Haz un ejercicio donde imprimas 10 veces hola mundo en 3 lenguajes de programacion
2. Escribe un programa que vaya del 0 hasta el 20 y el incremento sea de 2 en 2
3. Escribe un programa con el cual determines del 1 al 30 los numeros pares e impares, imprimir el numero y si es par o es impar.
4. Escribe un programa que vaya del 1 al 10, y que en el momento que el valor sea 5 haga un break.