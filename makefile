CC=gcc

RomanCalculator: RomanCalculator.o check_RomanCalculator.o
	$(CC) $^ -o $@ $(shell pkg-config --libs --cflags check)

RomanCalculator.o: ./src/RomanCalculator.c
	$(CC) -c $<

check_RomanCalculator.o: ./tests/check_RomanCalculator.c
	$(CC) -c $<

check:
	@"./RomanCalculator"

clean:
	rm -f *.o RomanCalculator
