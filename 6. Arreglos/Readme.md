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

Investiga como se hacen los ultimos mencionados.

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

Estos tipos de arreglos tienen dos indices el cual nos va a decir nuestro movimiento en "x" y en "y", esto es muy parecido cuando veiamos posiciones de un plano cartesiano. Cada elemento guarda un valor establecido mediante el elemento y los dos indices.

``` java
m[i][j]=0
```

![Arreglo Bidimensional](https://github.com/McGilfordJose/AprendeAProgramar/blob/main/6.%20Arreglos/img/arreglobidi.png)

### C, C++
``` c++
/*Matriz estaticos*/
int vectorDos[2][2] = {{1,2},{1,2}};
```
``` c++
/*Dinamico*/
int **matriz;
matriz = (int **)malloc (FILAS*sizeof(int *));

for (i=0;i<FILAS;i++)
matriz[i] = (int *) malloc (COLS*sizeof(int));
```

## JAVA
``` java
int [][]vectorDos = {{1,2},{1,2}};
```

``` c++
int [][]vectorDos = new int[x][y];
```

### JAVASCRIPT
```js
var items = [
  [1, 2],
  [3, 4],
  [5, 6]
];
print(items[0][0]); // 1
print(items);
```

```js
var x = new Array(3);

for (var i = 0; i < x.length; i++) {
  x[i] = new Array(3);
}

var cont=0;
for(var i=0; i<x.length;i++)
    for(var j=0; j <x[i].length;j++)
    {
        x[i][j]=cont;
        print(x[i][j]);
        cont++;
    }
print(x);
```

### PHP
```php
$valor [0] [0] = 1; $valor [0] [1] = 14; $valor [0] [2] = 8; $valor [0] [3] = 3;

$valor [1] [0] = 6; $valor [1] [1] = 19; $valor [1] [2] = 7; $valor [1] [3] = 2;

$valor [2] [0] = 3; $valor [2] [1] = 13; $valor [2] [2] = 4; $valor [2] [3] = 1;

$a = array(

array(1,2),

array(3, 4),

array(5, 6)

);

echo $a[2][1];

echo $a[0][0];


```
### Python
```python
matriz = [
	[1, 2, 3],
	[4, 5, 6],
	[7, 8, 9]
]
print(matriz)
for i in range(3):
    for j in range(3):
        print(matriz[i][j])
```

### Ejercicios
1. Crea un programa donde dado un arreglo se imprima del ultimo al primero
2. Saca el promedio de un arreglo
3. Calcula la suma de 2 matrices 
4. Calcula la resta de 2 matrices