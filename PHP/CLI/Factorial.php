<?php
$n = readline("Enter a number: ");
$fact = 1;
for($i=$n; $i>=1; $i--)
{
    $fact = $fact * $i; 
}
echo "Factorial of $n is $fact.\n";