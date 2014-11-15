#include "iutest.hpp"

IUTEST_TEST(Test, A)
{
	IUTEST_ASSERT_EQ(0, 0);
}

int main(int argc, char* argv[])
{
	IUTEST_INIT(&argc, argv);
	return IUTEST_RUN_ALL_TESTS();
}
