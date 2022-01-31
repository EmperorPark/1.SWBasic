all: 06_main.exe

06_main.exe: 06_main.o 06_fileSplitComplie.o
	gcc -o ./06_main.exe 06_main.o 06_fileSplitComplie.o

06_fileSplitComplie.o: 06_fileSplitComplie.h 06_fileSplitComplie.c
	gcc -c -o ./06_fileSplitComplie.o ./06_fileSplitComplie.c

06_main.o: 06_main.c
	gcc -c -o ./06_main.o ./06_main.c

clean:
	del /Q /F 06_main.exe *.o