/**
 * We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the
 * number of elements in an array. The expression sizeof(a) / sizeof(t), where t
 * is the type of a's elements, would also work, but it's considered an inferior
 * technique. Why?
 *
 * ---
 *
 * Hard to read. The problem with sizeof(a) / sizeof(t) is that it can't easily
 * be checked for correctness by someone reading the program. (The reader would
 * have to locate the declaration of a and make sure that its elements have type
 * t.)
 */
