# Declare some variables to help construct our compile command
CC=g++         # the compiler
LIBS=-lm       # the libraries we will ref - m is the math library

# Link object files to create executable
Tut1Driver: Tut1Driver.o
	$(CC) -o Tut1Driver Tut1Driver.o #$(LIBS)  -add this here if want to use the mentioned libraries and can replace $(CC) with g++
 
# Compile .cpp and .h files
Tut1Driver.o: Tut1Driver.cpp
	$(CC) -c -o Tut1Driver.o Tut1Driver.cpp 

# run command
run:
	./Tut1Driver

# deletes all the object code files
clean:
	@rm -f *.o
	@rm Tut1Driver
