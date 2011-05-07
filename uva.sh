clear
g++ -Wall -o test $1.cpp
./test < data.txt > answer.txt
diff answer.txt solution.txt
