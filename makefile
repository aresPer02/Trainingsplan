run_main: build ./build/main
	./build/main

./build/main: ./build/main.o ./build/exercise.o ./build/menu.o
	gcc -o ./build/main -lc ./build/main.o ./build/exercise.o ./build/menu.o

./build/%.o: ./src/%.c
	gcc -g -Wall -o $@ -c $<

build:
	mkdir ./build