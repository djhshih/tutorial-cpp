#!/bin/bash
# Integrated testing on programs

set -euo pipefail
IFS=$'\n\t'

program=$1

res=$($program 1 2 3.5)
ans="sum: 6.5"

if [[ $res =~ $ans ]]; then
	echo "$1: success"
else
	echo "$1: failed"
fi
