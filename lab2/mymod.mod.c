#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4b148d30, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd22b9af0, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xdb10657e, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3e0d8262, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x60130fc1, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x1c9a00c9, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x43845cd1, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x59bec573, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xdcc8f449, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe6475537, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AF97726117A1EDB5F628A1F");
