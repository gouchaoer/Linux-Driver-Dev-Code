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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x14b29d40, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1d47608d, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x1277bca6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x780d95be, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xccdb33a7, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xac0ef88a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x732e1067, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb81c7df3, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x56636166, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x1da323e2, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x702984bb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x649c402a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x2b02532b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xab65e7d6, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x8a2a40b7, __VMLINUX_SYMBOL_STR(blk_start_request) },
	{ 0x6ca206da, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x743dc241, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ECDC83EEFEFA88F15710450");
