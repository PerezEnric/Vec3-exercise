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
	bool operator==(Vec3 v1) const
	{
		return (x == v1.x && y == v1.y && z == v1.z);
	}
	void normalize()
	{
		Type res;

		res = sqrt((x*x) + y*y + z*z);

		x = x / res;
		y = y / res;
		z = z / res;

	}
	void zero()
	{
		x = y = z = 0.0f;
	}
	bool is_zero() const
	{
		return (x == 0.0f && y == 0.0f && z == 0.0f);
	}

	Type distance_to(Vec3 &v1) 
	{
		return sqrt(((x - v1.x) * (x - v1.x)) + ((y - v1.y) * (y - v1.y)) + ((z - v1.z) * (z - v1.z)));
	}

	Type distance_to_squared(Vec3 &v1) 
	{
		return ((x - v1.x) * (x - v1.x)) + ((y - v1.y) * (y - v1.y)) + ((z - v1.z) * (z - v1.z));
	}

};

typedef Vec3 <float> n_vec;

#endif