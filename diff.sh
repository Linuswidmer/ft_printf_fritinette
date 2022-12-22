#!/bin/bash

for arg in INT_TEST_ U_INT_TEST_ STR_TEST_ CHAR_TEST_ HEX_TEST_LOW_ HEX_TEST_UPPER_ PRINT_TEST_ POINTER_TEST_ MIXED_TEST_
do \
  for number in 0 1 2 3 4 5 6 7 8 9
  do \
# ``    DIFF = $(diff "test_outputs/${arg}${number}_FT.output" "test_outputs/${arg}${number}_ORG.output")
    # DIFF = $(diff "test_outputs/${arg}${number}_FT.output" "test_outputs/${arg}${number}_ORG.output") \
    # if [DIFF]
    echo "${arg} ${number}"
		diff "test_outputs/${arg}${number}_FT.output" "test_outputs/${arg}${number}_ORG.output"; \
	  # fi
  done 
done
