/*
 * hello.c
 *
 *  Created on: Feb 3, 2015
 *      Author: charles
 */

#include <linux/init.h>
#include <linux/module.h>


static int hello_init(void)
{
	printk(KERN_ALERT "TEST: Hello world, this is Chuck\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "TEST: Good byte from Chuck\n");
}

module_init(hello_init);
module_exit(hello_exit);
