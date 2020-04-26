clean:
	rm -rf ./build/*


run:
	gcc ./three.c -o ./build/three && ./build/three list.txt

