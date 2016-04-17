#!/bin/bash

DIRECTORY="$1"

for i in $DIRECTORY/GoATTrees*.root; do
    ./build/bin/AR_MC -f $i -P MainGoAT -D "$2" configfiles/Physics-MC.dat
	#echo $i
    # mv $i "$3"
done
