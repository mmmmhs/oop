all: main
main: School.cpp Student.cpp main.cpp print.cpp School.h Student.h print.h
	g++ -o main School.cpp Student.cpp main.cpp print.cpp
clean: main
	rm main 
test: School.cpp Student.cpp main.cpp print.cpp School.h Student.h print.h
	g++ -g School.cpp Student.cpp main.cpp print.cpp -o test	
