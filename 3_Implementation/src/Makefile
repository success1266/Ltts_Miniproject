 Target name : Quiz Game
#<TAB> command 

src = main.c src/Help.c src/HighestScore.c src/ResetScore.c
INC = inc

target : $(src) $(inc)
	gcc $(src) -I$(inc) -o new.out

run : target
	.\new.out

clean :
	rm new.out