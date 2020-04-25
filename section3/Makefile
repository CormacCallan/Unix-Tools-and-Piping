run-task-1:
	cat access.log | tail && printf "\n"

run-task-2:
	cat access.log | cut -d " " -f 1 | sort -u | cat

run-task-3:
	grep -r "404" access.log | cut -d " " -f 4 | cat
