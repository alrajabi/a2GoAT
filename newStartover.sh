#!/bin/bash
#./startover build, moveback or ./startover runAR <pi0 or compton>  or ./startover runGoAT
S0='build'
S1='moveback'
S2='runAR'
S3='runGoAT'
S4='carbon'
S5='butanol'
S6='pi0'
S7='compton'
S8='sum'
S9='MC'
if [ "$1" = "$S0" ];then
	echo "now lets take care of "$1"ing for you, your Magesty.............................."
    cd build/
    make -j4
    cd ../
#fi  
elif [ "$1" = "$S9" ];then
	
	if [ "$2" = "$S6" ];then
		if [ "$3" = "$S3" ];then
			#cd ~/analysis/a2geant/"$2"/"$4"
			#hadd GoAT_input.root Acqu_*.root A2G4_*.root
			#cd ~/analysis/a2GoAT
			./build/bin/goat -f ../a2geant/pi0/"$4"/GoAT_input.root -D ../a2geant/pi0/"$4"/ -p GoAT_input -P GoATTrees configfiles/GoAT-Pi0.dat	
		elif [ "$3" = "$S2" ];then
			./build/bin/AR_Compton  -f ../a2geant/pi0/"$4"/GoATTrees.root -p GoATTrees -P MainGoAT -D ../a2geant/pi0/"$4"/ configfiles/Physics-Pi0.dat
		fi
	elif [ "$2" = "$S7" ];then
		if [ "$3" = "$S3" ];then
			./build/bin/goat -f ../a2geant/compton/"$4"/Acqu.root -D ../a2geant/compton/"$4"/ -p Acqu -P GoATTrees configfiles/GoAT-Pi0.dat	
		elif [ "$3" = "$S2" ];then
			./build/bin/AR_Compton  -f ../a2geant/compton/"$4"/GoATTrees.root -P MainGoAT -D ../a2geant/compton/"$4"/ configfiles/Physics-Pi0.dat
		fi
	else 
		echo "Sorry you picked wrong options"
	fi
elif [ "$1" = "$S8" ];then
	if [ "$2" = "$S7" ];then
		cd /home/al/analysis/compton/Butanol/2nd_step/oneH/
    		$ROOTSYS/bin/hadd MainGoAT_comp_oneH.root *.root
  		mv MainGoAT_comp_oneH.root /home/al/analysis/TestEnv/"$3"/
		cd /home/al/analysis/compton/Butanol/2nd_step/zeroH/
        	$ROOTSYS/bin/hadd MainGoAT_comp_zeroH.root *.root
		mv MainGoAT_comp_zeroH.root /home/al/analysis/TestEnv/"$3"/
		cd /home/al/analysis/compton/Carbon/2nd_step/archive/
        	$ROOTSYS/bin/hadd MainGoAT_comp_carbon.root *.root
		mv MainGoAT_comp_carbon.root /home/al/analysis/TestEnv/"$3"/
	elif [ "$2" = "$S6" ];then
                cd /home/al/analysis/pi0/Butanol/2nd_step/oneH/
                $ROOTSYS/bin/hadd MainGoAT_pi0_oneH.root *.root
                mv MainGoAT_pi0_oneH.root /home/al/analysis/TestEnv/"$3"/
                cd /home/al/analysis/pi0/Butanol/2nd_step/zeroH/
                $ROOTSYS/bin/hadd MainGoAT_pi0_zeroH.root *.root
                mv MainGoAT_pi0_zeroH.root /home/al/analysis/TestEnv/"$3"/
                cd /home/al/analysis/pi0/Carbon/2nd_step/
                $ROOTSYS/bin/hadd MainGoAT_pi0_carbon.root *.root
                mv MainGoAT_pi0_carbon.root /home/al/analysis/TestEnv/"$3"/
	else
		echo "Sorry wrong options"
	fi	
