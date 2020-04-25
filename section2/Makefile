run-task-1:
	cat colours.txt | grep -x '.\{7,7\}' && cat colours.txt | grep -x '.\{9,9\}'

run-task-2:
	gcc ../hextodec.c -o ../build/hextodec && cat colours.txt | grep -x '.\{7,7\}' | cut -b 4,5 > rs.txt && cat colours.txt | grep -x '.\{9,9\}' | cut -b 4,5 >> rs.txt && ../build/hextodec rs.txt && unlink rs.txt



test:
	gcc ../addalpha.c -o ../build/hextodec && cat colours.txt | grep -x '.\{7,7\}' > rs1.txt && ../build/addalpha rs1.txt > new.txt && cat colours.txt | grep -x '.\{9,9\}' >> new.txt



