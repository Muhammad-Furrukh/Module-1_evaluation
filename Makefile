rest_div: rest_div.o
	gcc rest_div.o -o rest_div
rest_div.o: rest_div.c
	gcc -c rest_div.c -o rest_div.o

.PHONY = clean

clean:
	rm -rf rest_div rest_div.o

.PHONY = run

run: rest_div
	./rest_div
