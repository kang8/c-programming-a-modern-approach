/**
 * Which one of the following statements is not equivalent to the other
 * two(assuming that the loop bodies are the same)?
 *
 * (a) while (i < 10) {...}
 * (b) for (; i < 10;) {...}
 * (c) do {...} while (i < 10);
 *
 * --
 *
 * c is not equivalent to a and b. With c, running loop body before controlling
 * expression. but the other two, running controlling expression before boop
 * body.
 */
