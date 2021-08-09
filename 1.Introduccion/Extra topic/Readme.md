# Tema Extras

## Pseudocodigo
Es la representacion escrita de un algorimo, este muestra la forma en texto de los paso a seguir para dar solucion a un problema.

### Ejemplo hamburguesa
En el ejemplo de la hamburguesa de la sesion pasada nosotros describimos como seria la preparacion de esta la cual fue la siguiente:

- Tomar tapa inferior de la hamburguesa
- Poner mayonesa a la tapa inferior
- Colocar la tapa inferior
- Poner el queso 
- Colocar la Carne
- Colocar el queso amarillo
- Colocar el jitomate
- Colocar la lechuga
- Colocar la lechuga
- Tomar tapa superior de la hamburguesa 
- Poner mayonesa a la tapa superior
- Colocar la tapa superior

**Como resultado nosotros obtenemos una hamburguesa**

## Diagrama de flujo
El diagram de flujo nos sirve para representar la logica de una tarea a realizar.
Consiste en la creacion de un diagrama donde define las acciones, los valores y las condiciones,
con el proposito de describir un proceso para que obtengamos un resultado.
Este esta compuesto de los siguientes componentes:
- **Inicio**. Es el punto donde empieza la logica de nuestro algoritmo o proceso a realizar
- **Proceso**. Describe la forma en que se realizara una accion o proceso
- **Toma de decision**. Nos permite definir que acciones se tomaran al llegar a un punto(condiciones)
- **Entrada de informacion**. Nos permite definir que valores van a llegar de entrada
- **Subprograma**. Indica el uso de funciones dentro de nuestro diagrama
- **Conector**. Es el elemento que nos permite hacer un vinculo entre los procesos en caso de que el diagrama sea grande.
### Simbologia
La simbologia se refiere a como debe de ser maquetado un diagrama de flujo

![Simbologi](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/1.Introduccion/Extra%20topic/img/simbology.png
)
### Ejemplo
Dentro de este ejemplo se ve como funciona un diagrama de flujo en la vida real.

![Algoritmo de cafe](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/1.Introduccion/Extra%20topic/img/example.png)

### Paginas
- [Draw io](https://app.diagrams.net/)
- [Dia](http://dia-installer.de/index.html.es)

### Ejercicio
Describe el proceso que debes de hacer para que una persona mayor de 18 años pueda comprar bebidas alcoholicas

## Comentarios en lenguajes de programacion

### Comentar una linea

### Php
```php
<?php
    // echo "Hola mundo\n";
?>
```

### JavaScript
```Js
// console.log("Hola mundo");
```

### Java
```Java
class Inicio()
{
    public static void main(String args[])
    {
       // System.out.println("Hola mundo"); // Tambien se puede imprimir de esta forma, pero esrara en la misma linea
    }
}
```

### Python
```Python
# print("Hola mundo")
```

### C
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
// printf("Hola mundo\n");
return 0;
}
```

### C++
```C++
#include <iostream>
using namespace std;

int main() {
// cout << "Hello World!";
  return 0;
}
```


### Comentar una segmento de codigo

### Php
```php
<?php
    /* 
    echo "Hola mundo\n";
    echo "Hola amigo";
    */
?>
```

### JavaScript
```Js
/* 
console.log("Hola mundo");
console.log("Hola mundo");
*/
```

### Java
```Java
class Inicio()
{
    public static void main(String args[])
    {
       /* 
       System.out.println("Hola mundo"); // Tambien se puede imprimir de esta forma, pero estara en la misma linea
       System.out.print("Hola mundo");
       */
    }
}
```

### Python
```Python
"""
   print("Hola mundo")
   print("Hola mundo")
"""
'''
   print("Hola mundo")
   print("Hola mundo")
'''
```

### C
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
/* 
printf("Hola mundo\n");
printf("Hola mundo\n"); 
*/
return 0;
}
```

### C++
```C++
#include <iostream>
using namespace std;

int main() {
/* 
cout << "Hello World!";
cout << "Hello World!";
*/
  return 0;
}
```