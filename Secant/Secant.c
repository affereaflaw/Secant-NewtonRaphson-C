#include <stdio.h>
#include <math.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int i;
	float a, b, c, itr;
	float X0, X1, F0, F1, Xb, Err, er;
	char ex;
	
	printf("Metode Secant\n");
	printf("Persamaan ax^2+bx+c\n\n");
	printf("Masukkan a : ");
	scanf("%f", &a);
	printf("Masukkan b : ");
	scanf("%f", &b);
	printf("Masukkan c : ");
	scanf("%f", &c);
	printf("f(x)=%.2fx^2+%.2fx+%.2f\n", a, b, c);
	printf("Masukkan X0\n");
	scanf("%f", &X0);
	printf("Masukkan X1\n");
	scanf("%f", &X1);
	printf("Masukkan batas maksimal error : ");
	scanf("%f", &er);
	printf("Masukkan batas maksimal iterasi : ");
	scanf("%f", &itr);
	printf("X0\t\t");
	printf("X1\t\t");
	printf("f(x0)\t\t");
	printf("f(x1)\t\t");
	printf("iterasi\t\t");
	printf("X baru\t\t");
	printf("Error\n");
	for(i=0;i<itr;i++){
		printf("%.6f\t", X0);
		printf("%.6f\t", X1);
		F0=a*X0*X0+b*X0+c;
			printf("%.6f\t", F0);
		F1=a*X1*X1+b*X1+c;
			printf("%.6f\t", F1);
		Xb=X1-(F1*(X0-X1)/(F0-F1));
		Err=fabs((Xb-X1)/Xb)*100;
		printf("%d\t\t", i);
		printf("%.6f\t", Xb);
		printf("%.6f  %\n", Err);
		X0=X1;
		X1=Xb;
		if(Err<er){
			printf("Maka akarnya untuk error < %.5f persen adalah %.6f", er, X0);
			break;
		}
	}	
	getch();
}
