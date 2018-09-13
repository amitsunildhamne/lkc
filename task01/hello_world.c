/*
* helloworld.c
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void)
{
  printk(KERN_ALERT "Hello World!\n");
  return 0;
}

static void hello_exit(void)
{
  printk(KERN_ALERT "See you later.\n");
}

module_init(hello_init);
module_exit(hello_exit);
