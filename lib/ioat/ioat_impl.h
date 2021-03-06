#ifndef __IOAT_IMPL_H__
#define __IOAT_IMPL_H__

#include <pthread.h>
#include <stdio.h>
#include <stdbool.h>

#include "spdk/assert.h"
#include "spdk/env.h"

/**
 * \file
 *
 * This file describes the functions required to integrate
 * the userspace IOAT driver for a specific implementation.  This
 * implementation is specific for DPDK.  Users would revise it as
 * necessary for their own particular environment if not using it
 * within the SPDK framework.
 */

/**
 * Allocate a pinned, physically contiguous memory buffer with the
 * given size and alignment.
 */
#define ioat_zmalloc			spdk_zmalloc

/**
 * Free a memory buffer previously allocated with ioat_zmalloc.
 */
#define ioat_free			spdk_free

/**
 * Return the physical address for the specified virtual address.
 */
#define ioat_vtophys(buf)		spdk_vtophys(buf)

/**
 * Delay us.
 */
#define ioat_delay_us                   spdk_delay_us

#endif /* __IOAT_IMPL_H__ */
