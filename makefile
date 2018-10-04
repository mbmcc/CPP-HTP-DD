gradebook: main.o
	g++ -std=c++14 main.o -o gradebook

main.o: main.cpp
	g++ --std=c++14 -c main.cpp

clean:
	rm *.o gradebook 
