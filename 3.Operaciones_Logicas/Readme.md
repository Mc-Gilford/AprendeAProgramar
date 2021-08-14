# Operaciones Logicas
Dentro del mundo de la programacion existe operaciones que se realizan en la vida diaria para obtener ciertos resultados deseados.
Estas con las basicas que encontramos desde el inicio de nuestra vida como la suma, resta, multiplicacion y division, y al igual mientras
mas avanzamos vamos aprendiendo nuevos tipos de estas asi como las que veremos a continuacion.

## Casteo

El casteo es un factor importante dentro de la porgramacion, en muchas ocasiones nos servira para convertir un tipo de variable a otra, pero es mas visible entre la conversion de float a int, int a float, entreo casi todo tipo de variable numerica.

## Suma

Dentro de la suma esta lo convecional que nosotros ya conocemos su uso, que es incrementar el valor sumandole otro. Para nuestros lenguajes lo hacemos de la siguiente forma.

### C
```C
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne + valueTwo;
```
### C++
```C++
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne + valueTwo;
```
### JAVA
```java
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne + valueTwo;
```
### JAVASCRIPT
```javascript
    var valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne + valueTwo;
```
### PHP
```php
    $valueOne=5; $valueTwo=3; $valueResult;
    $valueResult=$valueOne + $valueTwo;
```
### PYTHON
```python
    valueOne=5 
    valueTwo=3 
    valueResult=0
    valueResult=valueOne + valueTwo
```

## Resta

Dentro de la resta esta lo convecional que nosotros ya conocemos su uso, que es disminuir el valor quitandole otro. Para nuestros lenguajes lo hacemos de la siguiente forma.

### C
```C
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne - valueTwo;
```
### C++
```C++
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne - valueTwo;
```
### JAVA
```java
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne - valueTwo;
```
### JAVASCRIPT
```javascript
    var valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne - valueTwo;
```
### PHP
```php
    $valueOne=5; $valueTwo=3; $valueResult;
    $valueResult=$valueOne - $valueTwo;
```
### PYTHON
```python
    valueOne=5 
    valueTwo=3 
    valueResult=0
    valueResult=valueOne - valueTwo
```

## Multiplicacion o Producto

Dentro de la multiplicaion esta lo convecional que nosotros ya conocemos su uso, que es multiplicar el valor dado otro. Para nuestros lenguajes lo hacemos de la siguiente forma.

### C
```C
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne * valueTwo;
```
### C++
```C++
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne * valueTwo;
```
### JAVA
```java
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne * valueTwo;
```
### JAVASCRIPT
```javascript
    var valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne * valueTwo;
```
### PHP
```php
    $valueOne=5; $valueTwo=3; $valueResult;
    $valueResult=$valueOne * $valueTwo;
```
### PYTHON
```python
    valueOne=5 
    valueTwo=3 
    valueResult=0
    valueResult=valueOne * valueTwo
```

## Division

Dentro de la resta esta lo convecional que nosotros ya conocemos su uso, que es dividir el valor entre n partes. Para nuestros lenguajes lo hacemos de la siguiente forma.

### C
```C
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne / valueTwo;
```
### C++
```C++
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne / valueTwo;
```
### JAVA
```java
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne / valueTwo;
```
### JAVASCRIPT
```javascript
    var valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne / valueTwo;
```
### PHP
```php
    $valueOne=5; $valueTwo=3; $valueResult;
    $valueResult=$valueOne / $valueTwo;
```
### PYTHON
```python
    valueOne=5 
    valueTwo=3 
    valueResult=0
    valueResult=valueOne / valueTwo
```

## Modulo
En el caso del modulo es muy poco conocido, pero este es el residuo de una division por ejemplo los siguientes
```
En el caso de 5/2=1 nuestro modulo sera de 1 dado que 2 cabe 2 veces en 5 y nos sobra 1
En el caso de 4/2=0 nuestro modulo sera de 0 dado que 2 cabe 2 veces en 4 y nos sobra 0 
```
### C
```C
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne % valueTwo;
```
### C++
```C++
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne % valueTwo;
```
### JAVA
```java
    int valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne % valueTwo;
```
### JAVASCRIPT
```javascript
    var valueOne=5, valueTwo=3, valueResult;
    valueResult=valueOne % valueTwo;
```
### PHP
```php
    $valueOne=5; $valueTwo=3; $valueResult;
    $valueResult=$valueOne % $valueTwo;
```
### PYTHON
```python
    valueOne=5 
    valueTwo=3 
    valueResult=0
    valueResult=valueOne % valueTwo
```

