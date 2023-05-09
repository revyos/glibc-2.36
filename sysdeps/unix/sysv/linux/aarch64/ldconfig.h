/* Copyright (C) 2009-2022 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <sysdeps/generic/ldconfig.h>

#define SYSDEP_KNOWN_INTERPRETER_NAMES \
  { "/lib/ld-linux-aarch64.so.1", FLAG_ELF_LIBC6 }, \
  { "/lib/ld-linux-aarch64_be.so.1", FLAG_ELF_LIBC6 }, \
  { "/lib/ld-linux-aarch64_ilp32.so.1", FLAG_ELF_LIBC6 }, \
  { "/lib/ld-linux-aarch64_be_ilp32.so.1", FLAG_ELF_LIBC6 }, \
  { "/lib/ld-linux.so.3", FLAG_ELF_LIBC6 }, \
  { "/lib/ld-linux-armhf.so.3", FLAG_ELF_LIBC6 },
#define SYSDEP_KNOWN_LIBRARY_NAMES \
  { "libc.so.6", FLAG_ELF_LIBC6 },	\
  { "libm.so.6", FLAG_ELF_LIBC6 },
