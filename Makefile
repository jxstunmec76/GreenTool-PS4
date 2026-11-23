
APP_NAME = GreenTool
TITLE_ID = GRNT00001

CC = clang
CFLAGS = -O2 -Wall -Wextra

all:
	$(CC) $(CFLAGS) -o eboot.elf src/main.c