## Exponencia
Dentro de la raiz esta lo convecional que nosotros ya conocemos su uso, que es el valor multiplicando entre n veces asi mismo. Para nuestros lenguajes lo hacemos de la siguiente forma.

Dentro de algunos de nuestros programas encontraremos importaciones o librerias especiales, que nos permitiran realizar nuestras exponencias.

### C
En el caso de C vamos a incluir una libreria llamada **math.h** para realizar la exponencia.
```C
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    int base=5, exponente=3, valueResult;
    valueResult=pow(base,exponente);
    }
```
### C++
En el caso de C++ va a compartir lo mismo que nuestro codigo anterior C, en este caso tambien incluiremos la libreria **math.h**
```C++
    #include <iostream>
    #include <math.h> 
    using namespace std;

    int main()
    {
    int base=5, exponente=3, valueResult;
    valueResult=pow(base,exponente);
    }
```
### JAVA
En el caso de Java se debe de hacer una importacion de la libreia Math en este caso lo podemos observar en el **import**
**Nota:** Podemos hacer la importacion como esta en el codigo con Math, o una importacion de varias paqueterias con lo que esta comentado
```java
//import java.lang.*;
import java.lang.Math;

public class MathDemo {
    public static void main(String[] args) { 
        int base=5, exponente=3, valueResult;
        valueResult= (int) Math.pow(base,exponente);
    }
}
```
### JAVASCRIPT
En JS encontramos con el mismo nombre que en el caso de Java, por lo cual vemos que algunas cosas en Js son similares en Java
```javascript
    var base=5, exponente=3, valueResult;
    valueResult=Math.pow(base,exponente);
```
### PHP
```php
    $base=5; $exponente=3; $valueResult;
    $valueResult=pow($base,$exponente);
```
### PYTHON
En python lo podemos halla de dos maneras mediante los simbolos ** y mediante la funcion pow
```python
    base=5 
    exponente=3 
    valueResultOne=0
    valueResultOne=base**exponente
    valueResultTwo=pow(base,exponente)

```

## Raiz

Dentro de la raiz esta lo convecional que nosotros ya conocemos su uso, que es hallar el numero que multiplicado por n veces obtendremos el resultado. Para nuestros lenguajes lo hacemos de la siguiente forma.

Dentro de algunos de nuestros programas encontraremos importaciones o librerias especiales, que nos permitiran realizar nuestras raices como en el caso anterior.

### C
En el caso de C vamos a incluir una libreria llamada **math.h** para realizar la raiz.
```C
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    int valueOne, valueResult;
    valueResult=sqrt(valueOne);
    }
```
### C++
En el caso de C++ va a compartir lo mismo que nuestro codigo anterior C, en este caso tambien incluiremos la libreria **math.h**
```C++
    #include <iostream>
    #include <math.h> 
    using namespace std;

    int main()
    {
    
    int valueOne, valueResult;
    valueResult=sqrt(valueOne);
    }
```
### JAVA
En el caso de Java se debe de hacer una importacion de la libreia Math en este caso lo podemos observar en el **import**
**Nota:** Podemos hacer la importacion como esta en el codigo con Math, o una importacion de varias paqueterias con lo que esta comentado
```java
//import java.lang.*;
import java.lang.Math;

public class MathDemo {
    public static void main(String[] args) { 
        int valueOne=5, valueResult;
        valueResult= (int) Math.sqrt(valueOne);
    }
}
```
### JAVASCRIPT
En JS encontramos con el mismo nombre que en el caso de Java, por lo cual vemos que algunas cosas en Js son similares en Java
```javascript
    var valueOne=5, valueResult;
    valueResult=Math.sqrt(valueOne);
```
### PHP
```php
    $base=5; $exponente=3; $valueResult;
    $valueResult=pow($base,$exponente);
```
### PYTHON
En este caso hacemos el import de la libreria math en python
```python
    import math
    valueOne=5 
    valueResultOne=math.sqrt(valueOne)
```
# Tabla de la verdad

Una tabla de verdad es una tabla que muestra el valor de verdad de una proposición compuesta, para cada combinación de verdad que se pueda asignar.

# Operadores Logicos

Para los operadores logicos lo que se utiliza para interpretarlos son los booleanos dado a que las respuestas que esperamos son cierto, o son falso. Por lo cual visto anteriormente recordemos que un **True** = 1 y **False** = 0

En el caso de Python usa tal cual las palabras **(not,and,or)**

## AND
Dentro de esta operacion nos indica que 2 o mas condiciones deben de cumplir que son verdaderos, para dar una respuesta **True** si uno de los datos es **False** resultara como falso, y si los 2 son falsos nos dara **False**

