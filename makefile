SHELL = /bin/bash
#Compiler
COMPILER = g++ -g -std=c++11 -Wall



all: neuron

neuron: main.o  Neuron.o  Neuron.h
	$(COMPILER) $^ -o $@ 

Neuron.o: Neuron.cpp Neuron.h 
	$(COMPILER) -c $<

main.o: main.cpp  Neuron.h
	$(COMPILER) -c $<






#clean up
clean:
	rm neuron *\.o

#git add files
gitadd:
	git add main.cpp Neuron.h Neuron.cpp makefile
