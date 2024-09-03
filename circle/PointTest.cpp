#include <gtest/gtest.h>

#include "Point.h"

TEST(PointTest, Constructor)
{
    Point a;
    ASSERT_EQ(a.getX(), 0);
    ASSERT_EQ(a.getY(), 0);

    Point b(3, 4);
    ASSERT_EQ(b.getX(), 3);
    ASSERT_EQ(b.getY(), 4);
}

TEST(PointTest, SetterGetter)
{
    Point a;
    a.setX(3);
    a.setY(4);
    ASSERT_EQ(a.getX(), 3);
    ASSERT_EQ(a.getY(), 4);
}

TEST(PointTest, DefaultOperator)
{
    Point a;
    a = {3, 4};
    ASSERT_EQ(a.getX(), 3);
    ASSERT_EQ(a.getY(), 4);

    Point b(10, 21);
    a = b;
    ASSERT_EQ(a.getX(), 10);
    ASSERT_EQ(a.getY(), 21);
}

TEST(PointTest, Distance)
{
    Point a(3, 4);
    ASSERT_EQ(a.getDistance(), 5);

    Point b(3, 8);
    ASSERT_EQ(a.getDistance(b), 4);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

