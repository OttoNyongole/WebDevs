#!/bin/bash
read -p 'Enter a: ' a
read -p 'Enter b: ' b

add=$((a + b))
echo Addition of a and b are $add

sub=$((a - b))
	echo Substraction of a and b are $sub

mult=$((a * b))
	echo Multiplication o a and b are  $mult

mod=$((a % b))
	echo Modulus of a and b are $mod

div=$((a / b))
	echo divission of a and b are $div

((++a))
	echo Increment operator when applied on "a" into a=$a

((--b))
	echo Decrement operator when applied on "b" into b = $b

