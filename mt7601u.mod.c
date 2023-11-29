#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ad771c3, "module_layout" },
	{ 0xd69e5a4f, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a8b29c7, "put_devmap_managed_page" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xa6f09f89, "debugfs_create_dir" },
	{ 0x801e8735, "single_open" },
	{ 0x42ad3194, "debugfs_create_u8" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9f16814c, "firmware_request_cache" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8e3e5524, "single_release" },
	{ 0x2c1ed80, "seq_puts" },
	{ 0xf11da1f9, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa68165d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x73dc96bd, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4e4044e3, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x273c208d, "trace_event_buffer_reserve" },
	{ 0x3d5145a7, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x83599202, "seq_read" },
	{ 0x6db00390, "bpf_trace_run3" },
	{ 0xfbe1e554, "skb_trim" },
	{ 0x13e52367, "ieee80211_stop_queues" },
	{ 0xf76ad9e4, "ieee80211_stop_queue" },
	{ 0xdba6dab3, "ieee80211_tx_status" },
	{ 0xc5f4f00a, "debugfs_create_u32" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8185baa8, "__alloc_pages" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xf036341f, "_dev_warn" },
	{ 0xa091a216, "ieee80211_rx_list" },
	{ 0x5c62a871, "bpf_trace_run9" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x458f49d8, "usb_deregister" },
	{ 0x98c63313, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a84131a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf441e98b, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x70039f0c, "trace_event_reg" },
	{ 0x7234e0c2, "usb_poison_urb" },
	{ 0x42689e2d, "seq_putc" },
	{ 0xcc7ef1da, "usb_control_msg" },
	{ 0x28251225, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdde4c005, "simple_attr_release" },
	{ 0x2acb70b5, "skb_pull" },
	{ 0x78e3401a, "usb_free_coherent" },
	{ 0xac7ab837, "_dev_err" },
	{ 0x10d95836, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xaa86c6f9, "devm_kmemdup" },
	{ 0x155b6b57, "ieee80211_queue_delayed_work" },
	{ 0xdcaf0240, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7a3efc5a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe740fbad, "_dev_info" },
	{ 0xbd70750d, "usb_submit_urb" },
	{ 0xf2fc12e4, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x3d18fb83, "__alloc_skb" },
	{ 0xce0dc0cc, "usb_get_dev" },
	{ 0x3ccdf674, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa760101, "usb_reset_device" },
	{ 0x42a30b71, "usb_bulk_msg" },
	{ 0xd5ab5b23, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf1738c7d, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb6b99492, "ieee80211_get_tx_rates" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a5fa492, "trace_event_buffer_commit" },
	{ 0x35356f2a, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0x8b0365e4, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xccf06dcf, "ieee80211_wake_queue" },
	{ 0x4a6d8687, "event_triggers_call" },
	{ 0xca0bd740, "ieee80211_get_hdrlen_from_skb" },
	{ 0x2d2c0c80, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa57920b1, "ieee80211_register_hw" },
	{ 0xa5457562, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527ffd2f, "trace_event_raw_init" },
	{ 0x15f29374, "ieee80211_tx_status_ext" },
	{ 0xd21f725, "skb_add_rx_frag" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb0a1b0c0, "usb_register_driver" },
	{ 0x358e8138, "trace_event_printf" },
	{ 0xd56f417d, "request_firmware" },
	{ 0xb6bf8093, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x39b5dd1b, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x45fd71ae, "consume_skb" },
	{ 0xbab8c874, "usb_alloc_coherent" },
	{ 0x768d5be5, "skb_put" },
	{ 0x970f882b, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x386c715f, "debugfs_attr_write" },
	{ 0x1d7841dd, "bpf_trace_run4" },
	{ 0x88bce085, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf13995cc, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf9818c63, "__put_page" },
	{ 0xd6d46f34, "__skb_pad" },
	{ 0x1f861c5f, "usb_alloc_urb" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "cfg80211,mac80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FCE63716D2AD1964AF2F804");
