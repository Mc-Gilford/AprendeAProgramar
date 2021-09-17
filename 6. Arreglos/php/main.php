<?php
// Your code here!
$cont=0;
for ($i=0; $i<2;$i++)
{
    for($j=0;$j<2;$j++)
    {
        $m[$i][$j]=$cont;
        echo $m[$i][$j];
        $cont++;
    }
    echo "\n";
}

$a = array(

array(1,2),

array(3, 4),

array(5, 6)

);

echo $a[2][1];

echo $a[0][0];
?>
