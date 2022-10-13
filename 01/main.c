#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Youssef Lagtab");
MODULE_DESCRIPTION("Hello world module");
MODULE_VERSION("0.0.1");

static int __init hello_world_init(void)
{
	printk("Hello, world !\n");
	return (0);
}	

static void __exit hello_world_exit(void) {
	printk("Cleaning up module.\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
