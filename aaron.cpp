#include <iostream>

using namespace std;

int main() {
char *args[2] = {"-e bash -c \"cat <fifo2 & tee fifo1\"", NULL};

execv("/usr/bin/xterm", args);

	return 0;
}
