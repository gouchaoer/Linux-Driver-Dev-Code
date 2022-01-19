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
	{ 0xa8acd8be, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x87be1719, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xcc840f68, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xe435492b, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "41D06E86E16042D498EBE80");
