#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kernel_stat.h>
#include <linux/fs.h>
#include <linux/cdev.h>


MODULE_LICENSE("Proprietarty");
MODULE_AUTHOR("Mickey Mouse");

//int fd;

int kyouko3_open(struct inode *inode, struct file *fp){
	printk(KERN_ALERT "whatever");
	//fd = open("/dev/kyouko3", O_RDWR);
	
	return 0;
}


int kyouko3_release(struct inode *inode, struct file *fp){
	
	printk(KERN_ALERT "I am leaving");
	//close(fd);
	return 0;
}

struct file_operations kyouko3_fops ={
	.open = kyouko3_open,
	.release = kyouko3_release,
	.owner = THIS_MODULE
};

struct cdev whatever;
static int my_init_func(void)
{
	cdev_init(&whatever, &kyouko3_fops);
	cdev_add(&whatever, MKDEV(500, 127), 1);
	printk("I am in module");
	return 0;
}

static void my_exit_func(void)
{
	cdev_del(&whatever);
	printk("I am out module");
}

module_init(my_init_func);
module_exit(my_exit_func);


