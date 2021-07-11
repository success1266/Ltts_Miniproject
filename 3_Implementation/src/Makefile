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
	$(CC)	-o	$(TARGET)	Help.o	ResetScore.o	HighestScore.o	ShowLandingPage.o	main.o	
clean:
	rm $(TARGET)