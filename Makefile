all: main.o caesar.o tests.o vigenere.o decrypt.o test-ascii.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o
	g++ -o test-ascii test-ascii.o
main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o
tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o
test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o
main.o: main.cpp
	g++ -c main.cpp
tests.o: tests.cpp caesar.h vigenere.h decrypt.h doctest.h
	g++ -c tests.cpp
caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp
vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp
decrypt.o: decrypt.cpp decrypt.h
	g++ -c decrypt.cpp
clean:
	rm -f main.o caesar.o vigenere.o decrypt.o tests.o test-ascii.o main tests test-ascii a.out
