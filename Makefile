CC=g++

test: a.cpp
	$(CC) a.cpp

clean:
	rm *.out
	rm *.~
	rm *.class
	rm *.o
