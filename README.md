# xv6_readcount

Inside sysfile.c a counter was added to read(), which will increment every time it's used
Inside sysproc.c a system call called getreadcount() returns this counter.
After firing up the operating system, simply call test_wcupa to get the result of this counter.
