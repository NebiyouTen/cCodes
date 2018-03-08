#	Makefile for program1

#	Written by: Cathy Bishop, September 16, 2014.

CC		=	gcc

CFLAGS	=	-Werror -I ../include 
LDFLAGS	=	

# Headers

HEADERS	=	stdio.h

# Source files

UTILSOURCE	=	utils1.c utils2.c 
SOURCE		=	program1.c ${UTILSOURCE}

# List all of the object files

UTILOBJECTS	=	stdio.o stdio.o 
OBJECTS		=	program1.o ${UTILOBJECTS}

# Specify the source with main and the executable file name

all: bitplay options1 options2

program1: ${OBJECTS} Makefile ${HEADERS}
	 ${CC} ${LDFLAGS} -o $@ ${OBJECTS} 

clean:
	rm -r ${OBJECTS} 

.SUFFIXES:
.SUFFIXES: .c .o .h

%.o : %.h 
%.o : %.c ;  ${CC} ${CFLAGS} -c $< -o $@ 

