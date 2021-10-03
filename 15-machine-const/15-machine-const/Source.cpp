#include <iostream>

using namespace std;

float eps_f = 1.0;
double eps_d = 1.0;
long double eps_l = 1.0;

float val_f = 1.0;
double val_d = 1.0;
long double val_l = 1.0;
float zero_f = 1.0;
double zero_d = 1.0;
long double zero_l = 1.0;

float max_f = 0.9;
double max_d = 0.9;
long double max_l = 0.9;
float pos_inf_f = 1.0;
double pos_inf_d = 1.0;
long double pos_inf_l = 1.0;
float x_f = 1.0;
double x_d = 1.0;
long double x_l = 1.0;

float min_f = -0.9;
double min_d = -0.9;
long double min_l = -0.9;
float neg_inf_f = -1.0;
double neg_inf_d = -1.0;
long double neg_inf_l = -1.0;
float y_f = -1.0;
double y_d = -1.0;
long double y_l = -1.0;

int i = 0;
int j = 0;
int ii = 0;
int k = 0;
int p = 0;
int pp = 0;
int m = 0;
int l = 0;
int ll = 0;

int main()
{
	while (1.0f + eps_f > 1.0f)
		eps_f = eps_f / 2.0f;

	while (1.0 + eps_d > 1.0)
		eps_d = eps_d / 2.0;
    
    while (1.0 + eps_l > 1.0)
		eps_l = eps_l / 2.0;

    
	while (val_f > 0.0f)
	{
		val_f = val_f / 2.0f;
		++i;
	}
	
	while ( i > 1)
	{
		zero_f = zero_f / 2.0f;
		--i;
	}

	
	while (val_d > 0.0)
	{
		val_d = val_d / 2.0;
		++j;
	}
	
	while (j > 1)
	{
		zero_d = zero_d / 2.0f;
		--j;
	}

	while (val_l > 0.0)
	{
		val_l = val_l / 2.0f;
		++ii;
	}
	
	while (ii > 1)
	{
		zero_l = zero_l / 2.0f;
		--ii;
	}
	
	while (x_f != max_f )
	{
		max_f = x_f;
		x_f = x_f * 2.0f;
		++k;
	}
	
	while (k > 2)
	{ 
		pos_inf_f = pos_inf_f * 2.0f;
		--k;
	}

	
	while (x_d != max_d )
	{
		max_d = x_d;
		x_d = x_d * 2.0;
		++p;
	}
	
	while (p > 2)
	{ 
		pos_inf_d = pos_inf_d * 2.0;
		--p;
	}
	
	while (x_l != max_l )
	{
		max_l = x_l;
		x_l = x_l * 2.0;
		++pp;
	}
	
	while (pp > 2)
	{ 
		pos_inf_l = pos_inf_l * 2.0;
		--pp;
	}

	
	while (y_f != min_f)
	{
		min_f = y_f;
		y_f = y_f * 2.0f;
		++m;
	}
	
	while (m > 2)
	{
		neg_inf_f = neg_inf_f * 2.0f;
		--m;
	}

	
	while (y_d != min_d)
	{
		min_d = y_d;
		y_d = y_d * 2.0;
		++l;
	}
	
	while (l > 2)
	{
		neg_inf_d = neg_inf_d * 2.0;
		--l;
	}
	
	while (y_l != min_l)
	{
		min_l = y_l;
		y_l = y_l * 2.0;
		++ll;
	}
	
	while (ll > 2)
	{
		neg_inf_l = neg_inf_l * 2.0;
		--ll;
	}

	cout << "Machine epsilon(float type): " << eps_f << "\n";
	cout << "Machine epsilon(double type): " << eps_d << "\n";
	cout << "Machine epsilon(long double type): " << eps_l << "\n \n";
	cout << "Machine zero(float type): " << zero_f << "\n";
	cout << "Machine zero(double type): " << zero_d << "\n";
	cout << "Machine zero(long double type): " << zero_l << "\n \n";
	cout << "The difference between machine epsilon and zero(float type): " << eps_f - zero_f << "\n";
	cout << "The difference between machine epsilon and zero(double type): " << eps_d - zero_d << "\n";
	cout << "The difference between machine epsilon and zero(long double type): " << eps_l - zero_l << "\n \n";
	cout << "Machine positive infinity(float type): " << pos_inf_f << "\n";
	cout << "Machine positive infinity(double type): " << pos_inf_d << "\n";
	cout << "Machine positive infinity(long double type): " << pos_inf_l << "\n \n";
	cout << "Machine negative infinity(float type): " << neg_inf_f << "\n";
	cout << "Machine negative infinity(double type): " << neg_inf_d << "\n";
	cout << "Machine negative infinity(long double type): " << neg_inf_l << "\n \n";
	
	return 0;
}