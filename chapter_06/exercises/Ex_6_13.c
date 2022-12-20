/**
 * Rewrite the following loop so that its body is empty:
 *
 * for (n = 0; m > 0; n++)
 *   m /= 2;
 *
 * --
 *
 * for (n = 0; m > 0; n++, m /= 2)
 *   ;
 */
