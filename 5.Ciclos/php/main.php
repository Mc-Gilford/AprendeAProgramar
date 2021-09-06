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