#ifndef _CIRCLE_H
#define _CIRCLE_H

#include  "Point.h"

class Circle {
public:
    Circle() : Circle({0.0, 0.0}, 1.0) {}
    Circle(const Point &center, float radius)
        : m_center(center), m_radius(radius) {}
    virtual ~Circle() {}
 
    // TODO
    // void setRadius(float radius);
    // float getArea() const;


    enum Relationship { CONCENTRIC, TOUCHING, INTERSECTING, DISJOINT_INNER, DISJOINT_OUTTER };
    Relationship getRelationship(const Circle &) const;

private:
    Point m_center;
    float m_radius;
};

#endif

