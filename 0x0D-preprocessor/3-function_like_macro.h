#define ABS(x) ((x) < 0 ? (~x + 1) : (x))
int main(void)
{
	int x;
	int abs_x = ABS(x);

	printf("%d\n", abs_x);
	return (0);
}
