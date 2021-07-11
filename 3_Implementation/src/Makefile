 Target name : Quiz Game
#<TAB> command 

# src = main.c src/Help.c src/HighestScore.c src/ResetScore.c
# INC = inc

# target : $(src) $(inc)
# 	gcc $(src) -I$(inc) -o new.out

# run : target
# 	.\new.out

# clean :
# 	rm new.out

CC=gcc
TARGET=main

all:
	$(CC)	-Wall	-c	3_Implementation/src/Help.c	3_Implementation/src/ResetScore.c	3_Implementation/src/HighestScore.c	3_Implementation/src/ShowLandingPage.c	3_Implementation/src/main.c   
	$(CC)	-o	$(TARGET)	3_Implementation/src/Help.o	3_Implementation/src/ResetScore.o	3_Implementation/src/HighestScore.o	3_Implementation/src/ShowLandingPage.o	3_Implementation/src/main.o	
clean:
	rm $(TARGET)