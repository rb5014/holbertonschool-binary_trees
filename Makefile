SRC = *.c
LIBS = $(shell find . -name "*binary*.c" -size +0)
OBJECTS = $(patsubst %.c, %.o, $(LIBS))
BIN = $(shell basename -s .c -a *-main.c | sort -n)

all: $(BIN)

$(BIN): %: %.c $(OBJECTS)
	-@gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o $@ $^

$(OBJECTS): %.o: %.c
	-@gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c $^

.PHONY: clean prnt

clean:
	-@rm *.o $(BIN) 2> /dev/null

prnt:
	echo $(BIN)
