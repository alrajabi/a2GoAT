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
		cd ~/results/AR_Compton_Output/Butanol/oneH/
    		$ROOTSYS/bin/hadd MainGoAT_comp_oneH.root *.root
  		mv MainGoAT_comp_oneH.root /home/al/analysis/TestEnv/"$3"/
		cd ~/results/AR_Compton_Output/Butanol/zeroH/
        	$ROOTSYS/bin/hadd MainGoAT_comp_zeroH.root *.root
		mv MainGoAT_comp_zeroH.root /home/al/analysis/TestEnv/"$3"/
		cd ~/results/AR_Compton_Output/Carbon/
        	$ROOTSYS/bin/hadd MainGoAT_comp_carbon.root *.root
		mv MainGoAT_comp_carbon.root /home/al/analysis/TestEnv/"$3"/
	elif [ "$2" = "$S6" ];then
                cd ~/results/AR_Pi0_Output/Butanol/oneH/
                $ROOTSYS/bin/hadd MainGoAT_pi0_oneH.root *.root
                mv MainGoAT_pi0_oneH.root /home/al/analysis/TestEnv/"$3"/
                cd ~/results/AR_Pi0_Output/Butanol/zeroH/
                $ROOTSYS/bin/hadd MainGoAT_pi0_zeroH.root *.root
                mv MainGoAT_pi0_zeroH.root /home/al/analysis/TestEnv/"$3"/
                cd ~/results/AR_Pi0_Output/Carbon/
                $ROOTSYS/bin/hadd MainGoAT_pi0_carbon.root *.root
                mv MainGoAT_pi0_carbon.root /home/al/analysis/TestEnv/"$3"/
	else
		echo "Sorry wrong options"
	fi	
