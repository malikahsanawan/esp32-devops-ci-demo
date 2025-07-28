FROM ubuntu:22.04
RUN apt update && \
    apt install -y python3 python3-pip build-essential cppcheck
RUN pip3 install platformio
WORKDIR /project
COPY . .
RUN pio run
