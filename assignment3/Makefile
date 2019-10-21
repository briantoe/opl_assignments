# CXX = g++
# CXXFLAGS = -Wall

# PROJECTNAME = problem1



# all: problem1 problem2 problem3
# problem1: problem1.cc


# clean:
# 	rm -rf *.out *~ 

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


all: bin problem1 
problem1:
	$(call compile,problem1)
add:
	$(call compile, ${ADD_TEST})
	$(call compile, ${SUB_TEST})

mult:
	$(call compile, ${MULT_TEST})

dec:
	$(call compile, ${DEC_TEST})

mux:
	$(call compile, ${MUX_TEST})

shift:
	$(call compile, ${SHIFT_TEST})

cmp:
	$(call compile, ${CMP_TEST})

bin:
	[[ -d ${BIN_DIR} ]] || mkdir ${BIN_DIR}

clean:
	rm -r ${BIN_DIR}/