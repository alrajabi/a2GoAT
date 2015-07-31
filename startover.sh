#!/bin/bash
mv ../1st_step/archive/GoATTrees_34* ../1st_step/1/
mv ../1st_step/archive/GoATTrees_35* ../1st_step/2/
mv ../1st_step/archive/GoATTrees_36* ../1st_step/3/
./filebyfile.sh & 
./filebyfile2.sh &
./filebyfile3.sh 
