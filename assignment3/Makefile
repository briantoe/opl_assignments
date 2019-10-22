SHELL = /bin/bash

CXX = g++
CXXFLAGS = -Wall

BIN_DIR=bin
SRC_DIR=src
LIB_DIRS=${SRC_DIR}
EXTENSION=.cc




define compile
  ${CXX} $(CXXFLAGS) $(addprefix , ${LIB_DIRS}/$1.cc) -o ${BIN_DIR}/$1.out
endef


all: bin problem1 problem5 problem6
problem1:
	$(call compile,problem1)

problem5:
	$(call compile,problem5)

problem6:
	$(call compile,problem6)

bin:
	[[ -d ${BIN_DIR} ]] || mkdir ${BIN_DIR}

clean:
	rm -r ${BIN_DIR}/