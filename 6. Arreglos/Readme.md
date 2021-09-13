# Arreglo
Es un conjunto de datos del mismo tipo el cual comparte un mismo nombre pero esta diferenciado cada uno de estos por un indice.

Es un conjunto de datos finito y del mismo tipo.  En realidad funciona como cualquier variable cualquiera , excepto que en lugar de almacenar un solo valor, guarda algunos valores.

En los arreglos existen diferentes tipos, unidimensionales, bidimensionales, etc..

Pero en el mundo de la programacion es muy normal utilizar solo los arreglos unidimensionales o bidimensionales, no constante si puedes toparte con otro tipo.

## Arreglo Unidimensional
Un arreglo se define como una colección finita, homogénea y ordenada de elementos como se ha definido antes pero se caracteriza por ser unidimensional porque tiene una solo dimensión.

Un arreglo tiene la característica de que puede almacenar a N elementos del mismo tipo y además permite el acceso a cada uno de estos elementos. Se distinguen dos partes en los arreglos:

- Los componentes. Hacen referencia a los elementos que componen o forman el arreglo. Es decir, son los valores que se almacenan en cada una de sus casillas.

- Los índices. Son los que permiten acceder a los componentes del arreglo en forma individual. Es decir, la posición dentro del arreglo.



![Arreglo Unidimensional](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/6.%20Arreglos/img/arreglo.png)


### C, C++, JAVA
``` c++
/*Arreglos estaticos*/
int vectorUno[] = {1,2,3,4,10,9,80,70,19};
int vectorDos[2] = {1,2};
```
Existen casos donde nosotros no queremos tener valores determinados, por lo cual usamos arreglos dinamicos, en el caso de C y java usamos otros.

``` c++
/*Caso C*/
int *x;
x = (int*)malloc(sizeof(int)*cantidad);
/*Caso Java*/
ArrayList <tipoDeDato> vector = new ArrayList<tipoDeDato>();
```

Investisga como se hacen los ultimos mencionados.

### JAVASCRIPT
```js
let cars = ["Saab", "Volvo", "BMW"];
let carsTwo = [];
carsTwo[0]= "Saab";
carsTwo[1]= "Volvo";
carsTwo[2]= "BMW";
const carsThree = new Array("Saab", "Volvo", "BMW");
```
### PHP
```php
$cars = array("Volvo", "BMW", "Toyota");
$array = array(
    "foo" => "bar",
    "bar" => "foo",
);
```
### Python
```python
Array = [1,2,3,4]
```

## Arreglo bidimensional
Los arreglos bidimensionales son tablas de valores. Cada elemento de un arreglo bidimensional está simultáneamente en una fila y en una columna.

![Arreglo Bidimensional](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/6.%20Arreglos/img/arreglobidi.png)
