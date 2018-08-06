#include "hellolib.h"

void Hello::setcnt(const int & cnt)
{
	if( 0 != &cnt )
	{
		m_cnt = cnt;
	}
}

int Hello::getcnt()
{
	return m_cnt;
}
