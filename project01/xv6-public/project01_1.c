#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
	int pid = (int)getpid();
	int ppid = mygetppid();
	printf(1, "My pid is %d\nMy ppid is %d\n", pid, ppid);
	exit();
}
