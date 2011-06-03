#ifndef _URCU_MAP_H
#define _URCU_MAP_H

/*
 * urcu-map.h
 *
 * Userspace RCU header -- name mapping to allow multiple flavors to be
 * used in the same executable.
 *
 * Copyright (c) 2009 Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 * Copyright (c) 2009 Paul E. McKenney, IBM Corporation.
 *
 * LGPL-compatible code should include this header with :
 *
 * #define _LGPL_SOURCE
 * #include <urcu.h>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * IBM's contributions to this file may be relicensed under LGPLv2 or later.
 */

/* Mapping macros to allow multiple flavors in a single binary. */

#ifdef RCU_MEMBARRIER

#define rcu_read_lock			rcu_read_lock_memb
#define _rcu_read_lock			_rcu_read_lock_memb
#define rcu_read_unlock			rcu_read_unlock_memb
#define _rcu_read_unlock		_rcu_read_unlock_memb
#define rcu_register_thread		rcu_register_thread_memb
#define rcu_unregister_thread		rcu_unregister_thread_memb
#define rcu_init			rcu_init_memb
#define rcu_exit			rcu_exit_memb
#define synchronize_rcu			synchronize_rcu_memb
#define rcu_reader			rcu_reader_memb
#define rcu_gp_ctr			rcu_gp_ctr_memb

#define get_cpu_call_rcu_data		get_cpu_call_rcu_data_memb
#define get_call_rcu_thread		get_call_rcu_thread_memb
#define create_call_rcu_data		create_call_rcu_data_memb
#define set_cpu_call_rcu_data		set_cpu_call_rcu_data_memb
#define get_default_call_rcu_data	get_default_call_rcu_data_memb
#define get_call_rcu_data		get_call_rcu_data_memb
#define get_thread_call_rcu_data	get_thread_call_rcu_data_memb
#define set_thread_call_rcu_data	set_thread_call_rcu_data_memb
#define create_all_cpu_call_rcu_data	create_all_cpu_call_rcu_data_memb
#define free_all_cpu_call_rcu_data	free_all_cpu_call_rcu_data_memb
#define call_rcu			call_rcu_memb

#elif defined(RCU_SIGNAL)

#define rcu_read_lock			rcu_read_lock_sig
#define _rcu_read_lock			_rcu_read_lock_sig
#define rcu_read_unlock			rcu_read_unlock_sig
#define _rcu_read_unlock		_rcu_read_unlock_sig
#define rcu_register_thread		rcu_register_thread_sig
#define rcu_unregister_thread		rcu_unregister_thread_sig
#define rcu_init			rcu_init_sig
#define rcu_exit			rcu_exit_sig
#define synchronize_rcu			synchronize_rcu_sig
#define rcu_reader			rcu_reader_sig
#define rcu_gp_ctr			rcu_gp_ctr_sig

#define get_cpu_call_rcu_data		get_cpu_call_rcu_data_sig
#define get_call_rcu_thread		get_call_rcu_thread_sig
#define create_call_rcu_data		create_call_rcu_data_sig
#define set_cpu_call_rcu_data		set_cpu_call_rcu_data_sig
#define get_default_call_rcu_data	get_default_call_rcu_data_sig
#define get_call_rcu_data		get_call_rcu_data_sig
#define get_thread_call_rcu_data	get_thread_call_rcu_data_sig
#define set_thread_call_rcu_data	set_thread_call_rcu_data_sig
#define create_all_cpu_call_rcu_data	create_all_cpu_call_rcu_data_sig
#define free_all_cpu_call_rcu_data	free_all_cpu_call_rcu_data_sig
#define call_rcu			call_rcu_sig

#elif defined(RCU_MB)

#define rcu_read_lock			rcu_read_lock_mb
#define _rcu_read_lock			_rcu_read_lock_mb
#define rcu_read_unlock			rcu_read_unlock_mb
#define _rcu_read_unlock		_rcu_read_unlock_mb
#define rcu_register_thread		rcu_register_thread_mb
#define rcu_unregister_thread		rcu_unregister_thread_mb
#define rcu_init			rcu_init_mb
#define rcu_exit			rcu_exit_mb
#define synchronize_rcu			synchronize_rcu_mb
#define rcu_reader			rcu_reader_mb
#define rcu_gp_ctr			rcu_gp_ctr_mb

#define get_cpu_call_rcu_data		get_cpu_call_rcu_data_mb
#define get_call_rcu_thread		get_call_rcu_thread_mb
#define create_call_rcu_data		create_call_rcu_data_mb
#define set_cpu_call_rcu_data		set_cpu_call_rcu_data_mb
#define get_default_call_rcu_data	get_default_call_rcu_data_mb
#define get_call_rcu_data		get_call_rcu_data_mb
#define get_thread_call_rcu_data	get_thread_call_rcu_data_mb
#define set_thread_call_rcu_data	set_thread_call_rcu_data_mb
#define create_all_cpu_call_rcu_data	create_all_cpu_call_rcu_data_mb
#define free_all_cpu_call_rcu_data	free_all_cpu_call_rcu_data_mb
#define call_rcu			call_rcu_mb

#endif

#endif /* _URCU_MAP_H */