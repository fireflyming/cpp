#ifndef _POINT_H
#define _POINT_H

class Point {
public:
    Point() : Point(0, 0) {}
    Point(int x, int y) : m_x(x), m_y(y) {}
    virtual ~Point() {}

    int getX() const { return m_x; }
    int getY() const { return m_y; }
    void setX(int x) { m_x = x; }
    void setY(int y) { m_y = y; }

    /**
     * return the distance to (0, 0)
     */
    int getDistance() const;

    /**
     * return the distance to another Point
     */
    int getDistance(const Point &) const;


private:
    int m_x, m_y;
};

#endif
