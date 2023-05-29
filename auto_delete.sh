find . -type f -name "*.out" -mtime +1 -exec rm {} +

find . -type f -name "*.exe" -mtime +1 -exec rm {} +

find . -type f -wholename "*/*.out" -mtime +1 -exec rm {} +

find . -type f -wholename "*/*/*.out" -mtime +1 -exec rm {} +

find . -type f -wholename "*/*/*/*.out" -mtime +1 -exec rm {} +

