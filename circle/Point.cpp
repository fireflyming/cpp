#include <cmath>

#include "Point.h"

int Point::getDistance() const
{
    Point b(0, 0);
    return getDistance(b);
}

int Point::getDistance(const Point & b) const
{
    return sqrt(pow((m_x - b.m_x), 2) + pow((m_y - b.m_y), 2));
}

