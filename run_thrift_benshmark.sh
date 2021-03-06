#!/bin/bash

#THIS_DIR=$(dirname "$0")
#cd "$THIS_DIR"
#echo $THIS_DIR
#echo "Host: $(hostname)"

NUM_SAMPLES=20
NUM_MESSAGES=10000
SUFFIX=$RANDOM

#TEST_RESULT=/avg_latency-$SUFFIX.txt
TEST_RESULT=${PWD}/avg_latency
SERVER_RESULT=${TMPDIR:-/tmp}/server_result-$SUFFIX.txt

echo "Test result in $TEST_RESULT"
#echo "Server result in $SERVER_RESULT"

if [ -f $TEST_RESULT ] 
  then
	echo "Renaming and creating new avg_latency file"
	mv $TEST_RESULT $TEST_RESULT-$SUFFIX
	touch $TEST_RESULT
  else
	echo "Creating avg_latency file"
    touch $TEST_RESULT
fi

for((i = 0; i < 20; i++)) {
	./ThriftClient 10000 localhost >> $TEST_RESULT
}

awk 'BEGIN { n=0; } { sum+=$0; val[n]=$0; n+=1; } END { avg = sum / n; sd = 0; for (i=0;i<n;i++) { sd += (val[i] - avg)^2; }; sd = sqrt(sd/(n-1)); print "Durchschnitt:\t\t" avg; print "Standard Deviation:\t" sd; }' "$TEST_RESULT"
