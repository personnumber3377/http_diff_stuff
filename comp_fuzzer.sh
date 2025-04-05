#!/bin/sh

# -I/home/oof/rubyinstalldir/include/ruby-3.5.0+0
# -L/home/oof/rubyinstalldir/lib/ -l:libruby-static.a

# /home/oof/AFLplusplus/afl-gcc-fast


/home/oof/AFLplusplus/afl-gcc-fast -fsanitize=address,undefined -I/home/oof/rubyinstalldir/include/ruby-3.5.0+0/x86_64-linux -I/home/oof/rubyinstalldir/include/ruby-3.5.0+0 fuzzer.c -o fuzzer -L/home/oof/rubyinstalldir/lib/ -l:libruby-static.a -lgmp -lcrypt -lz
