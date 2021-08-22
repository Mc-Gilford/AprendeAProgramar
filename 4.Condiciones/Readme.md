# Condiciones
Ejecuta una serie de instrucciones dependiendo de una determinada condición. Es decir, a partir de una condición se puede determinar si la condición se cumple y es verdadera (true) o por el contrario no se cumple y falsa (false).

En resumen determina que hacer cuando algo es cierto, y que hacer cuando algo no lo es.

Las condiciones ocupan los operadores logicos que vimo en la clase pasada que son:

- AND &&
- OR ||
- <=
- =>
- !=
- ==

## Condicion IF
Dentro de este tipo de condicion cubrimos el caso de que algo es cierto, la cual nos permitira realizar ciertas acciones que nosotros deseemos. 

Dentro de la estructura encontraremos la palabra **IF**, que la sintaxis se manejara de la siguiente manera en todos los lenguajes.

**En el caso de C, C++, Java, Javascript, Php**

``` C++
if(condicion){
    //Tareas a realizar
}
```
**En el caso de Python**
```python
if condicion:
    #Tareas a realizar
``` 

### Ejemplo
Dado un valor de una variable determinaremos que si es mayor de 2 le sumemos otro valor a este.

## C, C++, Java, Javascript
```C++
    if(numberOne>2)
    {
        numberOne+=numberTwo;
    }
```
## PHP
```php
    if($numberOne>2)
    {
        $numberOne+=$numberTwo;
    }
```
## PYTHON
```python
    if numberOne>2:
        numberOne+=numberTwo
```
## Condicion IF ELSE
Dentro de este tipo de condicion cubrimos el caso de que algo es cierto o si no lo es, la cual nos permitira realizar ciertas acciones que nosotros deseemos. 


Dentro de la estructura encontraremos la palabra **IF** junto con el **ELSE**, que la sintaxis se manejara de la siguiente manera en todos los lenguajes.

**En el caso de C, C++, Java, Javascript, Php**

``` C++
if(condicion){
    //Tareas a realizar
}
else{
    //Tareas a realizar si no cumple la condicion
}
```
**En el caso de Python**
```python
if condicion:
    #Tareas a realizar
else:
    #Tareas a realizar si no cumple la condicion
``` 

### Ejemplo
Dado un valor de una variable determinaremos que si es mayor de 2 le sumemos otro valor a este, en este caso. En caso de no cumplir esta condicion restarle un numero. 

## C, C++, Java, Javascript
```C++
    if(numberOne>2)
    {
        numberOne+=numberTwo;
    }
    else
    {
        numberOne-=numberTwo;
    }
```
## PHP
```php
    if($numberOne>2)
    {
        $numberOne+=$numberTwo;
    }
    else
    {
        $numberOne-=$numberTwo;
    }
```
## PYTHON
```python
    if numberOne>2:
        numberOne+=numberTwo
    else:
        numberOne-=numberTwo
```
## Condicion ELSE IF
Dentro de este tipo de condicion cubrimos el caso de que algo es cierto o si no lo es, la cual nos permitira realizar ciertas acciones que nosotros deseemos pero en el caso de que no suceda nosotros tendremos un **if** para realizar otra verificacion. Por lo cual encontraremos la palabra **else if**.


Dentro de la estructura encontraremos la palabra **IF** junto con el **ELSE IF**, que la sintaxis se manejara de la siguiente manera en todos los lenguajes.

**Nota:**Despues de este else if podemos tener otro else.

**En el caso de C, C++, Java, Javascript, Php**

``` C++
if(condicion){
    //Tareas a realizar
}
else if(condicion_nueva){
    //Tareas a realizar si no cumple la condicion y culple la condicio nueva
}
else{
    //Tareas a realizar si no cumplio alguna de las condiciones anteriores
}
```
**En el caso de Python**
```python
if condicion:
    #Tareas a realizar
elif:
    #Tareas a realizar si no cumple la condicion y cumple la condicion nueva
else:
    #Tareas a realizar si no cumplio alguna de las condiciones anteriores
``` 


### Ejemplo
Dado un valor de una variable determinaremos que si es mayor de 2 le sumemos otro valor a este, en este caso. En caso de no cumplir esta condicion restarle un numero si es menor a 4, sino multiplicarlo. 

## C, C++, Java, Javascript
```C++
    if(numberOne>2)
    {
        numberOne+=numberTwo;
    }
    else if(numberOne<4)
    {
        numberOne-=numberTwo;
    }
    else
    {
        numberOne*=numberTwo;
    }
```
## PHP
```php
    if($numberOne>2)
    {
        $numberOne+=$numberTwo;
    }
    else if($numberOne<4)
    {
        $numberOne-=$numberTwo;
    }
    else
    {
        $numberOne*=$numberTwo;
    }
```
## PYTHON
```python
    if numberOne>2:
        numberOne+=numberTwo
    elif numberOne<4:
        numberOne-=numberTwo
    else:
        numberOne*=numberTwo
```
## Condicion anidada
Una condicion anidada es aquella que esta compuesta de mas de una condicion consecutivamente, nos permite validar una condicion y dado esta condicion podemos hacer otras validaciones la estructura esta compuesta de las siguientes maneras.

