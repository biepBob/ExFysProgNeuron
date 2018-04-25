#Jago Coric
#s0140128
#makefile
#Due date: 30/03/2018

SHELL = /bin/bash
#Compiler
COMPILER = g++ -g -std=c++11 -Wall



all: neuron 

neuron: main.o Neuron.o 
	$(COMPILER) $^ -o $@ 

Neuron.o: Neuron.cpp Neuron.h 
	$(COMPILER) -c $< 

main.o: main.cpp Neuron.h
	$(COMPILER) -c $<






#clean up
clean:
	rm neuron *\.o

#git add files
gitadd:
	git add Neuron.cpp Neuron.h main.cpp
