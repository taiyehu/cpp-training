#include <gtest/gtest.h>

#include "main.h"

TEST(ExecutorTest, Commands)
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

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}