.PHONY: default all clean

default: all

all: f-main.e

f-main.e: f-main.o c-sum.o
	gcc $^ -o $@ -lgfortran 

f-main.o: f-main.f90
	gcc -c $<

c-sum.o: c-sum.c  c-sum.h
	gcc -c $<

clean:
	rm -rfv f-main.o c-sum.o f-main.e


