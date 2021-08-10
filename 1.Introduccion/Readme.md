# Introduccion
Hola bienvenidos coders, en este curso vamos aprender como programar de forma basica
varios lenguajes de programacion con algunos pocos conceptos.
## Que es programacion
Es escribir una serie de reglas para que un dispositivo funcione segun nuestras necesidades
## Que es algoritmo
Es una serie de pasos que nosotros determinamos para solucionar un problema

![Algoritmo de hamburguesa](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/1.Introduccion/Image/hamburguesa.png)

## Lenguaje de programacion
Es el medio por la cual nosotros le damos instrucciones a una computadora para que realice acciones
la cual depende de la comunicacion entre usuario y computadora.
## Sintaxis
Es la forma en la que se debe de escribir correctamente un codigo
## Inicio de codigo
Empezaremos a ver como imprimir en diferentes lenguajes de programacion Php, JavaScript, Ruby,
Python, C, Java
### Php
```php
<?php
    echo "Hola mundo\n";
?>
```
### JavaScript
```Js
console.log("Hola mundo");
```
**Correr aplicacion**
```powershell
node holaMundo.js
```
### Java
```Java
class Inicio
{
    public static void main(String args[])
    {
        System.out.println("Hola mundo"); // Tambien se puede imprimir de esta forma, pero esrara en la misma linea System.out.print("Hola mundo");
    }
}
```
**Correr apliacion**
```powershell
java holaMundo.java
```
### Python
```Python
print("Hola mundo")
```
**Correr aplicacion**
```powershell
py holaMundo.py
```
### C
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Hola mundo\n");
return 0;
}
```
**Correr apliacion**
```powershell
gcc holaMundo.c -o holaMundo
./holaMundo
```

### C++
```C++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```
**Correr apliacion**
```powershell
g++ -o holaMundo2 holaMundo.cpp
./holaMundo2
```
## Tarea
1. Escribir un programa que imprima tu nombre como se ve a continuacion **(3 lenguajes diferentes)**
```powershell
Alejandro Perez Rodriguez
```
2. Escribir un programa que imprima un cuadro 4x4 como se ve a continuacion **(3 lenguajes diferentes)**
```powershell
* * * *
*     *
*     *
* * * *
```
3. Escribir un programa que imprima una escalera como se ve a continuacion **(3 lenguajes diferentes)**
```powershell
*
**
***
****
*****
```