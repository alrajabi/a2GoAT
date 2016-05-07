#!/bin/bash

DIRECTORY="$1"

for i in $DIRECTORY/GoATTrees_*.root; do
    ./build/bin/"$4"  -f $i -P MainGoAT -D "$2" configfiles/Physics-Pi0-HM-2015.dat
	#echo $i
     mv $i "$3"
done
