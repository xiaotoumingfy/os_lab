#
# Students' Makefile for the Malloc Lab
#

CC = gcc -g
CFLAGS = -Wall

# 已补充
OBJS1 = mmdriver.o mm.o memlib.o
OBJS2 = mmdriver.o ep_mm.o memlib.o
all: mmdriver epmmdriver

mmdriver: $(OBJS1)
# 已补充gcc命令（使用变量）
	$(CC) $(CFLAGS) -o mmdriver $(OBJS1)
epmmdriver: $(OBJS2)
# 已补充gcc命令（使用变量）
	$(CC) $(CFLAGS) -o epmmdriver $(OBJS2)

#已补充
mmdriver.o: mmdriver.c memlib.h mm.h
memlib.o: memlib.c memlib.h config.h 
mm.o: mm.c mm.h memlib.h
ep_mm.o: ep_mm.c mm.h memlib.h

clean:
	rm -f *~ *.o mmdriver epmmdriver


