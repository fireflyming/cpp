#ifndef _POINT_H
#define _POINT_H

class Point {
public:
    Point() : Point(0, 0) {}
    Point(float x, float y) : m_x(x), m_y(y) {}
    virtual ~Point() {}

    float getX() const { return m_x; }
    float getY() const { return m_y; }
    void setX(float x) { m_x = x; }
    void setY(float y) { m_y = y; }

    /**
     * return the distance to (0, 0)
     */
    float getDistance() const;

    /**
     * return the distance to another Point
     */
    float getDistance(const Point &) const;

    bool operator==(const Point & a) const {
        return m_x == a.m_x && m_y == a.m_y;
    }

private:
    float m_x, m_y;
};

#endif
