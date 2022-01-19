#include <linux/init.h>
#include <linux/module.h>

int add_integar(int a, int b)
{
	return a + b;
}
EXPORT_SYMBOL_GPL(add_integar);

int sub_integar(int a, int b)
{
	return a - b;
}
EXPORT_SYMBOL_GPL(sub_integar);

MODULE_LICENSE("GPL v2");
