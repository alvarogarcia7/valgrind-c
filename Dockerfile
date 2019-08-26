FROM ubuntu:latest

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install g++ valgrind clang-3.9 -y
RUN apt-get install make -y
RUN ln -s /usr/bin/clang-3.9 /usr/bin/clang

WORKDIR /app
