FROM ubuntu:latest
RUN apt-get update && apt-get install -y build-essential gcc-avr avr-libc
#COPY ./ /usr/src/app/