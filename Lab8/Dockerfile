FROM docker.io/library/debian:bookworm-slim

RUN apt-get update \
    && apt-get install -y --no-install-recommends build-essential \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY Makefile main.c fibonacci.c test_fibonacci_and_golden.c ./
COPY headers/ ./headers/

RUN make && make test_fibonacci_and_golden

CMD ["./test_fibonacci_and_golden"]
