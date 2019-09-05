from ctypes import *

palindrome = CDLL('./adder.so')
palindrome.main()

