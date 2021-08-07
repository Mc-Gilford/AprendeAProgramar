# Variables y tipos de variable

## Que es un dato
Un dato es informacion de algo **(un atributo o valor)**
## Que es una variable
Las variables son un lugar donde nosotros almacenamos informacion (que se guarda en un espacio de memoria)
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
    int v = 1.3f;
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
    char v = "Hola Mundo";
    char s[4] = "Hola";
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
    const char v = "Hola Mundo";
```
### JAVA
```JAVA
    static final String v = "Hola Mundo";
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
### EXAMPLES
### C
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
