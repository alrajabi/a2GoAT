#!/bin/bash
#./startover moveback or ./startover runAR <carbon or butanol>  or ./startover runGoAT
S1='moveback'
S2='runAR'
S3='runGoAT'
S4='carbon'
S5='butanol'
if [ "$1" = "$S1" ];then
        if [ "$2" = "$S5" ];then
		rm ../2nd_step/oneH/*.root
		rm ../2nd_step/zeroH/*.root
		mv ../1st_step/oneH/1/*.root ../1st_step/1/
		mv ../1st_step/oneH/2/*.root ../1st_step/2/
		mv ../1st_step/oneH/3/*.root ../1st_step/3/
		mv ../1st_step/oneH/4/*.root ../1st_step/4/
		mv ../1st_step/zeroH/5/*.root ../1st_step/5/
		mv ../1st_step/zeroH/6/*.root ../1st_step/6/
	fi
	if [ "$2" = "$S4" ];then
		rm ../2nd_step/archive/*.root
		mv ../1st_step/archive/1/*.root ../1st_step/1/
		mv ../1st_step/archive/2/*.root ../1st_step/2/
		mv ../1st_step/archive/3/*.root ../1st_step/3/
	fi
fi
if [ "$1" = "$S2" ];then
	if [ "$2" = "$S5" ];then
		./runMyClass.sh 1 oneH &
		./runMyClass.sh 2 oneH &
		./runMyClass.sh 3 oneH &
		./runMyClass.sh 4 oneH &
		./runMyClass.sh 5 zeroH &
                ./runMyClass.sh 6 zeroH &

	elif [ "$2" = "$S4" ];then
		./runMyClass.sh 1 archive &
		./runMyClass.sh 2 archive &
		./runMyClass.sh 3 archive &
	fi
fi
if [ "$1" = "$S3" ];then
	./runGoAT.sh &
fi

