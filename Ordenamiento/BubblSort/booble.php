<?php
$arr = [2, 1, 3, 34, 7, 4, 5, 6, 9, 64, 34, 25, 12, 22, 11, 90];

// print_r($arr);

$lenth = count($arr);
$aux;
for ($i = 0; $i < $lenth; $i++) {
    echo $arr[$i] . ' ';

}
//  echo $lenth;

for ($i = 0; $i < $lenth - 1; $i++) {
    for ($j = 0; $j < $lenth - $i - 1; $j++) {
        if ($arr[$j] > $arr[$j + 1]) {
            $aux = $arr[$j];
            $arr[$j] = $arr[$j + 1];
            $arr[$j + 1] = $aux;
        }

    }

}
echo PHP_EOL;

for ($i = 0; $i < $lenth; $i++) {
    echo $arr[$i] . ' ';

}