# Variables y tipos de variable (tipo de dato)

## Que es un dato
Un dato es informacion de algo **(un atributo o valor)**
## Que es una variable
Las variables son un lugar donde nosotros almacenamos informacion (que se guarda en un espacio de memoria). Estas pueden tener cualquier nombre que nosotros le asignemos al menos que este reservada
## Variable Global y Local
- **Global** Es una variable que se puede utilizar en todo el codigo
- **Local** Es una variable que se puede usar dentro de un segmento de codigo

## Ejemplo Varible GlobaL y Local
``` C
#include <stdlib.h>
#include <stdio.h>

long l=1020303234;

int main()
{
    int i=1;
    //l=5;
    //long l=2;
    printf("INT %d\n", i);
    printf("LONG %ld\n", l);
}
```
``` javascript
var x = 5;

function main()
{
    //let x=3;
    console.log(x);
}

main();
```
**Nota:** Las variables globales son todas aquellas que no estan encerradas dentro de un segmento de codigo, como en el caso de ***l*** en este ejemplo.

## Estructura al crear una variable

En la programacion es muy usual tener las siguiente estructuras al crear variables en algunos lenguajes puede variar.
## C, C++, JAVA
TIPO DE VARIABLE + NOMBRE DE VARIABLE + ASIGNACION 
```
    tipo_de_variable nombre_de_variable = asignacion
```
## JAVASCRIPT
DECLARACION DE VARIABLE + NOMBRE DE VARIABLE + ASIGNACION 
```
    declaracion_de_variable nombre_de_variable = asignacion
```
## PYTHON Y PHP
NOMBRE DE VARIABLE + ASIGNACION 
```
    nombre_de_variable = asignacion
```
**Nota:** Nosotros podemos darle cualquier nombre a una variable

## Tipos de variables
### **INT** Estos son numeros enteros por ejemplo : 1,2,3,...,etc. Este tipo de variable solo puede tener valores de -2^31 y 2^31-1 que son +2147483647 y -2147483648.
### C
```C
    int v = 1;
```
### C++
```C++
    int v = 1;
```
### JAVA
```JAVA
    int v = 1;
```
### JAVASCRIPT
```javascript
    var v = 1;
    // let v = 1; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = 1;
```
### PYTHON
```python
    v = 1
```
### **LONG** Estos son numeros enteros por ejemplo : 1,2,3,...,etc. Este tipo de variable solo puede tener valores de -2.147.483.648 hasta 2.147.483.647
### C
```C
    long v = 1;
```
### C++
```C++
    long v = 1;
```
### JAVA
```JAVA
    long v = 1;
```
### JAVASCRIPT
```javascript
    var v = 1;
    // let v = 1; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = 1;
```
### PYTHON
```python
    v = 1
```
### **FLOAT** Estos son numeros con decimales por ejemplo: 1.1,2.101,3.3003,...,etc. Sus valores maximo y minimo son 1.175494351E-38	3.402823466E+38. Estos son valores que obtiene en 32 bytes
### C
```C
    float v = 1.3;
```
### C++
```C++
    float v = 1.3;
```
### JAVA
```JAVA
    float v = 1.3f;
```
### JAVASCRIPT
```javascript
    var v = 1.3;
    // let v = 1.3; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = 1.3;
```
### PYTHON
```python
    v = 1.3
```
### **DOUBLE** Estos son numeros con decimales por ejemplo: 1.1,2.101,3.3003,...,etc. Sus valores maximo y minimo son 2.2250738585072014E-308	1.7976931348623158E+308. Estos son valores que obtien en 64 bytes
### C
```C
    double v = 1.3;
```
### C++
```C++
    double v = 1.3;
```
### JAVA
```JAVA
    double v = 1.3d;
```
### JAVASCRIPT
```javascript
    var v = 1.3;
    // let v = 1.3; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = 1.3;
```
### PYTHON
```python
    v = 1.3
```
### **BOOLEAN** Estos definen si algo es falso o verdadero (false y true)
### C
```C
    bool v = false;
```
### C++
```C++
    bool v = true;
```
### JAVA
```JAVA
    boolean v = false;
```
### JAVASCRIPT
```javascript
    var v = true;
    // let v = false; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = false;
```
### PYTHON
```python
    v = True
```
**Nota:** En el caso de los booleanos al imprimirlos en C nos dara 1 y 0, esto es porque en sistemas el **1 es true** y **0 es false**.

