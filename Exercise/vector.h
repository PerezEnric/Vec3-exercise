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
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}
	Vec3(const Type &x, const Type &y, const Type &z):x(x),y(y),z(z)
	{}

	Vec3(const Vec3 &vec):x(vec.x), y(vec.y), z(vec.z)
	{}

	~Vec3() {}

	Vec3 operator+(Vec3 &v1) const
	{
		return Vec3(x + v1.x, y + v1.y, z + v1.z);
	}
	Vec3 operator-(Vec3 v1) const
	{
		return Vec3 (x - v1.x, y - v1.y, z - v1.z);
	}

	Vec3 operator+=(Vec3 &v1)
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
	Vec3 operator=(Vec3 &v1)
	{
		x = v1.x;
		y = v1.y;
		z = v1.z;

		return v1;
	}
	bool operator==(Vec3 v1)
	{
		return (x == v1.x && y == v1.y && z == v1.z);
	}
	void normalize()
	{
		Type res;
		Vec3 vec1;

		res = sqrt((x*x) + y*y + z*z);

		vec1.x = x / res;
		vec1.y = y / res;
		vec1.z = z / res;

		cout << vec1.x << ", " << vec1.y << ", " << vec1.z << endl;
	}
	void zero()
	{
		Vec3 v;

		v.x = 0.0f;
		v.y = 0.0f;
		v.z = 0.0f;

		cout << v.x << ", " << v.y << ", " << v.z << endl;
	}
	bool is_zero() const
	{
		return (x == 0.0f && y == 0.0f && z == 0.0f);
	}

	Type distance_to(Vec3 &v1) const
	{
		return sqrt(((x - v1.x) * (x - v1.x)) + ((y - v1.y) * (y - v1.y)) + ((z - v1.z) * (z - v1.z)));
	}
};

typedef Vec3 <float> n_vec;

#endif