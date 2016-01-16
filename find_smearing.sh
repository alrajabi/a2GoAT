#!/bin/bash
cd ~/acqu/acqu_user
AcquRoot data/AR.dat
wait 10
cd ~/analysis/a2geant/pi0/Jan11
rm GoAT_input.root
hadd GoAT_input.root Acqu_SAID.root A2G4_SAID.root
cd ~/analysis/a2GoAT
./newStartover.sh MC pi0 runGoAT Jan11

