#include "../src/gui.h"
#include "../../unity/unity_fixture.h"


TEST_GROUP(GuiTest);

TEST_GROUP_RUNNER(GuiTest)
{
RUN_TEST_CASE(GuiTest, BallMoved)
RUN_TEST_CASE(GuiTest, IsBallInHole)
RUN_TEST_CASE(GuiTest, IsBallNotInHole)
}

TEST_SETUP(GuiTest)
{
    
}

TEST_TEAR_DOWN(GuiTest)
{

}
