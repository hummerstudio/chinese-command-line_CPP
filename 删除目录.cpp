#include <unistd.h>

int main(int argc,char const *argv[])
{
	rmdir(argv[1]);
	
	return 0;
}