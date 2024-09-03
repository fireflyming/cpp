
#include <gtest/gtest.h>

#include "Circle.h"

TEST(CircleTest, Relationship)
{
    Circle c1({0, 0}, 1);

    ASSERT_EQ(Circle::Relationship::CONCENTRIC, c1.getRelationship({{0.0, 0.0}, 2.0}));

    ASSERT_EQ(Circle::Relationship::TOUCHING, c1.getRelationship({{3.0, 0.0}, 2.0}));

    ASSERT_EQ(Circle::Relationship::INTERSECTING, c1.getRelationship({{3.0, 0.0}, 2.5}));

    ASSERT_EQ(Circle::Relationship::DISJOINT_OUTTER, c1.getRelationship({{3.0, 0.0}, 1.0}));

    ASSERT_EQ(Circle::Relationship::DISJOINT_INNER, c1.getRelationship({{3.0, 0.0}, 10.0}));


    Circle c2({-1, -1}, 1);
    ASSERT_EQ(Circle::Relationship::DISJOINT_OUTTER, c2.getRelationship({{1.0, 1.0}, 1.0}));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

