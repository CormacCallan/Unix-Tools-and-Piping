compile:
  gcc hextodec.c -o ./build/hextodec

run:
  ./build/hextodec


clean:
  rm -rf ./build && mkdir ./build
