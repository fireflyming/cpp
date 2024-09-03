#include "Circle.h"

static float min(float a, float b)
{
    return a > b ? b : a;
}

static float max(float a, float b)
{
    return a > b ? a : b;
}

Circle::Relationship
Circle::getRelationship(const Circle & b) const
{
    if (m_center == b.m_center) {
        return CONCENTRIC;
    }

    float distance = m_center.getDistance(b.m_center);
    if (distance == m_radius + b.m_radius) {
        return TOUCHING;
    } else if (distance > m_radius + b.m_radius) {
        return DISJOINT_OUTTER; 
    } else if (distance > min(m_radius, b.m_radius) &&
               distance < max(m_radius, b.m_radius)) {
        return DISJOINT_INNER;
    } else {
        return INTERSECTING;
    }
}

