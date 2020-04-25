run-task-1:
	cat colours.txt | grep -x '.\{7,7\}' && cat colours.txt | grep -x '.\{9,9\}'

run-task-2:
	cat colours.txt | grep -x '.\{7,7\}' | cut -b 4,5 > rs.txt && cat colours.txt | grep -x '.\{9,9\}' | cut -b 4,5 >> rs.txt
	gcc ../hextodec.c -o ../build/hextodec && ../build/hextodec rs.txt && unlink rs.txt


test:








