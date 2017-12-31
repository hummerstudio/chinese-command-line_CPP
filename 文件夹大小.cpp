#include <iostream>

using namespace std;
int main(int argc,char const *argv[])
{
	system("du -sh" + argv[1]);
	
	return 0;
}
