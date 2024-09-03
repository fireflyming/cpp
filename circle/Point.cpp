#include <cmath>

#include "Point.h"

float Point::getDistance() const
{
    Point b(0.0, 0.0);
    return getDistance(b);
}

float Point::getDistance(const Point & b) const
{
    return sqrt(pow((m_x - b.m_x), 2) + pow((m_y - b.m_y), 2));
}

