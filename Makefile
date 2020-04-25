
compile: hextodec.c
	gcc hextodec.c -o ./build/hextodec

run: hextodec.c
	./build/hextodec colours.txt


clean:
	rm -rf ./build && mkdir ./build
