source: main.o Character.o Wizard.o Warrior.o Elf.o
	g++ -Wall -Werror -Wuninitialized -o source main.o Character.o Wizard.o Warrior.o Elf.o

main.o: main.cpp
	g++ -c -Wall -Werror -Wuninitialized main.cpp

Wizard.o: Wizard.cpp Wizard.h
	g++ -c -Wall -Werror -Wuninitialized Wizard.cpp

Warrior.o: Warrior.cpp Warrior.h
	g++ -c -Wall -Werror -Wuninitialized Warrior.cpp

Elf.o: Elf.cpp Elf.h
	g++ -c -Wall -Werror -Wuninitialized Elf.cpp

clean:
	rm *.o
	rm source