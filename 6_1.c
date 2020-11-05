#include <stdio.h>
#include <math.h>

	double Ax, Ay;
	double Bx, By;
	double Cx, Cy;
	double Dx, Dy;

double Leng(double Xa, double Ya, double Xb, double Yb){
	return sqrt((pow(Xa-Xb,2))+(pow(Ya-Yb,2)));
}

void message(){
	printf("\n\t\t Введіть для яких відрізків потрібно обчислити їхню довжину:\n\n");
	printf("\n\t  n:\t\t   n:\n \t1 = AB \t\t12 = AB && BC\n \t2 = BC \t\t13 = AB && CD\n \t3 = CD \t\t123 = AB && BC && CD\n\n");
}

void A(){
	printf("\n\n\nA:\t X = ");///////// A
	scanf("%lf", &Ax);

	printf("\n\t Y = ");
	scanf("%lf", &Ay);
}

void B(){
	printf("\n\n\nB:\t X = ");/////// B
	scanf("%lf", &Bx);

	printf("\n\t Y = ");
	scanf("%lf", &By);
}

void C(){
	printf("\n\n\nC:\t X = ");////////// C
	scanf("%lf", &Cx);

	printf("\n\t Y = ");
	scanf("%lf", &Cy);
}

void D(){
	printf("\n\n\nD:\t X = ");/////// D
	scanf("%lf", &Dx);

	printf("\n\t Y = ");
	scanf("%lf", &Dy);
}

void print(){
	int n;

	message();

	printf("\nn = ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			A(); B();

			printf("\nДовжина відрізка AB = %lf", Leng(Ax, Ay, Bx, By));
			break;

		case 2:
			B(); C();

			printf("\nДовжина відрізка BC = %lf", Leng(Bx, By, Cx, Cy));
			break;

		case 3:
			C(); D();

			printf("\nДовжина відрізка CD = %lf", Leng(Cx, Cy, Dx, Dy));
			break;

		case 12:
			A(); B(); C();

			printf("\nДовжина відрізка AB = %lf", Leng(Ax, Ay, Bx, By));
			printf("\nДовжина відрізка BC = %lf", Leng(Bx, By, Cx, Cy));
			break;

		case 13: case 123:
			A(); B(); C(); D();

			printf("\nДовжина відрізка AB = %lf", Leng(Ax, Ay, Bx, By));

			 if (n == 123)
			 {
			 	printf("\nДовжина відрізка BC = %lf", Leng(Bx, By, Cx, Cy));
			 }

			printf("\nДовжина відрізка CD = %lf", Leng(Cx, Cy, Dx, Dy));
			break;

		default:
			printf("\n\nПомилка, правильно введіть дані:\n\n");
			message();
	}
}

int main(void) {

print();
printf("\n");
return 0;
}