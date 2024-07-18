#Directory where files for compilation are placed
SRC_DIR = src

#OBJS specifies which files to compile as part of the project
OBJS = *.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -Wall

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2 -lSDL2_image

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = top-down-sandbox

#This is the target that compiles our executable
all : $(SRC_DIR)/$(OBJS)
	$(CC) $(SRC_DIR)/$(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

#This command will first compile and then run the executable file
run: all
	./$(OBJ_NAME)

#Remove the executable file 
clean:
	rm $(OBJ_NAME)