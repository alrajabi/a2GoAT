#!/bin/bash
#./startover moveback or ./startover runAR <carbon or butanol>  or ./startover runGoAT
S1='moveback'
S2='runAR'
S3='runGoAT'
S4='carbon'
S5='butanol'
S6='pi0'
S7='compton'
if [ "$1" = "$S1" ];then
        if [ "$2" = "$S5" ];then
		if [ "$3" = "$S6" ];then
			rm ../2nd_step/oneH/*.root
			rm ../2nd_step/zeroH/*.root
			mv ../1st_step/oneH/1/*.root ../1st_step/1/
			mv ../1st_step/oneH/2/*.root ../1st_step/2/
			mv ../1st_step/oneH/3/*.root ../1st_step/3/
			mv ../1st_step/oneH/4/*.root ../1st_step/4/
			mv ../1st_step/zeroH/5/*.root ../1st_step/5/
			mv ../1st_step/zeroH/6/*.root ../1st_step/6/
		elif [ "$3" = "$S7" ];then
			rm ../compton/2nd_step/oneH/*.root
			rm ../compton/2nd_step/zeroH/*.root
			mv ../compton/1st_step/oneH/1/*.root ../compton/1st_step/1/
			mv ../compton/1st_step/oneH/2/*.root ../compton/1st_step/2/
			mv ../compton/1st_step/oneH/3/*.root ../compton/1st_step/3/
			mv ../compton/1st_step/oneH/4/*.root ../compton/1st_step/4/
			mv ../compton/1st_step/zeroH/5/*.root ../compton/1st_step/5/
			mv ../compton/1st_step/zeroH/6/*.root ../compton/1st_step/6/
		fi	
	fi
	if [ "$2" = "$S4" ];then
		if [ "$3" = "$S6" ];then
			rm ../2nd_step/archive/*.root
			mv ../1st_step/archive/1/*.root ../1st_step/1/
			mv ../1st_step/archive/2/*.root ../1st_step/2/
			mv ../1st_step/archive/3/*.root ../1st_step/3/
		elif [ "$3" = "$S7" ];then
			rm ../compton/2nd_step/archive/*.root
			mv ../compton/1st_step/archive/1/*.root ../compton/1st_step/1/
			mv ../compton/1st_step/archive/2/*.root ../compton/1st_step/2/
			mv ../compton/1st_step/archive/3/*.root ../compton/1st_step/3/
		fi
	fi
fi
if [ "$1" = "$S2" ];then
	if [ "$2" = "$S5" ];then
		if [ "$3" = "$S6" ];then
			./runMyClass.sh ../1st_step/1 ../2nd_step/oneH ../1st_step/oneH/1&
			./runMyClass.sh ../1st_step/2 ../2nd_step/oneH ../1st_step/oneH/2&
			./runMyClass.sh ../1st_step/3 ../2nd_step/oneH ../1st_step/oneH/3&
			./runMyClass.sh ../1st_step/4 ../2nd_step/oneH ../1st_step/oneH/4&
			./runMyClass.sh ../1st_step/5 ../2nd_step/zeroH ../1st_step/zeroH/5&
                	./runMyClass.sh ../1st_step/6 ../2nd_step/zeroH ../1st_step/zeroH/6&
		elif [ "$3" = "$S7" ];then	
			./runMyClass.sh ../compton/1st_step/1 ../compton/2nd_step/oneH ../compton/1st_step/oneH/1&
			./runMyClass.sh ../compton/1st_step/2 ../compton/2nd_step/oneH ../compton/1st_step/oneH/2&
			./runMyClass.sh ../compton/1st_step/3 ../compton/2nd_step/oneH ../compton/1st_step/oneH/3&
			./runMyClass.sh ../compton/1st_step/4 ../compton/2nd_step/oneH ../compton/1st_step/oneH/4&
			./runMyClass.sh ../compton/1st_step/5 ../compton/2nd_step/zeroH ../compton/1st_step/zeroH/5&
                	./runMyClass.sh ../compton/1st_step/6 ../compton/2nd_step/zeroH ../compton/1st_step/zeroH/6&
		fi
	elif [ "$2" = "$S4" ];then
		if [ "$3" = "$S6" ];then
			./runMyClass.sh ../1st_step/1 ../2nd_step/archive ../1st_step/archive/1&
			./runMyClass.sh ../1st_step/2 ../2nd_step/archive ../1st_step/archive/2&
			./runMyClass.sh ../1st_step/3 ../2nd_step/archive ../1st_step/archive/3&
		elif [ "$3" = "$S7" ];then
			./runMyClass.sh ../compton/1st_step/1 ../compton/2nd_step/archive ../compton/1st_step/archive/1&
			./runMyClass.sh ../compton/1st_step/2 ../compton/2nd_step/archive ../compton/1st_step/archive/2&
			./runMyClass.sh ../compton/1st_step/3 ../compton/2nd_step/archive ../compton/1st_step/archive/3&
		fi		
	fi
fi
if [ "$1" = "$S3" ];then
	if [ "$2" = "$S5" ];then
		if [ "$3" = "$S6" ];then
			./runGoat.sh /home/al/output/split1 /home/al/analysis/1st_step/1 &
			./runGoat.sh /home/al/output/split2 /home/al/analysis/1st_step/2 &
			./runGoat.sh /home/al/output/split3 /home/al/analysis/1st_step/3 &
			./runGoat.sh /home/al/output/split4 /home/al/analysis/1st_step/4 &
			./runGoat.sh /home/al/output/split5 /home/al/analysis/1st_step/5 &
			./runGoat.sh /home/al/output/split6 /home/al/analysis/1st_step/6 &
		elif [ "$3" = "$S7" ];then
			./runGoat.sh /home/al/output/split1 /home/al/analysis/compton/1st_step/1 &
			./runGoat.sh /home/al/output/split2 /home/al/analysis/compton/1st_step/2 &
			./runGoat.sh /home/al/output/split3 /home/al/analysis/compton/1st_step/3 &
			./runGoat.sh /home/al/output/split4 /home/al/analysis/compton/1st_step/4 &
			./runGoat.sh /home/al/output/split5 /home/al/analysis/compton/1st_step/5 &
			./runGoat.sh /home/al/output/split6 /home/al/analysis/compton/1st_step/6 &
		fi
	elif [ "$2" = "$S4" ];then
		if [ "$3" = "$S6" ];then
			./runGoat.sh /media/al/MainzBackup/output/split1 /media/al/MainzBackup/output/1st_step/1 &
			./runGoat.sh /media/al/MainzBackup/output/split2  /media/al/MainzBackup/output/1st_step/2 &
			./runGoat.sh /media/al/MainzBackup/output/split3 /media/al/MainzBackup/output/1st_step/3 &
		elif [ "$3" = "$S7" ];then
			./runGoat.sh /media/al/MainzBackup/output/split1 ../compton/1st_step/1 &
			./runGoat.sh /media/al/MainzBackup/output/split2  ../compton/1st_step/2 &
			./runGoat.sh /media/al/MainzBackup/output/split3 ../compton/1st_step/3 &
		fi
	fi
fi

