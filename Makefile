# Makefile pour un programme simple en C
CC = gcc
CFLAGS = -Wall
LDFLAGS= -lm

# Règle pour la cible "mon_programme"
mon_programme: main.o functions.o arrays_handler.o
	$(CC) $(CFLAGS) -o mon_programme main.o functions.o arrays_handler.o $(LDFLAGS)

# Règle pour la cible "main.o"
main.o: main.c
	$(CC) $(CFLAGS) < -c main.c 

# Règle pour la cible "functions.o"
functions.o: functions.c 
	$(CC) $(CFLAGS) -c functions.c 

# Règle pour la cible "arrays_handler"
arrays_handler.o: arrays_handler.c
	$(CC) $(CFLAGS) -c arrays_handler.c

# Règle pour clean
clean: 
	rm -f mon_programme *.o