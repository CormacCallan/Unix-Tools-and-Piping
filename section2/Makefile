run-task-1:
	cat colours.txt | grep -x '.\{7,7\}' && cat colours.txt | grep -x '.\{9,9\}'


task:
	cat colours.txt | grep -x '.\{7,7\}' > rs.txt
	cut -b 4,5 rs.txt > ans.txt
	printf '%d\n' ans.txt


