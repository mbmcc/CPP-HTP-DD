3.3: main.3.3.o
	g++ -std=c++14 main.3.3.o -o gradebook3.3

main.3.3.cpp.o: main.3.3.cpp
	g++ --std=c++14 c main.3.3.cpp

3.1: main.3.1.o
	g++ -std=c++14 main.3.1.o -o gradebook3.1

main.3.1.cpp.o: main.3.1.cpp
	g++ --std=c++14 c main.3.1.cpp
clean:
	rm *.o gradebook3.1 