Ejemplo:

|  A  |  B  |  C  |
| -- | -- | -- |
|  1  |  1  |  1  |
|  1  |  0  |  0  |
|  0  |  1  |  0  |
|  0  |  0  |  0  |

En la mayoria de los programas vas a encontrarlos mediante las siguientes formas:
```
a && b
a and b
```

## OR
Dentro de esta operacion nos indica que solo valor de nuestras respuestas debe de ser **True** para dar una respuesta **True**, si ambos de los datos son **False** resultara como falso, y si los 2 son falsos nos dara **False**

Ejemplo:

|  A  |  B  |  C  |
| -- | -- | -- |
|  1  |  1  |  1  |
|  1  |  0  |  1  |
|  0  |  1  |  1  |
|  0  |  0  |  0  |

En la mayoria de los programas vas a encontrarlos mediante las siguientes formas:
```
a || b
a or b
```

## NOT
Dentro de esta operacion es negar un dato si es **True** sera **False** y si es **False** sera **True**

Ejemplo:

|  A  |  B  
| -- | -- 
|  0  |  1  |
|  1  |  0  |

En la mayoria de los programas vas a encontrarlos mediante las siguientes formas:
```
!a 
not a
```


**Nota:** Investiga las tablas de la verdad como lo son la NAND, NOR, XOR, XNOR. Y busca para que se ocupan estas tablas de la verdad.

## Diferencia
La diferencia se trata de que el valor sea diferente al valor que estamos asignando
```
a != 3
```

## Igualdad
Busca que el valor sea igual al valor que estamos asignando
```
a == 3
```

## Menor
Busca el valor que se menor al que estamos comparando (Todos los numeros menor a 3 por ejemplo 2.9)
```
a < 3
```

## Mayor
Busca el valor que se mayor al que estamos comparando (Todos los numeros mayor a 3 por ejemplo 3.1)
```
a > 3
```
## Menor igual
Busca el valor que se menor o igual al que estamos comparando (Todos los numeros mayor a 3 por ejemplo 3 o menos)
```
a <= 3
```

## Mayor igual
Busca el valor que se menor al que estamos comparando (Todos los numeros mayor a 3 por ejemplo 3 o mas)
```
a >= 3
```

## Extra 
### Javascript
Los operadores **===** y **!==** son los operadores de comparación estricta. Esto significa que si los operandos tienen tipos diferentes, no son iguales

``` Js
1 === "1" // false
1 !== "1"  // true
null === undefined // false
```

Los operadores **==** y **!=** son los operadores de comparación relajada. Es decir, si los operandos tienen tipos diferentes, JavaScript trata de convertirlos para que fueran comparables.

``` Js
1 == "1" // true
1 != "1" // false
null == undefined // true
```

# Contadores
Un contador nos permite incrementar o disminuir en una cantidad constante cada vez que sucede un evento predeterminado.
## Incremental
El objetivo de un contador incremental es ir aumentando su valor en un valor constante, en muchas ocasiones es usado en los arreglos para ver los elementos. Lo puedes encontra de tres formas diferentes.

```C++
    i++
    i+=1
    i=i+1

```

## Decremental
El objetivo de un contador decremental es ir disminuyendo su valor en un valor constante, en muchas ocasiones es usado en los arreglos para ver los elementos de arriba hacia abajo. Lo puedes encontra de tres formas diferentes.

```C++
    i--
    i-=1
    i=i-1

```

## Operaciones a una sola variable
Dentro de estas operaciones se encuentra procesos que antes de nuestro signo igual tenemos algunos operadores que estos actuaran con el valor que tenemos a lado de nuestro lado derecho de nuestro signo de igual. Por ejemplo:

``` C++
    int i = 0;
    i+=5;
```
Esto hara que a nuestro y le sumemos el valor de 5, por lo cual tendremos el siguiente valor
``` C++
    i = 5;
```

## Ejemplos
### C
En el caso de C compilar mediante el siguiente comando:
```powershell
gcc main.c -o main -lm
```

```C
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int numberOne=4, numberTwo=5;
    int resultSum= numberOne+numberTwo;
    int resultRest= numberOne-numberTwo;
    int resultMult= numberOne*numberTwo;
    int resultDiv= (float)(numberOne/numberTwo); // Casteo
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
```

