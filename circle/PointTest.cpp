#include <gtest/gtest.h>

#include "Point.h"

TEST(PointTest, Constructor)
{
    Point a;
    ASSERT_EQ(a.getX(), 0.0);
    ASSERT_EQ(a.getY(), 0.0);

    Point b(3, 4);
    ASSERT_EQ(b.getX(), 3.0);
    ASSERT_EQ(b.getY(), 4.0);
}

TEST(PointTest, SetterGetter)
{
    Point a;
    a.setX(3.0);
    a.setY(4.0);
    ASSERT_EQ(a.getX(), 3.0);
    ASSERT_EQ(a.getY(), 4.0);
}

TEST(PointTest, DefaultOperator)
{
    Point a;
    a = {3.0, 4.0};
    ASSERT_EQ(a.getX(), 3.0);
    ASSERT_EQ(a.getY(), 4.0);

    Point b(10.0, 21.0);
    a = b;
    ASSERT_EQ(a.getX(), 10.0);
    ASSERT_EQ(a.getY(), 21.0);
}

TEST(PointTest, Distance)
{
    Point a(3.0, 4.0);
    ASSERT_EQ(a.getDistance(), 5.0);

    Point b(3.0, 8.0);
    ASSERT_EQ(a.getDistance(b), 4.0);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

