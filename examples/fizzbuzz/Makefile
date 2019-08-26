.PHONY: compile
compile:
	./make-tests.sh > AllTests.c
	docker run -it -v ${PWD}:/app valgrind clang AllTests.c CuTest.c CuTestTest.c fizzbuzz.c FizzBuzzTest.c itoa.c -o tests.ex

.PHONY: execute
execute:
	docker run -it -v ${PWD}:/app valgrind ./tests.ex

.PHONY: valgrind
valgrind:
	docker run -it -v ${PWD}:/app valgrind valgrind --leak-check=yes ./tests.ex

