#include <sys/stat.h>
#include <sys/types.h>

int main(int argc,char const *argv[])
{
	mkdir(argv[1], 0755);
	
	return 0;
}
