# Operaciones Logicas
Dentro del mundo de la programacion existe operaciones que se realizan en la vida diaria para obtener ciertos resultados deseados.
Estas con las basicas que encontramos desde el inicio de nuestra vida como la suma, resta, multiplicacion y division, y al igual mientras
mas avanzamos vamos aprendiendo nuevos tipos de estas asi como las que veremos a continuacion.

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
```python
    valueOne=5 
    valueResultOne=sqrt(valueOne)
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
## Decremental

## Operaciones a una sola variable