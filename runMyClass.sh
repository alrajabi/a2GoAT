#!/bin/bash

DIRECTORY=../1st_step/"$1"

for i in $DIRECTORY/GoATTrees_*.root; do
    ./build/bin/AR_Class  -f $i -P MainGoAT -D ../2nd_step/"$2" configfiles/Physics-Pi0.dat
	#echo $i
     mv $i ../1st_step/"$2"/"$1"
done
