#include "../src/player.h"
#include "../../unity/unity_fixture.h"

PLAYER* player;

TEST_GROUP(PlayerTest);

TEST_GROUP_RUNNER(PlayerTest)
{
	RUN_TEST_CASE (PlayerTest, TestAllocatePlayer);
	RUN_TEST_CASE (PlayerTest, TestPlayerName);
}

TEST_SETUP(PlayerTest)
{
	player = playerCreate();
}

TEST_TEAR_DOWN(PlayerTest)
{
}

TEST(PlayerTest, TestAllocatePlayer)
{
	TEST_ASSERT_TRUE (player != NULL);
}

TEST(PlayerTest, TestPlayerName)
{
	assignPlayerName(player, " ");
	STRCMP_EQUAL(" ", player->name);
}
