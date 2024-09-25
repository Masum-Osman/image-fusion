# Makefile
CC=g++
CFLAGS=-fPIC -shared `pkg-config --cflags opencv4`
LDFLAGS=`pkg-config --libs opencv4`
TARGET=image_processor.so

all: $(TARGET)

$(TARGET): image_processor.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

image_processor.o: image_processor.cpp image_processor.h
	$(CC) -c image_processor.cpp $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
