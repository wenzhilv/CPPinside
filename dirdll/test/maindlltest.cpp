
#include <iostream>

#include "..\inc\hellolib.h"

int main(void)
{
	Hello obj;
	std::cout << obj.getcnt() << std::endl;
	obj.setcnt(10);
	std::cout <<obj.getcnt() << std::endl;
	return 0;
}
