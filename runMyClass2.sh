#!/bin/bash

DIRECTORY="$1"

for i in $DIRECTORY/GoATTrees_CBTaggTAPS_*.root; do
    ./build/bin/"$4"  -f $i -p GoATTrees_CBTaggTAPS -P MainGoAT -D "$2" configfiles/Physics-Pi0.dat
	#echo $i
     mv $i "$3"
done
