# Bit-Manipulation


Bit Function
 
A program that will read a number followed by a series of bit operations from a file and 
perform the given operations sequentially on the number.
The operations are as follows:
For example:
set(x, n, v) sets the nth bit of the number x to v
comp(x, n) sets the value of the nth bit of x to its complement (1 if 0 and 0 otherwise)
get(x, n) returns the value of the nth bit of the number x

The least significant bit (LSB) is considered to be index 0.

-------------------------------------------------------------------------------------------------------------------

Bit Count Function

This program determines the parity of a number and the number of 1-bit pairs present in the number. 
Parity means whether a number contains an even or odd number of 1-bits. 
1-bit pairs are defined by two adjacent 1’s without overlap with other pairs.


-------------------------------------------------------------------------------------------------------------------

Bit Pattern Function

A program that determines whether a number’s bit representation is a palindrome.
A palindrome is defined as a sequence that is the same both forwards and backwards.

For example the number 384 has the binary sequence 0000000110000000 and 
is thus a palindrome while the sequence 0100100010111011 is not. 
 All values considered to be  16-bit, so while 5 is 101 in binary and 
looks like a palindrome, in 16 bits it’d be 0000000000000101, which is not.

