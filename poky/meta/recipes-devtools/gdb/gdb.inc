LICENSE = "GPL-2.0-only & GPL-3.0-only & LGPL-2.0-only & LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 \
		    file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 \
		    file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6 \
		    file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674"

SRC_URI = "${GNU_MIRROR}/gdb/gdb-${PV}.tar.xz \
           file://0001-make-man-install-relative-to-DESTDIR.patch \
           file://0002-mips-linux-nat-Define-_ABIO32-if-not-defined.patch \
           file://0003-ppc-ptrace-Define-pt_regs-uapi_pt_regs-on-GLIBC-syst.patch \
           file://0005-Dont-disable-libreadline.a-when-using-disable-static.patch \
           file://0006-use-asm-sgidefs.h.patch \
           file://0007-Change-order-of-CFLAGS.patch \
           file://0008-resolve-restrict-keyword-conflict.patch \
           file://0009-Fix-invalid-sigprocmask-call.patch \
           file://0010-gdbserver-ctrl-c-handling.patch \
           file://0011-CVE-2023-39128.patch \
	   file://0012-CVE-2023-39129.patch \
	   file://0013-CVE-2023-39130.patch \
           file://0014-CVE-2024-53589.patch \
           "
SRC_URI[sha256sum] = "1497c36a71881b8671a9a84a0ee40faab788ca30d7ba19d8463c3cc787152e32"
