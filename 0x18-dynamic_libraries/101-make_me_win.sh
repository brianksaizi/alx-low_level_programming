#!/bin/bash

# Load the LD_PRELOAD environment variable to use our shared library
export LD_PRELOAD=./winning_hook.so

# Run the gm program with your chosen numbers
./gm 9 8 10 24 75 9

