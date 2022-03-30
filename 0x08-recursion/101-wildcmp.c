#include "main.h"
#define RIGHT 1
#define LEFT -1
#define TRUE (1 == 1)
#define FALSE !TRUE
#define MATCH 1
#define NON_MATCH 0
#define END_OF_STRING '\0'
#define WILD_CARD '*'

/**
 * move_p - move pointer to 'character' in 'direction' seeking 'match'
 * @s1: check point to stop in rare circumstances
 * @s2: input string to move pointer from
 * @character: character to find next match or find first non-match of
 * @direction: direction to move pointer
 *     forward (d = RIGHT) or backwards (d = LEFT)
 * @match: find first match (m = MATCH) or non-match of c (m = NON_MATCH)
 * Return: pointer to match in input string
 */
char *move_p(char *s1, char *s2, char character, int direction, int match)
{
	if (s1 == s2 /* checks if string pointers are equal (used if s1 = s1 */
	    || (match == MATCH && *s2 == character)
	    || (match == NON_MATCH && *s2 != character))
		return (s2);
	return (move_p(s1,
		       (direction == RIGHT ? s2 + 1 : s2 - 1),
		       character,
		       direction,
		       match));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