## Estructura
```C++
    if condicionUno
        if condicionDos
```

```C++
    if condicionUno
    else if CondicionDos
```
## Codigo de Ejemplo
```C++
    if (numberOne<numberTwo)
    {
        if (numberTwo<10)
        {
            printf("Hola Amigo\n");
        }
    }
```
```C++
    if (numberOne<numberTwo)
    {
        //Nada
    }
    else if (numberTwo<10)
    {
        printf("Hola Amigo\n");
    }
```
```C++
    if (numberOne<numberTwo)
    {
        //Nada
    }
    else
    {
        if (numberTwo<10)
        {
            printf("Hola Amigo\n");
        }
    }
```
```C++
    if (numberOne<numberTwo)
    {
        //Nada
    }
    else if (numberTwo<10)
    {
        printf("Hola Amigo\n");
    }
```
Estos son ejemplos de como puede encontrar un if anidado
## Curiosidades
1. En el caso de python siempre que nosotros creamos un **if** debemos de usar **tabuladores** para tener codigo ordenado
2. En todos los lengujes en cada nueva condicion debemos de dejar un cierto espacio para diferenciar entre condiciones
3. Dentro de nuestros if's y else's nosotros podemos escribirlos sin llaves, pero estos solo tomara la primer linea que tengan despues de esto, si queremos que marquen mas pasos lo debemos usar entre llaves

```C++
    if(numberOne<2)
        numberOne++;
    else
        printf("Error");
```

```js
    if (numberOne<2){
        numberOne++;
        console.log("NumberOne"+numberOne);
    } 
    else{

        numberOne--;
        console.log("NumberOne"+numberOne);
    }
```

## Ejemplos
## C
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variableOne=5;
    if(variableOne<0)
    {
        printf("VaribleOne %d es menor a 0\n", variableOne);
    }
    else{
        printf("VariableOne es mayor a 0\n");
    }
}
```
## C++
```C++
#include <iostream>
using namespace std;

int main()
{
    int variableOne=-5;
    if(variableOne<0)
    {
        cout<<"VaribleOne "<<variableOne<<" es menor a 0\n";
    }
    else{
        printf("VariableOne es mayor a 0\n");
    }
}
```
## Java
```Java
public class Main {
    public static void main(String []args) {
        int variableOne=5;
        if(variableOne>0 && variableOne<6)
        {
            System.out.println("La variableOne="+ variableOne +" mayor a 0 y menor a 6");
        }
        else{
            System.out.println("La variable no esta entre el intervalo");
        }
    }
}
```
## Javascript
```js
var variableOne=5;
    if(variableOne==0 || variableOne<6)
    {
        console.log("La variableOne="+ variableOne +" es igual a 0 o es menor a 6");
    }
    else{
        console.log("La variable no esta entre el intervalo");
    }
```
## PHP
```php
<?php
$variableOne=5;
    if($variableOne>0 && $variableOne<6)
    {
        echo "La variableOne=". $variableOne ." mayor a 0 y menor a 6";
    }
    else{
        echo "La variable no esta entre el intervalo";
    }
?>
```
## Python
```python
variableOne=10
if variableOne>0 and variableOne<6:
    print("La variableOne=",variableOne, "es mayor a 0 y menor a 6")
elif variableOne==10:
    print("La variable es igual a 10")
```

## Switch Case
La declaración switch evalúa una expresión, comparando el valor de esa expresión con una instancia case, y ejecuta declaraciones asociadas a ese case, así como las declaraciones en los case que siguen.

```js
switch (expresión) {
  case valor1:
    //Declaraciones ejecutadas cuando el resultado de expresión coincide con el valor1
    break;
  case valor2:
    //Declaraciones ejecutadas cuando el resultado de expresión coincide con el valor2
    break;
  ...
  case valorN:
    //Declaraciones ejecutadas cuando el resultado de expresión coincide con valorN
    break;
  default:
    //Declaraciones ejecutadas cuando ninguno de los valores coincide con el valor de la expresión
    break;
}
```

## Tarea
Recuerda para estos ejercicios debes de usar min 3 lenguajes de programacion
1. Desarrolla un programa con respecto a una persona quiere comprar una bebida, recuerda la edad para comprar es de 18 y su nombre sea el tuyo
2. Compara 2 variables si A es menor a B imprimir que esta es menor depues multiplicarla por 2 e imprimir el resultado de multiplicarla por, si B es menor imprimir B es menor y sumarle 20 a esta e imprimir B, si ambas son iguales imprime son iguales y despues sumalas entre ellas e imprime su resultado.
3. Dada una variable entera imprime 10 mensajes diferentes, estos vaya del 0 al 9 usando if
4. Dada una variable entera imprime 10 mensajes diferentes, estos vaya del 0 al 9 usando switch case
5. Encuentra los errores del siguiente codigo que esta en C

```C++
#include<stdio.h>
#include<stdlib.h>

void main(){
    int valor
    print("Hola amigo el valor es ", valor);
    if(valor=0)
        printf("El valor es 0");
    else:
        printf("El resultado es diferente a 0") 
    return 0
}

```