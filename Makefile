##
# hclib
#
# @file
# @version 0.1

ARGS= -Wall -pedantic -std=c23

test: test/test.c
	gcc $(ARGS) test/test.c -o test/test.out

# end