**Nota:** Esto nos permite hacer la compilacion de la libreria **math.h**
### C++
Dentro de este tambien hacemos la importacion de la libreria **math.h**
```C++
#include <iostream>
#include <math.h>
using namespace std;

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

    cout<<"Suma "<< resultSum<<"\n";
    cout<<"Resta "<< resultRest<<"\n";
    cout<<"Multiplicacion "<< resultMult<<"\n";
    cout<<"Division "<< resultDiv<<"\n";
    cout<<"Modulo "<< resultMod<<"\n";
    cout<<"Exponencia "<< resultExp<<"\n";
    cout<<"Raiz "<< resultSqrt<<"\n";
}
```
### JAVA
Dentro de Java tambien hacemos importaciones
```Java
import java.lang.Math;

public class Main{
    public static void main(String[] args) { 
        int numberOne=4, numberTwo=5;
        int resultSum= numberOne+numberTwo;
        int resultRest= numberOne-numberTwo;
        int resultMult= numberOne*numberTwo;
        float resultDiv= (float)(numberOne/numberTwo); // Casteo
        int resultMod= numberOne%numberTwo;
        int resultExp= (int)(Math.pow(numberOne, numberTwo)); //Casteo
        int resultSqrt= (int)(Math.sqrt(numberOne)); //Casteo 

        System.out.println("Suma "+ resultSum);
        System.out.println("Resta "+ resultRest);
        System.out.println("Multiplicacion "+ resultMult);
        System.out.println("Division "+ resultDiv);
        System.out.println("Modulo "+ resultMod);
        System.out.println("Exponencia "+ resultExp);
        System.out.println("Raiz "+ resultSqrt);
    }
}
```
### JS
Si observamos aunque no hace un impor a una libreria, si tiene un metodo Math para usar
```JS
var numberOne=4, numberTwo=5;
var resultSum= numberOne+numberTwo;
var resultRest= numberOne-numberTwo;
var resultMult= numberOne*numberTwo;
var resultDiv= (numberOne/numberTwo);
var resultMod= numberOne%numberTwo;
var resultExp= Math.pow(numberOne, numberTwo);
var resultSqrt= Math.sqrt(numberOne);

console.log("Suma "+ resultSum);
console.log("Resta "+ resultRest);
console.log("Multiplicacion "+ resultMult);
console.log("Division "+ resultDiv);
console.log("Modulo "+ resultMod);
console.log("Exponencia "+ resultExp);
console.log("Raiz "+ resultSqrt);
```
### PHP
```PHP
<?php
$numberOne=4;
$numberTwo=5;
$resultSum= $numberOne+$numberTwo;
$resultRest= $numberOne-$numberTwo;
$resultMult= $numberOne*$numberTwo;
$resultDiv= ($numberOne/$numberTwo);
$resultMod= $numberOne%$numberTwo;
$resultExp= pow($numberOne, $numberTwo);
$resultSqrt= sqrt($numberOne);

echo "Suma ".$resultSum."\n";
echo "Resta ".$resultRest."\n";
echo "Multiplicacion ".$resultMult."\n";
echo "Division ".$resultDiv."\n";
echo "Modulo ".$resultMod."\n";
echo "Exponencia ".$resultExp."\n";
echo "Raiz ".$resultSqrt."\n";
?>
```
### PYTHON
```PYTHON
import math 
#En python no se podemos declarar dos variables seguidas, con una coma
numberOne=4
numberTwo=5
resultSum= numberOne+numberTwo
resultRest= numberOne-numberTwo
resultMult= numberOne*numberTwo
resultDiv= (numberOne/numberTwo)
resultMod= numberOne%numberTwo
resultExp= pow(numberOne, numberTwo)
resultSqrt= math.sqrt(numberOne)

print("Suma ", resultSum)
print("Resta ", resultRest)
print("Multiplicacion ", resultMult)
print("Division ", resultDiv)
print("Modulo ", resultMod)
print("Exponencia ", resultExp)
print("Raiz ", resultSqrt)
```
## Ejercicios
1. Realiza las operaciones basicas a tres variables creadas y guardalas en un resultado, imprime cada una de estas
2. Lee el siguiente articulo y con un ejemplo y tus palabras intenta explicarlo [Articulo](https://www.ibm.com/docs/es/netcoolomnibus/8.1?topic=SSSHTQ_8.1.0/com.ibm.netcool_OMNIbus.doc_8.1.0/omnibus/wip/admin/concept/omn_adm_sql_operatorprecedence.html)
3. Escribe con los operadores basicos +,-,*,/ las operaciones de una sola variable.
4. Crear 4 contadores, el primero debe de incrementar 2 y el segundo disminuir 2, en el tercer caso este debe triplicar su valor, y en el cuarto debe de hacer lo opuesto (Todo dentro de una linea de codigo).
5. Crea un programa que tenga una variable par y otra impar, y mediante alguno operacion crea la forma para saber si es par o impar.