### **CHAR** Estos definen un caracter
### C
```C
    char v = 'c';
```
### C++
```C++
    char v = 'c';
```
### JAVA
```JAVA
    char v = 'c';
```
### JAVASCRIPT
```javascript
    var v = "c";
    // let v = c; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = "c";
```
### PYTHON
```python
    v = "c"
```
### **STRING** Estos definen una cadena de caracteres
### C
```C
    char *v = "Hola Mundo";
    char s[4] = "Hola";
```
### C++
```C++
    char *v = "Hola Mundo";
    char s[4] = "Hola";
    string str = "Hola Amigo";
```
### JAVA
```JAVA
    String v = "Hola Mundo";
```
### JAVASCRIPT
```javascript
    var v = "Hola mundo";
    // let v = c; esto dentro de una parte especifica del codigo
```
### PHP
```php
    $v = "Hola Mundo";
```
### PYTHON
```python
    v = "Hola mundo"
```
### **CONSTANTES FINALES** Son valores que son constantes (Que no pueden cambiar su valor)
### C
```C
    #define v "Hola Mundo";
```
### C++
```C++
    const string v = "Hola Mundo";
    const int b = 5;
```
### JAVA
```JAVA
    static final String v = "Hola Mundo";
    static final int b = 5;
```
### JAVASCRIPT
```javascript
    const v = "Hola mundo";
    // let v = c; esto dentro de una parte especifica del codigo
```
### PHP
```php
    const v = "Hola Mundo";
```
### PYTHON
Creamos un archivo llamado a.py dentro de nuestra carpeta donde tenemos nuestro codigo principal (main.py)
```python
# a.py
MY_CONSTANT = 50
```
Hacemos referencia al archivo que creamos con el comando **import name**
```python
# b.py
import a
print (a.MY_CONSTANT)
```
## IMPRIMIR UNA VARIABLE
Dentro de la programacion muchas ocaciones es necesario imprimir el valor de una variable y para esto usamos los siguientes metodos.

