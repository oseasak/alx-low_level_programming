/**
 * converts a binary number to an unsigned int
 * @b: pointer to string 0 and 1 chgars representing a binary number
 *
 * Retur converted unsigned int, or 0 if b contains non-numeric chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (!b)
		return (0);

	for (bit = 0; b[bit] != '\0'; bit++)
	{
		if (b[bit] != '0' && b[bit] != '1')
			return (0);

		result = result << 1;

		if (b[bit] == '1')
			result += 1;
	}

	return (result);
}
