.PHONY: compile
compile:
	clang *c

.PHONY: valgrind
valgrind:
	valgrind --leak-check=yes ./a.out


.PHONY: docker-compile
docker-compile:
	docker run -it -v ${PWD}:/app valgrind clang /app/valgrind-1.c -o /app/a.out

.PHONY: docker-valgrind
docker-valgrind:
	docker run -it -v ${PWD}:/app valgrind valgrind --leak-check=yes /app/a.out