### C
En el caso de C es un caso particular y tenemos que usar diferente tipo de formas para imprimir cada tipo de variable.
```C
    #include <stdlib.h>
    #include <stdio.h>
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
        printf("%d\n", i); // Imprime el valor de i
        printf("%ld\n", l); // Imprime el valor de l
        printf("%f\n", f); // Imprime el valor de f
        printf("%lf\n", d); // Imprime el valor de d
        printf("%d\n", b); // Imprime el valor de b
        printf("%c\n", c); // Imprime el valor de c
        printf("%s\n", str); // Imprime el valor de str
        printf("%s\n", v); // Imprime el valor de v
    }
```
### C++
```C++
    #include <iostream>
    using namespace std;

    //#include <stdbool.h> //Libreria para booleanos

    int main()
    {
        int i=1;
        long l=1020303234;
        float f=1.2;
        double d=1.3;
        bool b = true;
        char c ='c';
        const int cons = 18;
        string str = "Hola Amigo";
        cout <<i<<"\n"; // Imprime i
        cout <<l<<"\n"; // Imprime l
        cout <<f<<"\n"; // Imprime f
        cout <<d<<"\n"; // Imprime d
        cout <<b<<"\n"; // Imprime b
        cout <<c<<"\n"; // Imprime c
        cout <<str<<"\n"; // Imprime str
        cout <<cons<<"\n"; // Imprime cons
    }
```
### JAVA
```JAVA
public class main {
    static final int stf=0;
    public static void main(String str[]) {
        int i=1;
        long l=1020303234l;
        float f=1.2f;
        double d=1.3d;
        boolean b = false;
        char c ='c';
        String s = "Hola Amigo";
        System.out.println(i); // Imprime i
        System.out.println(l); // Imprime l
        System.out.println(f); // Imprime f
        System.out.println(d); // Imprime d
        System.out.println(b); // Imprime b
        System.out.println(c); // Imprime c
        System.out.println(s); // Imprime s
        System.out.println(stf); // Imprime stf
    }
}

```
### JAVASCRIPT
```javascript
    var i=1;
    let l=1020303234;
    var f=1.2;
    var d=1.3;
    let b = false;
    var c ='c';
    const stf=10;
    //stf =15;
    let s = "Hola Amigo";
    console.log(i); // Imprime i
    console.log(l); // Imprime l
    console.log(f); // Imprime f
    console.log(d); // Imprime d
    console.log(b); // Imprime b
    console.log(c); // Imprime c
    console.log(s); // Imprime s
    console.log(stf); // Imprime stf
```
### PHP
```php
<?php
    $i=1;
    $l=1020303234;
    $f=1.12;
    $d=1.13;
    $b = false;
    $c ='c';
    const stf=10;
    //stf =15;
    $s = "Hola Amigo";
    echo "$i\n"; // Imprime i 
    echo "$l\n"; // Imprime l
    echo "$f\n"; // Imprime f
    echo "$d\n"; // Imprime d
    echo "$b\n"; // Imprime b
    echo "$c\n"; // Imprime c
    echo "$s\n"; // Imprime s
    echo stf."\n"; // Imprime stf
?>
```
### PYTHON
```python
import a
i=1
l=1020303234
f=1.2
d=1.3
b = False
c ='c'
s = "Hola Amigo"
print(i) # Imprime i
print(l) # Imprime l
print(f) # Imprime f
print(d) # Imprime d
print(b) # Imprime b
print(c) # Imprime c
print(s) # Imprime s
print(a.STF) # Imprime a.STF
```

## Concatenacion

La concatenacion es la union de 2 o mas variables para hacer una misma por ejemplo se puede concatenar una cadena y un numero, una cadena y otra cadena.

Se estructura puede constar de las siguientes formas

```
    Cadena+CualquierVariable
    CualquierVarible+Cadena
```

**Investigue como concatenar en cada uno de los lenguajes y realiza un programa concatenando un string con un string y un string con un tipo de varible numerica. Recomendacion investiga como convertir numeros a string.**
Ejemplo
```
nombre = "Jose"
edad = 24

Salida: Jose 24
```

### EJEMPLOS
En estos ejemplo imprimiremos un mensaje que nos diga que tipo de variable estamos usando, junto con el valor de la variable que corresponda segun el tipo definido en el mensaje.

### C
Existe una forma para imprimir cada tipo de variable las cuales se ven a continuacion en el siguiente programa
```C
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
```

**Nota:** En los otros lenguajes de programacion nosotros ya no tenemos que imprimir cada variable de diferente forma. Pero en el momento de imprimir un mensaje junto con una variable puede ser que usemos un signo de **+** , o **,** o **.** despues del mensaje, esto nos permite unir el mensaje con nuestra variable.

