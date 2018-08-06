
#ifndef __HELLOLIB_H
#define __HELLOLIB_H

class Hello
{
	public :
		Hello() : m_cnt(0){}
	public:
		void setcnt( const int &cnt);
		int getcnt();
	private:
			int m_cnt;
};

#endif
