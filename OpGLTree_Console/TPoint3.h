#pragma once

template <typename T> struct TPoint3
{
private:
	T m_X;
	T m_Y;
	T m_Z;
public:
	inline T GetX() const { return m_X; }
	inline T GetY() const { return m_Y; }
	inline T GetZ() const { return m_Z; }
	inline void SetX(T X) {	m_X = X; }
	inline void SetY(T Y) {	m_Y = Y; }
	inline void SetZ(T Z) {	m_Z = Z; }
	TPoint3()
	{
		m_X = m_Y = m_Z = 0;
	}
	TPoint3(T X, T Y, T Z)
	{
		m_X = X;
		m_Y = Y;
		m_Z = Z;
	}
	TPoint3<T>& operator= (const TPoint3<T> &point)
	{
		this -> m_X = point.m_X;
		this -> m_Y = point.m_Y;
		this -> m_Z = point.m_Z;
		return *this;
	}
	const TPoint3<T> operator+ (const TPoint3<T> &point)
	{
		return TPoint3<T>(this -> m_X + point.m_X, this -> m_Y + point.m_Y, this -> m_Z + point.m_Z);
	}
	const TPoint3<T> operator- (const TPoint3<T> &point)
	{
		return TPoint2<T>(this -> m_X - point.m_X, this -> m_Y - point.m_Y, this -> m_Z - point.m_Z);
	}
	bool operator== (const TPoint3<T> &point)
	{
		if (this -> m_X == point.m_X && this -> m_Y == point.m_Y && this -> m_Z == point.m_Z)
			return true;
		else
			return false;
	}
	bool operator!= (const TPoint3<T> &point)
	{
		return ( !(*this == point) );
	}
};

