#include "../ft_printf.h"

void test_char(void)
{

}
void test_return(void)
{
	TEST_ASSERT_EQUAL_INT(printf("coucou %c\n", 'u'), ft_printf("coucou %c\n", 'u'));
}


// int main(void) {
//     UNITY_BEGIN();
//     //RUN_TEST(test_char);
//     RUN_TEST(test_return);
//     return UNITY_END();
// }