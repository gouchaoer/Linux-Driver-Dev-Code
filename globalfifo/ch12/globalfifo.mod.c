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
	{ 0x5ac9bae1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x40d2a6c6, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xe1154231, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1613c21e, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x2f0fc3a9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3ece4fe3, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x823b1924, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xee0c770e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x3a013b7d, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd7bd3af2, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xf3dcd603, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x316109ce, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1c267b65, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x64985264, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x81834b97, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B54B076D8779DE849918572");
