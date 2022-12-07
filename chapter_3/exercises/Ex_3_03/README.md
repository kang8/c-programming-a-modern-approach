For each of the following pairs of `scanf` format strings, indicate whether
or not the two strings are equivalent. If they're not, show how they can be
distinguished.

(a) "%d"       versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d" not equal
(c) "%f"       versus "%f "
(d) "%f,%f"    versus "%f, %f"

a, d are equivalent; b, c are not equivalent.

For b, `10 -10 -10` apply to "%d-%d-%d" will get error result, but "%d -%d -%d" is success.

For c, `123.123 .` apply to "%f" will get error result, but "%f " is success.
