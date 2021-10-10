#ifndef CRATIONAL_H
#define CRATIONAL_H

class CRational
{
private:
	int m_num, m_den;

	void reduce(int _num, int _den);

public:
	CRational(int num, int den);

	void multiplication(const CRational &d);

	void addition(const CRational &c);
};

#endif

