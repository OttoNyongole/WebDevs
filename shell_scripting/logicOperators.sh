#!/bin/bash
read -p 'Enter a: ' a
read -p 'Enter b: ' b

if(($a == "true" & $b == "true"))
then 
echo both are true
else
	echo both are not true
fi

if(($a == "true" || $b == "true"))
then
	echo At least one of them is true
else
	echo None of the is true
fi

if((! $a == "true" ))
then
	echo "a" was initially false
else
	echo "a" was initially true
fi
