#ifndef _VECTOR_H
#define _VECTOR_H

#include <math.h>

template <class Type>


class Vec3
{
public:
	Type x, y, z;

public:
	Vec3()
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}
	Vec3(Type _x, Type _y, Type _z)
	{
		this->x = _x;
		this->y = _y;
		this->z = _z;
	}
	Vec3(Vec3 &vec)
	{
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
	}
	~Vec3() {}
	Vec3 operator+(Vec3 v1)
	{
		Vec3 op;
		op.x = x + v1.x;
		op.y = y + v1.y;
		op.z = z + v1.z;

		return op;
	}
	Vec3 operator-(Vec3 v1)
	{
		Vec3 op;
		op.x = x - v1.x;
		op.y = y - v1.y;
		op.z = z - v1.z;

		return op;
	}
	Vec3 operator+=(Vec3 v1)
	{
		x += v1.x;
		y += v1.y;
		z += v1.z;

		return v1;
	}
	Vec3 operator-=(Vec3 v1)
	{
		x -= v1.x;
		y -= v1.y;
		z -= v1.z;

		return v1;
	}
	Vec3 operator=(Vec3 v1)
	{
		x = v1.x;
		y = v1.y;
		z = v1.z;

		return v1;
	}
	bool operator==(Vec3 v1)
	{
		if (x == v1.x && y == v1.y && z == v1.z)
		{
			cout << "They are the same vector" << endl;
			return true;
		}
		else
		{
			cout << "They are not the same vector" << endl;
			return false;
		}
	}
	void normalize()
	{
		float res;
		Vec3 vec1;

		res = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

		vec1.x = x / res;
		vec1.y = y / res;
		vec1.z = z / res;

		cout << vec1.x << ", " << vec1.y << ", " << vec1.z << endl;
	}
	void zero()
	{
		Vec3 v;

		v.x = 0;
		v.y = 0;
		v.z = 0;

		cout << v.x << ", " << v.y << ", " << v.z << endl;
	}
	bool is_zero()
	{
		Vec3 v;
		if (v.x == 0 && v.y == 0 && v.z == 0)
		{
			cout << "All components are 0" << endl;
			return true;
		}

		else
		{
			cout << "All components are not 0" << endl;
			return false;
		}
	}
	Vec3 distance_to(Vec3 v1, Vec3 v2)
	{
		Vec3 v3;

		v3.x = v2.x - v1.x;
		v3.y = v2.y - v1.y;
		v3.z = v2.z - v1.z;

		return v3;
	}
};

typedef Vec3 <float> n_vec;

#endif