# Declare some variables to help construct our compile command
CC=g++         # the compiler
LIBS=-lm       # the libraries we will ref - m is the math library

# Create the executable .exe first
Tut1Driver: Tut1Driver.o dbEngine.o
	$(CC) -o Tut1Driver Tut1Driver.o dbEngine.o $(LIBS)
 
# dbEngine.o needed
dbEngine.o: dbEngine.cpp dbEngine.h
	$(CC) -c -o dbEngine.o dbEngine.cpp

# Driver file needed
Tut1Driver.o: Tut1Driver.cpp 
	$(CC) -c -o Tut1Driver.o Tut1Driver.cpp

#dbEngine.o: dbEngine.cpp dbEngine.h	
#	$(CC) -c -o Tut1Driver.o Tut1Driver.cpp 

# run command
run:
	./Tut1Driver

# deletes all the object code files
clean:
	@rm -f *.o
	@rm Tut1Driver
