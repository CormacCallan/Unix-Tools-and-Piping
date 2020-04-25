run-task-1:
	cat colours.txt | grep -x '.\{7,7\}' && cat colours.txt | grep -x '.\{9,9\}'


run-task-2:
	cat colours.txt | grep -x '.\{7,7\}' | cut -b 4,5 > rs.txt
	gcc ../hextodec.c -o ../build/hextodec && ../build/hextodec rs.txt && unlink rs.txt


test:
	cat colours.txt | grep -x '.\{7,7\}' | cut -b 4,5 > rs.txt
	gcc ../hextodec.c -o ../build/hextodec && ../build/hextodec rs.txt && unlink rs.txt

compile:
	gcc ../hextodec.c -o ../build/hextodec && ../build/hextodec 95 d3


taskB:
	cat colours.txt | grep -x '.\{7,7\}' > rs.txt
	cut -b 4,5 rs.txt > ans.txt
	cat ans.txt | printf '%d\n'

