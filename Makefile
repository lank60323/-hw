main: main.o math_utils.o
    gcc -o main main.o math_utils.o

main.o: main.c math_utils.h
    gcc -c main.c
math_utils.o: math_utils.c math_ntils.h
    gcc -c math_utils.c
.PHONY: clean
clean:
    rm -f main *.o
