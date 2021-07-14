 Target name : Quiz Game
CC=gcc
TARGET=main

# Document the code using Doxygen
doc:
	make -C ./documentation

	# Build and run the unit tests
# test:$(BUILD)
# 	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)

#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(INC) -o $(PROJECT_OUTPUT)
	./$(PROJECT_OUTPUT)


all:
	$(CC)	-Wall	-c	3_Implementation/src/Help.c	3_Implementation/src/ResetScore.c	3_Implementation/src/HighestScore.c	3_Implementation/src/ShowLandingPage.c	3_Implementation/src/main.c   
	$(CC)	-o	$(TARGET)	Help.o	ResetScore.o	HighestScore.o	ShowLandingPage.o	main.o	
clean:
	rm $(TARGET)