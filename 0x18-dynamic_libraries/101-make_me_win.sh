#!/bin/bash
wget https://github.com/mickiyas123/alx-low_level_programming/blob/5e10ff7bcc072f9dcedcbfe45a08551e17c15733/0x18-dynamic_libraries/libpass.so
LD_PRELOAD="./libpass.so" ./crackpass
