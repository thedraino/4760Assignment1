# Makefile

CC      = gcc
CFLAGS  = -g
TARGET  = prog1
OBJS    = prog1.o

$(TARGET): $(OBJS)
  $(CC) -o $(TARGET) $(OBJS)
  
prog.o: prog1.c
  $(CC) $(CFLAGS) -c prog.c
  
clean:
  /bin/rm -f *.o $(TARGET)