elif [ "$1" = "$S1" ];then
	if [ "$2" = "$S6" ];then
		mv ~/results/Pi0_GoAT_Output/Butanol/oneH/1/*.root ~/results/Pi0_GoAT_Output/Butanol/1
		mv ~/results/Pi0_GoAT_Output/Butanol/oneH/2/*.root ~/results/Pi0_GoAT_Output/Butanol/2
		mv ~/results/Pi0_GoAT_Output/Butanol/oneH/3/*.root ~/results/Pi0_GoAT_Output/Butanol/3
		mv ~/results/Pi0_GoAT_Output/Butanol/zeroH/4/*.root ~/results/Pi0_GoAT_Output/Butanol/4
		mv ~/results/Pi0_GoAT_Output/Carbon/archive/1/*.root ~/results/Pi0_GoAT_Output/Carbon/1
		mv ~/results/Pi0_GoAT_Output/Carbon/archive/2/*.root ~/results/Pi0_GoAT_Output/Carbon/2
		mv ~/results/Pi0_GoAT_Output/Carbon/archive/3/*.root ~/results/Pi0_GoAT_Output/Carbon/3
		mv ~/results/Pi0_GoAT_Output/Carbon/archive/4/*.root ~/results/Pi0_GoAT_Output/Carbon/4
		rm ~/results/AR_Pi0_Output/Butanol/oneH/*.root
		rm ~/results/AR_Pi0_Output/Butanol/zeroH/*.root
		rm ~/results/AR_Pi0_Output/Carbon/*.root
	elif [ "$2" = "$S7" ];then
		mv ~/usb/2015_bin/compton/Butanol/1/archive/*.root ~/usb/2015_bin/compton/Butanol/1
		mv ~/usb/2015_bin/compton/Butanol/2/archive/*.root ~/usb/2015_bin/compton/Butanol/2
		mv ~/usb/2015_bin/compton/Butanol/3/archive/*.root ~/usb/2015_bin/compton/Butanol/3
		mv ~/usb/2015_bin/compton/Butanol/4/archive/*.root ~/usb/2015_bin/compton/Butanol/4
		mv ~/usb/2015_bin/compton/Butanol/5/archive/*.root ~/usb/2015_bin/compton/Butanol/5
                mv ~/usb/2015_bin/compton/Butanol/6/archive/*.root ~/usb/2015_bin/compton/Butanol/6
		mv ~/results/Compton_GoAT_Output/Carbon/1/archive/*.root ~/results/Compton_GoAT_Output/Carbon/1
		mv ~/results/Compton_GoAT_Output/Carbon/2/archive/*.root ~/results/Compton_GoAT_Output/Carbon/2
		mv ~/results/Compton_GoAT_Output/Carbon/3/archive/*.root ~/results/Compton_GoAT_Output/Carbon/3
		mv ~/results/Compton_GoAT_Output/Carbon/4/archive/*.root ~/results/Compton_GoAT_Output/Carbon/4
		rm /dev/extra/oneH/*.root
		rm /dev/extra/zeroH/*.root
		rm /dev/extra/Carbon/*.root
	else 
		echo "Sorry you picked wrong options"
	fi		
#fi
elif [ "$1" = "$S2" ];then
	if [ "$2" = "$S6" ];then
		if [ "$3" = "$S5" ];then	
			./runMyClass.sh ~/results/Pi0_GoAT_Output/Butanol/1 /dev/extra/Butanol/zeroH ~/results/Pi0_GoAT_Output/Butanol/1/archive AR_Class& 
                        ./runMyClass.sh ~/results/Pi0_GoAT_Output/Butanol/2 /dev/extra/Butanol/zeroH ~/results/Pi0_GoAT_Output/Butanol/2/archive AR_Class& 
                        ./runMyClass.sh ~/results/Pi0_GoAT_Output/Butanol/3 /dev/extra/Butanol/zeroH ~/results/Pi0_GoAT_Output/Butanol/3/archive AR_Class& 
                        ./runMyClass.sh ~/results/Pi0_GoAT_Output/Butanol/4 /dev/extra/Butanol/zeroH ~/results/Pi0_GoAT_Output/Butanol/4/archive AR_Class&
		elif [ "$3" = "$S4" ];then
			./runMyClass.sh ~/results/Pi0_GoAT_Output/Carbon/1 ~/results/AR_Pi0_Output/Carbon ~/results/Pi0_GoAT_Output/Carbon/1/archive AR_Class&
			./runMyClass.sh ~/results/Pi0_GoAT_Output/Carbon/2 ~/results/AR_Pi0_Output/Carbon ~/results/Pi0_GoAT_Output/Carbon/2/archive AR_Class&
                        ./runMyClass.sh ~/results/Pi0_GoAT_Output/Carbon/3 ~/results/AR_Pi0_Output/Carbon ~/results/Pi0_GoAT_Output/Carbon/3/archive AR_Class&
                        ./runMyClass.sh ~/results/Pi0_GoAT_Output/Carbon/4 ~/results/AR_Pi0_Output/Carbon ~/results/Pi0_GoAT_Output/Carbon/4/archive AR_Class&         
		fi
	elif [ "$2" = "$S7" ];then
		if [ "$3" = "$S5" ];then	
			./runMyClass.sh ~/usb/2015_bin/compton/Butanol/1 /dev/extra/Butanol/oneH ~/usb/2015_bin/compton/Butanol/1/archive AR_Compton& 
                        ./runMyClass.sh ~/usb/2015_bin/compton/Butanol/2 /dev/extra/Butanol/oneH ~/usb/2015_bin/compton/Butanol/2/archive AR_Compton& 
                        ./runMyClass.sh ~/usb/2015_bin/compton/Butanol/3 /dev/extra/Butanol/oneH ~/usb/2015_bin/compton/Butanol/3/archive AR_Compton& 
                        #./runMyClass.sh ~/usb/2015_bin/compton/Butanol/4 /dev/extra/Butanol/zeroH ~/usb/2015_bin/compton/Butanol/4/archive AR_Compton&
			#./runMyClass.sh ~/usb/2015_bin/compton/Butanol/5 /dev/extra/Butanol/zeroH ~/usb/2015_bin/compton/Butanol/5/archive AR_Compton &
                        #./runMyClass.sh ~/usb/2015_bin/compton/Butanol/6 /dev/extra/Butanol/zeroH ~/usb/2015_bin/compton/Butanol/6/archive AR_Compton &
		elif [ "$3" = "$S4" ];then
			./runMyClass.sh ~/results/Compton_GoAT_Output/Carbon/1 ~/results/AR_Compton_Output/Carbon ~/results/Compton_GoAT_Output/Carbon/1/archive AR_Compton&
			./runMyClass.sh ~/results/Compton_GoAT_Output/Carbon/2 ~/results/AR_Compton_Output/Carbon ~/results/Compton_GoAT_Output/Carbon/2/archive AR_Compton&
                        ./runMyClass.sh ~/results/Compton_GoAT_Output/Carbon/3 ~/results/AR_Compton_Output/Carbon ~/results/Compton_GoAT_Output/Carbon/3/archive AR_Compton&
                        ./runMyClass.sh ~/results/Compton_GoAT_Output/Carbon/4 ~/results/AR_Compton_Output/Carbon ~/results/Compton_GoAT_Output/Carbon/4/archive AR_Compton&         
		fi
	else 
		echo "Sorry you picked wrong options"
	fi
#fi
elif [ "$1" = "$S3" ];then
	if [ "$2" = "$S6" ];then
		if [ "$3" = "$S4" ];then
			./runGoat.sh /media/al/750gb/CarbonOutput/1 ~/results/Pi0_GoAT_Output/Carbon/1 /media/al/750gb/CarbonOutput/archive/1 GoAT-Pi0.dat &
			./runGoat.sh /media/al/750gb/CarbonOutput/2 ~/results/Pi0_GoAT_Output/Carbon/2 /media/al/750gb/CarbonOutput/archive/2 GoAT-Pi0.dat &
              	        ./runGoat.sh /media/al/750gb/CarbonOutput/3 ~/results/Pi0_GoAT_Output/Carbon/3 /media/al/750gb/CarbonOutput/archive/3 GoAT-Pi0.dat &
                	./runGoat.sh /media/al/750gb/CarbonOutput/4 ~/results/Pi0_GoAT_Output/Carbon/4 /media/al/750gb/CarbonOutput/archive/4 GoAT-Pi0.dat &
		elif [ "$3" = "$S5" ];then
			#./runGoat.sh ~/Acqu_output/archive ~/usb/2015_bin/pi0 ~/Acqu_output/archive/archive GoAT-Pi0.dat &
			./runGoat.sh ~/Acqu_output/archive/1 ~/results/Pi0_GoAT_Output ~/Acqu_output/archive/archive GoAT-Pi0.dat &
                        ./runGoat.sh ~/Acqu_output/archive/2 ~/results/Pi0_GoAT_Output ~/Acqu_output/archive/archive GoAT-Pi0.dat &
                        ./runGoat.sh ~/Acqu_output/archive/3 ~/results/Pi0_GoAT_Output ~/Acqu_output/archive/archive GoAT-Pi0.dat &
                        ./runGoat.sh ~/Acqu_output/archive/4 ~/results/Pi0_GoAT_Output ~/Acqu_output/archive/archive GoAT-Pi0.dat &
                	#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split2 ~/results/Pi0_GoAT_Output/Butanol/2 /media/al/MainzBackup/Butanol2014/AcquOutput/split2/archive GoAT-Pi0.dat &
                	#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split3 ~/results/Pi0_GoAT_Output/Butanol/3 /media/al/MainzBackup/Butanol2014/AcquOutput/split3/archive GoAT-Pi0.dat &
                	#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split4 ~/results/Pi0_GoAT_Output/Butanol/4 /media/al/MainzBackup/Butanol2014/AcquOutput/split4/archive GoAT-Pi0.dat &
		fi
	elif [ "$2" = "$S7" ];then
		if [ "$3" = "$S4" ];then
			./runGoat.sh /media/al/750gb/CarbonOutput/1 ~/results/Compton_GoAT_Output/Carbon/1 /media/al/750gb/CarbonOutput/archive/1 GoAT-Compton.dat &
			./runGoat.sh /media/al/750gb/CarbonOutput/2 ~/results/Compton_GoAT_Output/Carbon/2 /media/al/750gb/CarbonOutput/archive/2 GoAT-Compton.dat &
              	        ./runGoat.sh /media/al/750gb/CarbonOutput/3 ~/results/Compton_GoAT_Output/Carbon/3 /media/al/750gb/CarbonOutput/archive/3 GoAT-Compton.dat &
                	./runGoat.sh /media/al/750gb/CarbonOutput/4 ~/results/Compton_GoAT_Output/Carbon/4 /media/al/750gb/CarbonOutput/archive/4 GoAT-Compton.dat &
		elif [ "$3" = "$S5" ];then
			./runGoat.sh ~/Acqu_output/1 ~/usb/2015_bin/compton ~/Acqu_output/archive/1 GoAT-Compton.dat &
			./runGoat.sh ~/Acqu_output/2 ~/usb/2015_bin/compton ~/Acqu_output/archive/2 GoAT-Compton.dat &
			./runGoat.sh ~/Acqu_output/3 ~/usb/2015_bin/compton ~/Acqu_output/archive/3 GoAT-Compton.dat &
			./runGoat.sh ~/Acqu_output/4 ~/usb/2015_bin/compton ~/Acqu_output/archive/4 GoAT-Compton.dat &

			#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split2 ~/results/Compton_GoAT_Output/Butanol/2 /media/al/MainzBackup/Butanol2014/AcquOutput/split2/archive GoAT-Compton.dat &
			#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split3 ~/results/Compton_GoAT_Output/Butanol/3 /media/al/MainzBackup/Butanol2014/AcquOutput/split3/archive GoAT-Compton.dat &
			#./runGoat.sh /media/al/MainzBackup/Butanol2014/AcquOutput/split4 ~/results/Compton_GoAT_Output/Butanol/4 /media/al/MainzBackup/Butanol2014/AcquOutput/split4/archive GoAT-Compton.dat &
		fi
	fi
else 
	echo "Sorry you picked wrong options"
fi
