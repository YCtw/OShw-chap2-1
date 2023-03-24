#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int loading_module(void)
{
  printk(KERN_INFO "Loading Module\n");
  return 0;
}

void removing_module(void)
{
  printk(KERN_INFO "Removing Module\n");
}

module_init(loading_module);
module_exit(removing_module);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("first module test");
MODULE_AUTHOR("John Chen");