elif [ "$1" = "$S1" ];then
	if [ "$2" = "$S6" ];then
		rm ../pi0/Butanol/2nd_step/oneH/*.root
		rm ../pi0/Butanol/2nd_step/zeroH/*.root
		rm ../pi0/Carbon/2nd_step/*.root
		mv ../pi0/Butanol/1st_step/oneH/1/*.root ../pi0/Butanol/1st_step/1/
		mv ../pi0/Butanol/1st_step/oneH/2/*.root ../pi0/Butanol/1st_step/2/
		mv ../pi0/Butanol/1st_step/oneH/3/*.root ../pi0/Butanol/1st_step/3/
		mv ../pi0/Butanol/1st_step/zeroH/4/*.root ../pi0/Butanol/1st_step/4/
		mv ../pi0/Carbon/1st_step/archive/1/*.root ../pi0/Carbon/1st_step/1
		mv ../pi0/Carbon/1st_step/archive/2/*.root ../pi0/Carbon/1st_step/2
		mv ../pi0/Carbon/1st_step/archive/3/*.root ../pi0/Carbon/1st_step/3
		mv ../pi0/Carbon/1st_step/archive/4/*.root ../pi0/Carbon/1st_step/4
	elif [ "$2" = "$S7" ];then
		rm ../compton/Butanol/2nd_step/oneH/*.root
		rm ../compton/Butanol/2nd_step/zeroH/*.root
		rm ../compton/Carbon/2nd_step/archive/*.root
		mv ../compton/Butanol/1st_step/oneH/1/*.root ../compton/Butanol/1st_step/1/
		mv ../compton/Butanol/1st_step/oneH/2/*.root ../compton/Butanol/1st_step/2/
		mv ../compton/Butanol/1st_step/oneH/4/*.root ../compton/Butanol/1st_step/4/
		mv ../compton/Butanol/1st_step/zeroH/3/*.root ../compton/Butanol/1st_step/3/
		mv ../compton/Butanol/1st_step/zeroH/5/*.root ../compton/Butanol/1st_step/5/
		mv ../compton/Carbon/1st_step/archive/1/*.root ../compton/Carbon/1st_step/1/
		mv ../compton/Carbon/1st_step/archive/2/*.root ../compton/Carbon/1st_step/2/
	else 
		echo "Sorry you picked wrong options"
	fi		
#fi
elif [ "$1" = "$S2" ];then
	if [ "$2" = "$S6" ];then
		if [ "$3" = "$S5" ];then		
			./runMyClass.sh ../pi0/Butanol/1st_step/1 ../pi0/Butanol/2nd_step/oneH ../pi0/Butanol/1st_step/oneH/1 AR_Class&
			./runMyClass.sh ../pi0/Butanol/1st_step/2 ../pi0/Butanol/2nd_step/oneH ../pi0/Butanol/1st_step/oneH/2 AR_Class&
			./runMyClass.sh ../pi0/Butanol/1st_step/3 ../pi0/Butanol/2nd_step/oneH ../pi0/Butanol/1st_step/oneH/3 AR_Class&
			./runMyClass.sh ../pi0/Butanol/1st_step/4 ../pi0/Butanol/2nd_step/zeroH ../pi0/Butanol/1st_step/zeroH/4 AR_Class&
		elif [ "$3" = "$S4" ];then
	       		./runMyClass.sh ../pi0/Carbon/1st_step/1 ../pi0/Carbon/2nd_step ../pi0/Carbon/1st_step/archive/1 AR_Class&
              		./runMyClass.sh ../pi0/Carbon/1st_step/2 ../pi0/Carbon/2nd_step ../pi0/Carbon/1st_step/archive/2 AR_Class&
               		./runMyClass.sh ../pi0/Carbon/1st_step/3 ../pi0/Carbon/2nd_step ../pi0/Carbon/1st_step/archive/3 AR_Class&
               		./runMyClass.sh ../pi0/Carbon/1st_step/4 ../pi0/Carbon/2nd_step ../pi0/Carbon/1st_step/archive/4 AR_Class&
		fi
	elif [ "$2" = "$S7" ];then	
		#./runMyClass.sh ../compton/Butanol/1st_step/1 ../compton/Butanol/2nd_step/oneH ../compton/Butanol/1st_step/oneH/1 AR_Compton&
		#./runMyClass.sh ../compton/Butanol/1st_step/2 ../compton/Butanol/2nd_step/oneH ../compton/Butanol/1st_step/oneH/2 AR_Compton&
		#./runMyClass.sh ../compton/Butanol/1st_step/4 ../compton/Butanol/2nd_step/oneH ../compton/Butanol/1st_step/oneH/4 AR_Compton&
		./runMyClass.sh ../compton/Carbon/1st_step/1 ../compton/Carbon/2nd_step/archive ../compton/Carbon/1st_step/archive/1 AR_Compton& 
		./runMyClass.sh ../compton/Carbon/1st_step/2 ../compton/Carbon/2nd_step/archive ../compton/Carbon/1st_step/archive/2 AR_Compton& 
		#./runMyClass.sh ../compton/Carbon/1st_step/3 ../compton/Carbon/2nd_step/archive ../compton/Carbon/1st_step/archive/3 AR_Compton& 
		#./runMyClass.sh ../compton/Butanol/1st_step/3 ../compton/Butanol/2nd_step/zeroH ../compton/Butanol/1st_step/zeroH/3 AR_Compton&	
		#./runMyClass.sh ../compton/Butanol/1st_step/5 ../compton/Butanol/2nd_step/zeroH ../compton/Butanol/1st_step/zeroH/5 AR_Compton&	
	else 
		echo "Sorry you picked wrong options"
	fi
#fi
elif [ "$1" = "$S3" ];then
		#mv /home/al/output/split1/archive/*.root /home/al/output/split1
		#mv /home/al/output/split2/archive/*.root /home/al/output/split2
		#mv /home/al/output/split3/archive/*.root /home/al/output/split3
		#mv /home/al/output/split4/archive/*.root /home/al/output/split4
		#mv /home/al/output/split5/archive/*.root /home/al/output/split5
		#mv /home/al/output/split6/archive/*.root /home/al/output/split6
	if [ "$2" = "$S6" ];then
		#rm /home/al/analysis/1st_step/oneH/1/*.root
		#rm /home/al/analysis/1st_step/oneH/2/*.root
		#rm /home/al/analysis/1st_step/oneH/3/*.root
		#rm /home/al/analysis/1st_step/oneH/4/*.root
		#rm /home/al/analysis/1st_step/zeroH/5/*.root
		#rm /home/al/analysis/1st_step/zeroH/6/*.root	
		#./runGoat.sh /media/al/750gb/CarbonOutput/1 /home/al/analysis/pi0/Carbon/1st_step/1 /media/al/750gb/CarbonOutput/archive/1&
		./runGoat.sh /media/al/750gb/CarbonOutput/2 /home/al/analysis/pi0/Carbon/1st_step/2 /media/al/750gb/CarbonOutput/archive/2&
                ./runGoat.sh /media/al/750gb/CarbonOutput/3 /home/al/analysis/pi0/Carbon/1st_step/3 /media/al/750gb/CarbonOutput/archive/3&
                #./runGoat.sh /media/al/750gb/CarbonOutput/4 /home/al/analysis/pi0/Carbon/1st_step/4 /media/al/750gb/CarbonOutput/archive/4&
		#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split1 /home/al/analysis/pi0/Butanol/1st_step/1 /media/al/MainzBackup/Butanol2014/AcquOutput/split1/archive &
                #./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split2 /home/al/analysis/pi0/Butanol/1st_step/2 /media/al/MainzBackup/Butanol2014/AcquOutput/split2/archive &
                #./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split3 /home/al/analysis/pi0/Butanol/1st_step/3 /media/al/MainzBackup/Butanol2014/AcquOutput/split3/archive &
                #./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split4 /home/al/analysis/pi0/Butanol/1st_step/4 /media/al/MainzBackup/Butanol2014/AcquOutput/split4/archive &		
		#./runGoat.sh /home/al/output/split3 /home/al/analysis/1st_step/3 &
		#./runGoat.sh /home/al/output/split4 /home/al/analysis/1st_step/4 &
		#./runGoat.sh /home/al/output/split5 /home/al/analysis/1st_step/5 &
		#./runGoat.sh /home/al/output/split6 /home/al/analysis/1st_step/6 &
	elif [ "$2" = "$S7" ];then
		#rm /home/al/analysis/compton/Butanol/1st_step/oneH/1/*.root
		#rm /home/al/analysis/compton/Butanol/1st_step/oneH/2/*.root
		#rm /home/al/analysis/compton/Butanol/1st_step/oneH/3/*.root
		#rm /home/al/analysis/compton/Butanol/1st_step/oneH/4/*.root
		#rm /home/al/analysis/compton/Butanol/1st_step/zeroH/5/*.root
		#rm /home/al/analysis/compton/Butanol/1st_step/zeroH/6/*.root
		./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split1 /home/al/analysis/compton/Butanol/1st_step &
		./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split2 /home/al/analysis/compton/Butanol/1st_step &
		./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split3 /home/al/analysis/compton/Butanol/1st_step &
		#./runGoat.sh /media/al/MainzBackup/CarbonOutput /home/al/analysis/compton/Carbon/1st_step &
		#./runGoat.sh /home/al/output/split3 /home/al/analysis/compton/1st_step/3 &
		#./runGoat.sh /home/al/output/split4 /home/al/analysis/compton/1st_step/4 &
		#./runGoat.sh /home/al/output/split5 /home/al/analysis/compton/1st_step/5 &
		#./runGoat.sh /home/al/output/split6 /home/al/analysis/compton/1st_step/6 &
	fi
else 
	echo "Sorry you picked wrong options"
fi
