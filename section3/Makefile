run-task-1:
	cat access.log | tail && printf "\n"

run-task-2:
	cat access.log | cut -d " " -f 1 | sort -u | cat

run-task-3:
	grep -r "404" access.log | cut -d " " -f 4 | cat

run-task-4:
	grep -r "MSIE" access.log > access.ie.log

task3:
	gcc ../report.c -o ../build/report.c && ../build/three list.txt

run-task-5:
	gcc report.c -o build/three && cat access.log | cut -d " " -f 7,4 | egrep '\b([5-9]|[1-5][0-9]|60)\b' | tr '"' ' ' | tr -s '[:blank:]' > filteredList && ./build/three filteredList.txt > finalList.txt | cat

