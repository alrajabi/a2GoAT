#!/bin/bash
DIRECTORY=/media/external/Ali  #~/output

for i in $DIRECTORY/Acqu_CBTaggTAPS_*.root; do
    #./build/bin/AR_Class  -f $i -P MainGoAT -D /home/al/analysis/2nd_step configfiles/Physics-Pi0.dat
	#echo $i
    ./build/bin/goat -f $i -D ~/analysis/1st_step -p Acqu_CBTaggTAPS -P GoATTrees configfiles/GoAT-Pi0.dat 
done
