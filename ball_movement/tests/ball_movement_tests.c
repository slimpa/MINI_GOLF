#include "../src/ball_movement.h"
#include "../../unity/unity_fixture.h"

SDL_Rect test;
SDL_Rect hole;

TEST_GROUP(BallMovementTest);

TEST_GROUP_RUNNER(BallMovementTest)
{
RUN_TEST_CASE(BallMovementTest, BallMoved)
RUN_TEST_CASE(BallMovementTest, IsBallInHole)
RUN_TEST_CASE(BallMovementTest, IsBallNotInHole)
}

TEST_SETUP(BallMovementTest)
{
    SDL_Rect test;
}

TEST_TEAR_DOWN(BallMovementTest)
{
    
}

TEST(BallMovementTest, BallMoved)
{
    test.x = 0;
    test.y = 0;
    test = ballMove(test);
    TEST_ASSERT_EQUAL (1, test.x);
}

TEST(BallMovementTest, IsBallInHole)
{
    hole.x = 500;
    hole.y = 240;
    test.x = 50;
    test.y = 240;
    int i;
    for ( i = 0;i < 450;i++ )
    test = ballMove(test);
    TEST_ASSERT_TRUE(isBallInHole(test, hole));
}

TEST(BallMovementTest, IsBallNotInHole)
{
    hole.x = 500;
    hole.y = 240;
    test.x = 50;
    test.y = 240;
    int i;
    test = ballMove(test);
    TEST_ASSERT_FALSE(isBallInHole(test, hole));
}
