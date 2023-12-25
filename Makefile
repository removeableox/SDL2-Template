CC = g++

INCLUDE = -I ./include

LIBS = -lSDL2 -lSDL2_image

 main:
	${CC} -o main ./src/*.cpp ${INCLUDE} ${LIBS}