### C++
```C++
    #include <iostream>
    using namespace std;

    //#include <stdbool.h> //Libreria para booleanos

    int main()
    {
        int i=1;
        long l=1020303234;
        float f=1.2;
        double d=1.3;
        bool b = true;
        char c ='c';
        const int cons = 18;
        string str = "Hola Amigo";
        cout <<"INT "<< i<<"\n";
        cout <<"LONG "<< l<<"\n";
        cout <<"FLOAT "<< f<<"\n";
        cout <<"DOUBLE "<< d<<"\n";
        cout <<"BOOLEAN "<< b<<"\n";
        cout <<"CHAR "<< c<<"\n";
        cout <<"STRING "<< str<<"\n";
        cout <<"CONSTANT "<< cons<<"\n";
    }
```
### JAVA
```JAVA
public class main {
    static final int stf=0;
    public static void main(String str[]) {
        int i=1;
        long l=1020303234l;
        float f=1.2f;
        double d=1.3d;
        boolean b = false;
        char c ='c';
        //int stf=10;
        //stf =10;
        String s = "Hola Amigo";
        System.out.println("INT "+i);
        System.out.println("LONG "+l);
        System.out.println("FLOAT "+f);
        System.out.println("DOUBLE "+d);
        System.out.println("BOOLEAN "+b);
        System.out.println("CHAR "+c);
        System.out.println("STRING "+s);
        System.out.println("CONSTANT "+stf);
    }
}

```
### JAVASCRIPT
```javascript
    var i=1;
    let l=1020303234;
    var f=1.2;
    var d=1.3;
    let b = false;
    var c ='c';
    const stf=10;
    //stf =15;
    let s = "Hola Amigo";
    console.log("INT "+i);
    console.log("LONG "+l);
    console.log("FLOAT "+f);
    console.log("DOUBLE "+d);
    console.log("BOOLEAN "+b);
    console.log("CHAR "+c);
    console.log("STRING "+s);
    console.log("CONSTANT "+stf);
```
### PHP
```php
<?php
    $i=1;
    $l=1020303234;
    $f=1.12;
    $d=1.13;
    $b = false;
    $c ='c';
    const stf=10;
    //stf =15;
    $s = "Hola Amigo";
    echo "INT $i\n";
    echo "LONG $l\n".$l;
    echo "FLOAT ".$f."\n";
    echo "DOUBLE ".$d."\n";
    echo "BOOLEAN $b \n";
    echo "CHAR ".$c."\n";
    echo "STRING ".$s."\n";
    echo "CONSTANT ".stf."\n";
?>
```
### PYTHON
```python
import a
i=1
l=1020303234
f=1.2
d=1.3
b = False
c ='c'
s = "Hola Amigo"
print("INT ",i)
print("LONG ",l)
print("FLOAT ",f)
print("DOUBLE ",d)
print("BOOLEAN ",b)
print("CHAR ",c)
print("STRING ",s)
print("CONSTANT ",a.STF)
```

## Asignacion de nuevo valor
Una vez creada una variable esta puede cambiar de valor por uno nuevo, esto es muy usual dentro de la programacion, dado a que luego ocupamos nuevos valores para realizar nuevas operaciones. Y se hace de la siguiente manera:

```
    nombre_de_la_variable = nuevo_valor
```

**Nota:** En todos los lenguajes es lo mismo pero recuerda respetar la sintaxis de cada uno de estos.

## Ejercicios
1. Desarrolla un programa que imprima los siguientes datos usando variables en 3 lenguajes(Es indispensable usar C y otros 2)
- Nombre(String)
- Edad(Int)
- Mayor de edad (Crea una variable booleana, en el caso de C que solo imprima 1 o 0).
- Peso(Float)
- Altura(Double)
- Tipo de sangre(Char en este caso solo tu tipo sin el signo de +, o negativo).

```powershell
     Nombre: Jose
     Edad: 24
     Mayor de edad: 1
     Peso: 68.2333
     Altura: 1.68
     Tipo de sangre: O
```

2. Desarrolla el mismo ejercicio pero que todo quede en una sola linea

```powershell
     Nombre: Jose,  Edad: 24, Mayor de edad: 1, Peso: 68.2333,  Altura: 1.68,Tipo de sangre: O
```

3. Describe con tus palabras la diferencia en **int** / **long**, y **float** / **double**.

4. Usa el ejercicio 1 para realizar este ejercicio y modifica los valores nuevos de las variables ya creadas e imprimelos despues del primer valor de las variables.
``` C
     Nombre: Jose
     Edad: 24
     Mayor de edad: 1 // True
     Peso: 68.2333
     Altura: 1.68
     Tipo de sangre: 
     
     Nombre: Mateo
     Edad: 25
     Mayor de edad: 0 // False
     Peso: 64.2333
     Altura: 1.70
     Tipo de sangre: A
```
