all:
	gcc example.c -o example.out
	doxygen Doxyfile

clean:
	rm -rf *.out
