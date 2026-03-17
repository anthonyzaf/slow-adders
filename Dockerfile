FROM alpine

RUN apk add --no-cache gcc make musl-dev

WORKDIR /app

COPY . .

RUN make

CMD ["./O-n^2-Adder", "100000", "10000"]