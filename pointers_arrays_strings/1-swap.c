/**
 * swap_int - function that swaps the values of two integers.
 *
 * description: This function swap the values of two integers.
 *
 *@a : The first int value change.
 *@b : the second int value change.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
