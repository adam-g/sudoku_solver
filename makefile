#
# Makefile for Sudokusolver

# Diagnosmeddelanden från kompilatorn (g++) filtreras av gccfilter.
CCC = g++
SDL= -lSDL -lSDL_image -lSDL_mixer

# Kompilatorflaggor, lägg till '-g' om kompilering för avlusning ska göras.
CCFLAGS += -g -std=gnu++11 -Wpedantic -Wall -Wextra -Werror -lSDL -lSDL_image -lSDL_mixer

# Preprocessorflaggor, -I lägger till en filkatalog i inkluderingssökvägen.
#CPPFLAGS += -I$(CHARACTER)

# Länkflaggor - Fix för att lösa lokala problem med C++ länkbibliotek.
LDFLAGS  += -L/sw/gcc-$(GCC4_V)/lib -static-libstdc++ 

# Objektkodsmoduler som ingår i den kompletta kalkylatorn.

OBJECTS = main.o SudokuBoard.o

# Huvudmål - skapas med kommandot 'make' eller 'make kalkylator'.
Sudokosolver: $(OBJECTS) makefile
	$(CCC) $(CCFLAGS) $(LDFLAGS) -o Sudokosolver $(OBJECTS) ${SDL}

# Delmål (flaggan -c avbryter innan länkning, objektkodsfil erhålls)
main.o: main.cpp
	$(CCC) $(CCFLAGS) -c main.cpp

Sudoku.o: SudokuBoard.h SudokuBoard.cc
	$(CCC) $(CCFLAGS) -c SudokuBoard.cc


# 'make clean' tar bort objektkodsfiler och 'core' (minnesdump).
clean:
	@ \rm -rf *.o *.gch core

# 'make zap' tar även bort det körbara programmet och reservkopior (filer
# som slutar med tecknet '~').
zap: clean
	@ \rm -rf test *~

# Se upp vid eventuell ändring, '*' får absolut inte finnas för sig!!!
#
# '@' medför att kommandot inte skrivs ut på skärmen då det utförs av make.
# 'rm' är ett alias för 'rm -i' på IDA:s system, '\rm' innebär att "original-
# versionen", utan flaggan '-i', används. 
