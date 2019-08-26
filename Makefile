.PHONY: docker-build
docker-build:
	docker build -t valgrind:latest .

.PHONY: docker-run
docker-run:
	docker run -v ${PWD}:/app -it valgrind:latest