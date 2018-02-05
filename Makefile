C = gcc
CFLAGS = -Wall -Wextra -Werror -g

TARGET = linkedList

all: $(TARGET)

linkedList: linkedList.c List.c List.h
	    $(CC) $(CFLAGS) -o linkedList linkedList.c List.c -lm

clean:
	    $(RM) $(TARGET)
