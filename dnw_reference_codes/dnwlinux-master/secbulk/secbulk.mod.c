#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x53eda548, "module_layout" },
	{ 0xda936295, "usb_deregister" },
	{ 0xc2a09b20, "usb_register_driver" },
	{ 0xc1ded65c, "__mutex_init" },
	{ 0x7a242093, "dev_set_drvdata" },
	{ 0xad986012, "usb_get_dev" },
	{ 0xa6844d67, "usb_register_dev" },
	{ 0x5fc92ccb, "mutex_trylock" },
	{ 0x33e4cbc6, "kmem_cache_alloc_trace" },
	{ 0xba66affe, "kmalloc_caches" },
	{ 0xd1f5ecc1, "usb_find_interface" },
	{ 0x24f07d7f, "usb_deregister_dev" },
	{ 0xe621f01a, "dev_get_drvdata" },
	{ 0x27e1a049, "printk" },
	{ 0x727942eb, "usb_bulk_msg" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x798ade4a, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1D125826B54EDE11D32DBE");
