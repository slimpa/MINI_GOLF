#include "../../unity/unity_fixture.h"

static void RunAllTests(void)
{
	RUN_TEST_GROUP(BallMovementTest);
}

int main(int argc, char* argv[])
{
	return UnityMain(argc, (char **) argv, RunAllTests);
}
