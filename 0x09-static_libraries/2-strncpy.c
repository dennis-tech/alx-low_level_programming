/**
 *  * _strncpy - copies a string
 *   * @dest: destination to copy
 *    * @src: source to copy
 *     * @n: limit
 *      * Return: copied string
 *       */
char *_strncpy(char *dest, const char *src, int n)
{
		int i;

			for (i = 0; i < n && src[i] != '\0'; i++)
						dest[i] = src[i];
				for ( ; i < n; i++)
							dest[i] = '\0';
					return (dest);
}
