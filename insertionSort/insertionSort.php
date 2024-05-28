<?php
$arr = [2, 1, 3, 34, 7, 4, 5, 6, 9, 64, 34, 25, 12, 22, 11, 90];
$len = count($arr);

for ($i = 0; $i < $len; $i++) {
    echo $arr[$i] . ' ';
}

function InsertSort(&$list, $len)
{
    for ($i = 1; $i < $len - 1; $i++) {
        $clave = $list[$i];
        $j = $i - 1;
        while ($j >= 0 && $list[$j] > $clave) {
            $list[$j + 1] = $list[$j];
            $j = $j - 1;
        }
        $list[$j + 1] = $clave;
    }
     return $list;

}
 
InsertSort($arr, $len);


 echo PHP_EOL;

for ($i = 0; $i < $len; $i++) {
    echo $arr[$i] . ' ';
}