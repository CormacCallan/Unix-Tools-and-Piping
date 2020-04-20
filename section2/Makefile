run-task-1:
	cat colours.txt | tr “[a-z]” “[A-Z]” > uppercase.txt
	cat uppercase.txt | grep -x '.\{7,7\}' > rgb_hex.txt
	cat uppercase.txt | grep -x '.\{9,9\}' > rgba_hex.txt
	cat rgb_hex.txt  rgba_hex.txt > valid_colours.txt
	rm uppercase.txt rgb_hex.txt rgba_hex.txt
	cat valid_colours.txt
	unlink valid_colours.txt


