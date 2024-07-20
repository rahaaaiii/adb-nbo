all: add-nbo

add-nbo: main.o read_num.o
	gcc -o add-nbo main.o read_num.o

# 개별 소스 파일 컴파일 규칙
main.o: main.c read_num.h
	gcc -c -o main.o main.c

read_num.o: read_num.c read_num.h
	gcc -c -o read_num.o read_num.c

clean:
	rm -f add-nbo
	rm -f *.o

