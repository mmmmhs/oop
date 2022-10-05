include control.mak
.PHONY: f1 f2 f3 f4 
CFLAGS = 
all: main

main: f1 f2 f3 f4 maino control.mak
	g++ -o main $(wildcard *.o)

f1: f1.cpp	
ifeq (TRUE, $(F1))
	g++ -c f1.cpp -o f1.o
CFLAGS += -D __F1__
endif

f2: f2.cpp	
ifeq (TRUE, $(F2))
	g++ -c f2.cpp -o f2.o
CFLAGS += -D __F2__	
endif

f3: f3.cpp	
ifeq (TRUE, $(F3))
	g++ -c f3.cpp -o f3.o
CFLAGS += -D __F3__	
endif

f4: f4.cpp	
ifeq (TRUE, $(F4))
	g++ -c f4.cpp -o f4.o
CFLAGS += -D __F4__	
endif

maino: main.cpp control.mak
	g++ -c main.cpp -o main.o $(CFLAGS)

clean: *.o
	del *.o; del main.exe