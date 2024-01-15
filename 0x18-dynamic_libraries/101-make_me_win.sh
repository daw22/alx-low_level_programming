#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/daw22/alx-low_level_programming/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
