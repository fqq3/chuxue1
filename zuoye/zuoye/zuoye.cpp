#include<stdio.h>
#include<math.h>
//void main()
//{
//	char C1 = 1300,C2 = 400;
//	C1 = 'a';
//	C2 = 'b';
//	printf("%c %c\n", C1, C2);
//	printf("%d %d\n", C1, C2);
//}
int main()
{
	int x = 0;
	int i=0;
	scanf_s("%d", &x);
	int c = x;
	for (i = 0; x >=10; i++) {
		x /= 10;
	}
	int d = 0;
	int a = 0;
	do {
		d = c;
		c /= pow(10,i);
		printf("%d", c);
		c = d - c * pow(10, i);
		if (i > 0) {
			printf("\t");
		}
		i--;
	} while ( i>= 0);


}

