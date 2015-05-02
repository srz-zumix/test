#include "iutest.hpp"

IUTEST_TEST(Test, A)
{
	IUTEST_ASSERT_EQ(0, 0);
}

IUTEST_TEST(DISABLED_Test, Fail)
{
	IUTEST_ASSERT_EQ(0, 1);
}

int main(int argc, char* argv[])
{
	IUTEST_INIT(&argc, argv);
	return IUTEST_RUN_ALL_TESTS();
}
