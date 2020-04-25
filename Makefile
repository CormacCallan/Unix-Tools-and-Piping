
compile: hextodec.c
	gcc addalpha.c -o ./build/addalpha

run: addalpha.c
	./build/addalpha colours.txt


clean:
	rm -rf ./build && mkdir ./build
