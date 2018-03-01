.PHONY: default all clean

default: all

all: c-main.e

c-main.e: c-main.o f-sum.o
	gcc $^ -o $@ 

f-sum.o: f-sum.f90
	gcc -c $<

c-main.o: c-main.c  c-sum.h
	gcc -c $<

clean:
	rm -rfv c-main.o f-sum.o c-main.e


