CC = clang
CFLAGS = -pedantic -Wall -Wextra -std=c11

uwufiew : uwufiew.c
	$(CC) $(CFLAGS) uwufiew.c -o uwufiew

.PHONY : run

run : uwufiew
	echo "Lorem ipsum dolor sit amet" | ./uwufiew
	echo "Lorem ipsum dolor sit amet" | ./uwufiew test.txt
