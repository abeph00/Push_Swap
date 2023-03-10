#!/bin/sh
if [ $# -eq 0 ]
then 
	read -p "Total de pruebas a realizar: " TOTAL
	read -p "Cantidad de números por prueba: " lenlist
elif [ $# -eq 1 ]
then
	TOTAL=$1
	lenlist=$1
elif [ $# -eq 2 ]
then
	TOTAL=$1
	lenlist=$2
else
	echo "Demasiados argumentos"
	exit
fi

var=0;
echo "realizando pruebas..."

for i in $(seq $TOTAL)
do
	ARG=$(seq -$lenlist $lenlist | sort -R | head -n $lenlist | tr '\n' ' ')
	#echo $ARG
	ret=$(./push_swap $ARG | wc -l)
	ret2=$(./push_swap $ARG | ./checker_mac $ARG )
	var=$(($ret + $var))
	echo "$ret -----> $ret2"
	if [ $(($i % 10)) -eq 0 ]
	then
		echo "..."
	fi
done

echo Media de pasos necesarios: $(($var / $TOTAL))
