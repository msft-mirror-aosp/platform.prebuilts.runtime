/*
 * Copyright (C) 2019 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#pragma once

#include <sys/cdefs.h>
#include <sys/statfs.h>
#include <sys/statvfs.h>

#if defined(__BIONIC_SYS_STATVFS_INLINE)

__BEGIN_DECLS

#if defined(__BIONIC_NEED_STATVFS_INLINES)

static __inline void __bionic_statfs_to_statvfs(const struct statfs* __src,
                                                struct statvfs* __dst) {
  __dst->f_bsize = __src->f_bsize;
  __dst->f_frsize = __src->f_frsize;
  __dst->f_blocks = __src->f_blocks;
  __dst->f_bfree = __src->f_bfree;
  __dst->f_bavail = __src->f_bavail;
  __dst->f_files = __src->f_files;
  __dst->f_ffree = __src->f_ffree;
  __dst->f_favail = __src->f_ffree;
  __dst->f_fsid = __src->f_fsid.__val[0] |
      __BIONIC_CAST(static_cast, uint64_t, __src->f_fsid.__val[1]) << 32;
  __dst->f_flag = __src->f_flags;
  __dst->f_namemax = __src->f_namelen;
}

__BIONIC_SYS_STATVFS_INLINE int statvfs(const char* __path,
                                        struct statvfs* __result) {
  struct statfs __tmp;
  int __rc = statfs(__path, &__tmp);
  if (__rc != 0) return __rc;
  __bionic_statfs_to_statvfs(&__tmp, __result);
  return 0;
}

__BIONIC_SYS_STATVFS_INLINE int fstatvfs(int __fd,
                                         struct statvfs* __result) {
  struct statfs __tmp;
  int __rc = fstatfs(__fd, &__tmp);
  if (__rc != 0) return __rc;
  __bionic_statfs_to_statvfs(&__tmp, __result);
  return 0;
}

#endif

#if defined(__BIONIC_NEED_STATVFS64_INLINES)

__BIONIC_SYS_STATVFS_INLINE int statvfs64(const char* __path,
                                          struct statvfs64* __result) {
  return statvfs(__path, __BIONIC_CAST(reinterpret_cast, struct statvfs*,
                                       __result));
}

__BIONIC_SYS_STATVFS_INLINE int fstatvfs64(int __fd,
                                          struct statvfs64* __result) {
  return fstatvfs(__fd, __BIONIC_CAST(reinterpret_cast, struct statvfs*,
                                      __result));
}

#endif

__END_DECLS

#endif
