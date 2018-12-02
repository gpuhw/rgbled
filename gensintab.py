#!/usr/bin/python3

import math

hdr = open("sintab.h", "w")
print("static const __flash u8 sintab[256] = {", file=hdr)
for a in range(0,256):
    theta=a/256*math.pi/2
    n = round(255*math.pow(math.sin(theta), 2.5))
    print("  %d, /* %d: theta=%.5f */" % (n, a,theta), file=hdr)
print("};", file=hdr);
