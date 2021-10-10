#include "CRational.h"
#include <iostream>
#include <cassert>

using namespace std;

void CRational::reduce(int _num, int _den)
	{
		if(_num != 0)
		{
			int a, b;
			a = abs(_num);
			b = abs(_den);

			while (b > 0)
			{
				int c = a % b;
				a = b;
				b = c;
			}

			_num = _num / a;
			_den = _den / a;
		}
		
		if (abs(_num) >= abs(_den))
		{
			if (_num % _den == 0)
				cout << _num / _den << "\n";
			else 
				cout << _num / _den << " " << abs(_num - (_num / _den) * _den) << "/" << abs(_den) << "\n";
		}
		else 
			cout << _num << "/" << _den << "\n";
	}

CRational::CRational(int num, int den) : m_num(num), m_den(den)
	{
		assert (m_den != 0);
	}

void CRational::multiplication(const CRational &d)
	{
		int mult_m_num = m_num * d.m_num;
		int mult_m_den = m_den * d.m_den;
		
		if (m_num == 0 || d.m_num == 0)
			cout << "The multiplication of two fraction: 0\n";
		else
		{
			cout << "The multiplication of two fraction: ";
			reduce(mult_m_num, mult_m_den);  
		}
	}

void CRational::addition(const CRational &c)
	{
		 int add_m_num = m_num * c.m_den + c.m_num * m_den;
		 int add_m_den = m_den * c.m_den;

		 if (m_num == 0 || c.m_num == 0)
			cout << "The addition of two fraction: 0\n";
		 else
		 {
			 cout << "The addition of two fraction: "; 
			 reduce(add_m_num, add_m_den);
		 }
	} 

