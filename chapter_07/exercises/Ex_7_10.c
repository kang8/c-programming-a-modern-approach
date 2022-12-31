/**
 * Suppose that i is a variable of type int, j is a variable of type long, and k
 * is a variable of type unsigned int. What is the type of the expression i +
 * (int) j * k?
 *
 * ---
 *
 * unsigned int. The expression will automatically promotes to wildest type.
 * j(long) is casting to int, k(unsigned int) is wildest type.
 */
