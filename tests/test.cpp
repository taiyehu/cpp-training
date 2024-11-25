#include <gtest/gtest.h>

#include "main.h"

TEST(ExecutorTest, Commands1)
{
    Executor executor;
    executor.executeCommands("MMRMMRMLM");

    int x, y;
    char heading;
    executor.getPosition(x, y, heading);

    ASSERT_EQ(x, 3);
    ASSERT_EQ(y, 1);
    ASSERT_EQ(heading, 'E');
}

TEST(ExecutorTest, Commands2)
{
    Executor executor;
    executor.executeCommands("MMLLMMLL");

    int x, y;
    char heading;
    executor.getPosition(x, y, heading);

    ASSERT_EQ(x, 0);
    ASSERT_EQ(y, 0);
    ASSERT_EQ(heading, 'N');
}

TEST(ExecutorTest, Commands3)
{
    Executor executor;
    executor.executeCommands("MMLMMLMMLMM");

    int x, y;
    char heading;
    executor.getPosition(x, y, heading);

    ASSERT_EQ(x, 0);
    ASSERT_EQ(y, 0);
    ASSERT_EQ(heading, 'E');
}

TEST(ExecutorTest, Commands4)
{
    Executor executor;
    executor.executeCommands("MMMMMRMMMMMM");

    int x, y;
    char heading;
    executor.getPosition(x, y, heading);

    ASSERT_EQ(x, 6);
    ASSERT_EQ(y, 5);
    ASSERT_EQ(heading, 'E');
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}