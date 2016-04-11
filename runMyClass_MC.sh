#!/bin/bash

DIRECTORY="$1"

for i in $DIRECTORY/GoATTrees_*.root; do
    ./build/bin/"$3" -f $i -P MainGoAT -D "$2" configfiles/Physics-MC.dat
	#echo $i
     mv $i "$3"
done
