#!/bin/bash
wget -O /tmp/jackpot.so https://github.com/mwanikigachanja/alx-low_level_programming/blob/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
