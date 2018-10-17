#include <stdio.h>
#include <math.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int i;
	float a, b, c, itr;
	float X0, F, Ftur, Xb, Err, er;
	char ex;
	
	printf("Metode Newton Rapson\n");
	printf("Persamaan ax^2+bx+c\n\n");
	/*printf("Masukkan a : ");
	scanf("%f", &a);
	printf("Masukkan b : ");
	scanf("%f", &b);
	printf("Masukkan c : ");
	scanf("%f", &c);
	printf("f(x)=%.2fx^2+%.2fx+%.2f\n\n", a, b, c);*/
	printf("Masukkan perkiraan X0\n");
	scanf("%f", &X0);
	printf("Masukkan batas maksimal error : ");
	scanf("%f", &er);
	printf("Masukkan batas maksimal iterasi : ");
	scanf("%f", &itr);
	printf("\nX0\t\t");
	printf("f(x)\t\t");
	printf("f'(x)\t\t");
	printf("iterasi\t\t");
	printf("X baru\t\t");
	printf("Error\t\t");
	printf("F\n");
	for(i=0;i<itr;i++){
		printf("%f\t", X0);
		F=X0*X0*X0*X0*X0-2*X0*X0*X0*X0+3*X0*X0*X0-4*X0*X0+5*X0-6;
			printf("%f\t", F);
		Ftur=5*X0*X0*X0*X0-8*X0*X0*X0+9*X0*X0-8*X0+5;
			printf("%f\t", Ftur);
		Xb=X0-F/Ftur;
		Err=fabs((Xb-X0)/Xb)*100;
		printf("%d\t\t", i);
		printf("%.8f\t", Xb);
		printf("%f  %", Err);
		X0=Xb;
		F=X0*X0*X0*X0*X0-2*X0*X0*X0*X0+3*X0*X0*X0-4*X0*X0+5*X0-6;
			printf("\t%f\n", F);
		if(Err<er){
			printf("Maka akarnya untuk error < %.5f persen adalah %f", er, X0);
			
			break;
		}
	}	
	getch();
}
