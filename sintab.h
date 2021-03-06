static const __flash u8 sintab[256] = {
  0, /* 0: theta=0.00000 */
  0, /* 1: theta=0.00614 */
  0, /* 2: theta=0.01227 */
  0, /* 3: theta=0.01841 */
  0, /* 4: theta=0.02454 */
  0, /* 5: theta=0.03068 */
  0, /* 6: theta=0.03682 */
  0, /* 7: theta=0.04295 */
  0, /* 8: theta=0.04909 */
  0, /* 9: theta=0.05522 */
  0, /* 10: theta=0.06136 */
  0, /* 11: theta=0.06750 */
  0, /* 12: theta=0.07363 */
  0, /* 13: theta=0.07977 */
  1, /* 14: theta=0.08590 */
  1, /* 15: theta=0.09204 */
  1, /* 16: theta=0.09817 */
  1, /* 17: theta=0.10431 */
  1, /* 18: theta=0.11045 */
  1, /* 19: theta=0.11658 */
  1, /* 20: theta=0.12272 */
  2, /* 21: theta=0.12885 */
  2, /* 22: theta=0.13499 */
  2, /* 23: theta=0.14113 */
  2, /* 24: theta=0.14726 */
  2, /* 25: theta=0.15340 */
  3, /* 26: theta=0.15953 */
  3, /* 27: theta=0.16567 */
  3, /* 28: theta=0.17181 */
  3, /* 29: theta=0.17794 */
  4, /* 30: theta=0.18408 */
  4, /* 31: theta=0.19021 */
  4, /* 32: theta=0.19635 */
  5, /* 33: theta=0.20249 */
  5, /* 34: theta=0.20862 */
  5, /* 35: theta=0.21476 */
  6, /* 36: theta=0.22089 */
  6, /* 37: theta=0.22703 */
  7, /* 38: theta=0.23317 */
  7, /* 39: theta=0.23930 */
  7, /* 40: theta=0.24544 */
  8, /* 41: theta=0.25157 */
  8, /* 42: theta=0.25771 */
  9, /* 43: theta=0.26384 */
  9, /* 44: theta=0.26998 */
  10, /* 45: theta=0.27612 */
  10, /* 46: theta=0.28225 */
  11, /* 47: theta=0.28839 */
  12, /* 48: theta=0.29452 */
  12, /* 49: theta=0.30066 */
  13, /* 50: theta=0.30680 */
  13, /* 51: theta=0.31293 */
  14, /* 52: theta=0.31907 */
  15, /* 53: theta=0.32520 */
  15, /* 54: theta=0.33134 */
  16, /* 55: theta=0.33748 */
  17, /* 56: theta=0.34361 */
  18, /* 57: theta=0.34975 */
  18, /* 58: theta=0.35588 */
  19, /* 59: theta=0.36202 */
  20, /* 60: theta=0.36816 */
  21, /* 61: theta=0.37429 */
  21, /* 62: theta=0.38043 */
  22, /* 63: theta=0.38656 */
  23, /* 64: theta=0.39270 */
  24, /* 65: theta=0.39884 */
  25, /* 66: theta=0.40497 */
  26, /* 67: theta=0.41111 */
  27, /* 68: theta=0.41724 */
  28, /* 69: theta=0.42338 */
  29, /* 70: theta=0.42951 */
  29, /* 71: theta=0.43565 */
  30, /* 72: theta=0.44179 */
  31, /* 73: theta=0.44792 */
  32, /* 74: theta=0.45406 */
  34, /* 75: theta=0.46019 */
  35, /* 76: theta=0.46633 */
  36, /* 77: theta=0.47247 */
  37, /* 78: theta=0.47860 */
  38, /* 79: theta=0.48474 */
  39, /* 80: theta=0.49087 */
  40, /* 81: theta=0.49701 */
  41, /* 82: theta=0.50315 */
  42, /* 83: theta=0.50928 */
  43, /* 84: theta=0.51542 */
  45, /* 85: theta=0.52155 */
  46, /* 86: theta=0.52769 */
  47, /* 87: theta=0.53383 */
  48, /* 88: theta=0.53996 */
  50, /* 89: theta=0.54610 */
  51, /* 90: theta=0.55223 */
  52, /* 91: theta=0.55837 */
  53, /* 92: theta=0.56450 */
  55, /* 93: theta=0.57064 */
  56, /* 94: theta=0.57678 */
  57, /* 95: theta=0.58291 */
  59, /* 96: theta=0.58905 */
  60, /* 97: theta=0.59518 */
  61, /* 98: theta=0.60132 */
  63, /* 99: theta=0.60746 */
  64, /* 100: theta=0.61359 */
  66, /* 101: theta=0.61973 */
  67, /* 102: theta=0.62586 */
  68, /* 103: theta=0.63200 */
  70, /* 104: theta=0.63814 */
  71, /* 105: theta=0.64427 */
  73, /* 106: theta=0.65041 */
  74, /* 107: theta=0.65654 */
  76, /* 108: theta=0.66268 */
  77, /* 109: theta=0.66882 */
  79, /* 110: theta=0.67495 */
  80, /* 111: theta=0.68109 */
  82, /* 112: theta=0.68722 */
  83, /* 113: theta=0.69336 */
  85, /* 114: theta=0.69950 */
  86, /* 115: theta=0.70563 */
  88, /* 116: theta=0.71177 */
  89, /* 117: theta=0.71790 */
  91, /* 118: theta=0.72404 */
  93, /* 119: theta=0.73017 */
  94, /* 120: theta=0.73631 */
  96, /* 121: theta=0.74245 */
  97, /* 122: theta=0.74858 */
  99, /* 123: theta=0.75472 */
  101, /* 124: theta=0.76085 */
  102, /* 125: theta=0.76699 */
  104, /* 126: theta=0.77313 */
  106, /* 127: theta=0.77926 */
  107, /* 128: theta=0.78540 */
  109, /* 129: theta=0.79153 */
  111, /* 130: theta=0.79767 */
  112, /* 131: theta=0.80381 */
  114, /* 132: theta=0.80994 */
  115, /* 133: theta=0.81608 */
  117, /* 134: theta=0.82221 */
  119, /* 135: theta=0.82835 */
  121, /* 136: theta=0.83449 */
  122, /* 137: theta=0.84062 */
  124, /* 138: theta=0.84676 */
  126, /* 139: theta=0.85289 */
  127, /* 140: theta=0.85903 */
  129, /* 141: theta=0.86517 */
  131, /* 142: theta=0.87130 */
  132, /* 143: theta=0.87744 */
  134, /* 144: theta=0.88357 */
  136, /* 145: theta=0.88971 */
  137, /* 146: theta=0.89584 */
  139, /* 147: theta=0.90198 */
  141, /* 148: theta=0.90812 */
  142, /* 149: theta=0.91425 */
  144, /* 150: theta=0.92039 */
  146, /* 151: theta=0.92652 */
  147, /* 152: theta=0.93266 */
  149, /* 153: theta=0.93880 */
  151, /* 154: theta=0.94493 */
  152, /* 155: theta=0.95107 */
  154, /* 156: theta=0.95720 */
  156, /* 157: theta=0.96334 */
  157, /* 158: theta=0.96948 */
  159, /* 159: theta=0.97561 */
  161, /* 160: theta=0.98175 */
  162, /* 161: theta=0.98788 */
  164, /* 162: theta=0.99402 */
  166, /* 163: theta=1.00016 */
  167, /* 164: theta=1.00629 */
  169, /* 165: theta=1.01243 */
  171, /* 166: theta=1.01856 */
  172, /* 167: theta=1.02470 */
  174, /* 168: theta=1.03084 */
  175, /* 169: theta=1.03697 */
  177, /* 170: theta=1.04311 */
  179, /* 171: theta=1.04924 */
  180, /* 172: theta=1.05538 */
  182, /* 173: theta=1.06151 */
  183, /* 174: theta=1.06765 */
  185, /* 175: theta=1.07379 */
  186, /* 176: theta=1.07992 */
  188, /* 177: theta=1.08606 */
  189, /* 178: theta=1.09219 */
  191, /* 179: theta=1.09833 */
  192, /* 180: theta=1.10447 */
  194, /* 181: theta=1.11060 */
  195, /* 182: theta=1.11674 */
  197, /* 183: theta=1.12287 */
  198, /* 184: theta=1.12901 */
  200, /* 185: theta=1.13515 */
  201, /* 186: theta=1.14128 */
  202, /* 187: theta=1.14742 */
  204, /* 188: theta=1.15355 */
  205, /* 189: theta=1.15969 */
  207, /* 190: theta=1.16583 */
  208, /* 191: theta=1.17196 */
  209, /* 192: theta=1.17810 */
  211, /* 193: theta=1.18423 */
  212, /* 194: theta=1.19037 */
  213, /* 195: theta=1.19651 */
  214, /* 196: theta=1.20264 */
  216, /* 197: theta=1.20878 */
  217, /* 198: theta=1.21491 */
  218, /* 199: theta=1.22105 */
  219, /* 200: theta=1.22718 */
  221, /* 201: theta=1.23332 */
  222, /* 202: theta=1.23946 */
  223, /* 203: theta=1.24559 */
  224, /* 204: theta=1.25173 */
  225, /* 205: theta=1.25786 */
  226, /* 206: theta=1.26400 */
  227, /* 207: theta=1.27014 */
  228, /* 208: theta=1.27627 */
  229, /* 209: theta=1.28241 */
  231, /* 210: theta=1.28854 */
  232, /* 211: theta=1.29468 */
  233, /* 212: theta=1.30082 */
  234, /* 213: theta=1.30695 */
  234, /* 214: theta=1.31309 */
  235, /* 215: theta=1.31922 */
  236, /* 216: theta=1.32536 */
  237, /* 217: theta=1.33150 */
  238, /* 218: theta=1.33763 */
  239, /* 219: theta=1.34377 */
  240, /* 220: theta=1.34990 */
  241, /* 221: theta=1.35604 */
  241, /* 222: theta=1.36217 */
  242, /* 223: theta=1.36831 */
  243, /* 224: theta=1.37445 */
  244, /* 225: theta=1.38058 */
  244, /* 226: theta=1.38672 */
  245, /* 227: theta=1.39285 */
  246, /* 228: theta=1.39899 */
  246, /* 229: theta=1.40513 */
  247, /* 230: theta=1.41126 */
  248, /* 231: theta=1.41740 */
  248, /* 232: theta=1.42353 */
  249, /* 233: theta=1.42967 */
  249, /* 234: theta=1.43581 */
  250, /* 235: theta=1.44194 */
  250, /* 236: theta=1.44808 */
  251, /* 237: theta=1.45421 */
  251, /* 238: theta=1.46035 */
  252, /* 239: theta=1.46649 */
  252, /* 240: theta=1.47262 */
  252, /* 241: theta=1.47876 */
  253, /* 242: theta=1.48489 */
  253, /* 243: theta=1.49103 */
  253, /* 244: theta=1.49717 */
  254, /* 245: theta=1.50330 */
  254, /* 246: theta=1.50944 */
  254, /* 247: theta=1.51557 */
  254, /* 248: theta=1.52171 */
  254, /* 249: theta=1.52784 */
  255, /* 250: theta=1.53398 */
  255, /* 251: theta=1.54012 */
  255, /* 252: theta=1.54625 */
  255, /* 253: theta=1.55239 */
  255, /* 254: theta=1.55852 */
  255, /* 255: theta=1.56466 */
};
