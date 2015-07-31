#!/bin/bash
DIRECTORY=~/analysis/1st_step/2

for i in $DIRECTORY/GoATTrees_*.root; do
    ./build/bin/AR_Class  -f $i -P MainGoAT -D /home/al/analysis/2nd_step configfiles/Physics-Pi0.dat
    mv $i ~/analysis/1st_step/archive
done
