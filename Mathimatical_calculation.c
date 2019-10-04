#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
//
void perumetr_trukytnuka();
float plohcha_trukytnuka_tru_storonu();
float plohcha_trukytnuka_tru_storonu_rand();
void plohcha_trukytnuka_dvi_storonu_kyt();
void plohcha_trukytnuka_3str_opusRad();
void plohcha_trukytnuka_3str_vpusRad();
void plohcha_trukytnuka_odna_str_dva_kyta();
void porivnanna_plohch_truk();
//
void perumetr_choturukytnuka();
void plohcha_choturukytnuka_diagonali_kytu();
void plohcha_choturukytnuka_storonamu_2kytu();
void plohcha_choturukytnuka_pivperumetr_vpus_rad();
//
void plohcha_kvadrata_za_storonou();
void plohcha_kvadrata_za_diagonally();
//
void plohcha_pramokytnuka_za_storonamu();
//
void plohcha_paralelograma_za_storonamu_kytom();
void plohcha_paralelograma_romba_za_storonou_ta_vusotou();
//
void plohcha_romba_za_storonou_kytom();
void plohcha_romba_za_storonou_vusotou();
void plohcha_romba_za_diagonalamu();
//
void plohcha_trapechii_2storonu_vusota();
//
void petumetr_mnogokytnuka();
void mnogokytnuk_ploscha();
void mnogokytnuk_opus_radius();
void mnogokytnuk_vpus_radius();
//
void ploscha_kryga_za_radiusom();
void ploscha_kryga_za_diametrom();

int main () {
	srand(time(NULL));
	//SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	printf("What is your name? ");
	char user_name[15];
	scanf("%s", user_name);
	printf("Welcome!, %s",user_name);
	int figure,temp; 
	bool mark1, mark2;
	do {
		mark1=false;
		printf("\n\t\t\tPlease select a figure:\n\t1-triangle 2-quadrilateral 3-right polygon 4-circle 5-exit the program\n");
		scanf("%d", &figure);
		switch (figure) {
			case 1: { //triangle
				do {
					mark2=false;
					printf("\t\t\tSpecify what to find in the triangle:\n\t1-The perimeter of the triangle\n\t2-Square on three sides");
					printf("(Heron's formula)\n\t3-Square on 2 sides and corner\n\t4-Square on 3 sides and radius of the described circle");
					printf("\n\t5-Square on 3 sides and radius of inscribed circle\n\t6-Square on one side and 2 corners\n\t");
					printf("7-Comparison of areas of triangles (introduced / random) by Geron\n\t8-Exit\n");
					int action;
					scanf("%d", &action);
					switch(action) {
						case 1: {
							perumetr_trukytnuka();
							break;
						}
						case 2: {
							printf("\n\t\tTask: SQUARE OF A TRIANGLE BY THREE SIDES\n");
							float S=plohcha_trukytnuka_tru_storonu();
							printf("Square= %.3f", S);
							printf("\n");
							break;
						}
						case 3: {
							plohcha_trukytnuka_dvi_storonu_kyt();
							break;
						}
						case 4: {
							plohcha_trukytnuka_3str_opusRad();
							break;
						}
						case 5: {
							plohcha_trukytnuka_3str_vpusRad();
							break;
						}
						case 6: {
							plohcha_trukytnuka_odna_str_dva_kyta();
							break;
						}
						case 7: {
							porivnanna_plohch_truk();
							break;
						}
						case 8: {
							mark2=false;
							break;
						}
						default: {
							mark2=true;
							printf("Please re-enter the action\n");
						}
					}
				}while (mark2);
				printf("Continue using the program?(1-yes 2-no)\n");
				scanf("%d", &temp);
				if (temp==1) mark1=true;
				else printf("Thanks for using the program, goodbye\n");
				break;
			}
			case 2: { //Quadrangle
				do {
					mark2=false;
					printf("\t\t\tSelect a figure:\n\t1-Simple quadrilateral\n\t2-Square\n\t3-Rectangle\n\t4-Parallelogram\n\t5-Rhombus\n\t6-Trapeze");
					printf("\n\t7-Exit\n");
					int action, action_two;
					scanf("%d", &action);
					switch(action) {
						case 1: { //Простий чотирикутник
							bool mark3=false;
							do {
						
								printf("\t\t\tSpecify what to find in the quadrilateral:\n\t1-The perimeter of the quadrilateral\n\t2-Square diagonally and the angle between them");
								printf("\n\t3-Square on the sides and two opposite angles\n\t4-Square in radius and radius of inscribed circle");
								printf("\n\t5-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_choturukytnuka_diagonali_kytu();
										break;
									}
									case 3: {
										plohcha_choturukytnuka_storonamu_2kytu();
										break;
									}
									case 4: {
										plohcha_choturukytnuka_pivperumetr_vpus_rad();
										break;
									}
									case 5: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 2: { //Square
							bool mark3=false;
							do {
								printf("\t\t\tSpecify what to find in the box:\n\t1-The perimeter of the square\n\t2-Square by side length");
								printf("\n\t3-Square by diagonal length\n\t4-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_kvadrata_za_storonou();
										break;
									}
									case 3: {
										plohcha_kvadrata_za_diagonally();
										break;
									}
									case 4: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 3: { //Rectangle
							bool mark3=false;
							do {
								printf("\t\t\tSpecify what to find in the rectangle:\n\t1-The perimeter of the rectangle\n\t2-Square rectangle along the lengths of the sides");
								printf("\n\t3-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_pramokytnuka_za_storonamu();
										break;
									}
									case 3: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 4: { //Parallelogram
							bool mark3=false;
							do {
								printf("\t\t\tSpecify what to find in the parallelogram:\n\t1-Perimeter parallelogram\n\t2-Square parallelogram by length");
								printf(" sides and the angle between them\n\t3-Square side and height parallelogram\n\t4-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_paralelograma_za_storonamu_kytom();
										break;
									}
									case 3: {
										plohcha_paralelograma_romba_za_storonou_ta_vusotou();
										break;
									}
									case 4: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 5: { //rhombus
							bool mark3=false;
							do {
								printf("\t\t\tSpecify what to find in rhombus:\n\t1-Perimeter of rhombus\n\t2-Square side and corner");
								printf("\n\t3-Square side and height\n\t4-Square along the lengths of the diagonals of the rhombus");
								printf("\n\t5-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_romba_za_storonou_kytom();
										break;
									}
									case 3: {
										plohcha_paralelograma_romba_za_storonou_ta_vusotou();
										break;
									}
									case 4: {
										plohcha_romba_za_diagonalamu();
										break;
									}
									case 5: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 6: { //Trapeze
							bool mark3=false;
							do {
								printf("\t\t\tSpecify what to find in the trapezoid:\n\t1-Trapezoid perimeter\n\t2-Square on both sides and height");
								printf("\n\t3-Exit\n");
								scanf("%d", &action_two);
								switch (action_two) {
									case 1: {
										perumetr_choturukytnuka();
										break;
									}
									case 2: {
										plohcha_trapechii_2storonu_vusota();
										break;
									}
									case 3: {
										mark3=false;
										break;
									}
									default: {
										mark2=true;
										printf("Please re-enter the action\n");
									}
								}
							}while(mark3);
							break;
						}
						case 7: { //Exit
							mark2=false;
							break;
						}
						default: {
							mark2=true;
							printf("Please re-enter the action\n");
						}
					}
				}while (mark2);
				printf("Continue using the program?(1-yes 2-no)\n");
				scanf("%d", &temp);
				if (temp==1) mark1=true;
				else printf("Thanks for using the program, goodbye\n");
				break;
			}
			case 3: { //Polygon
				do {
					mark2=false;
					printf("\t\t\tSpecify what to find in the polygon:\n\t1-The perimeter of a polygon\n\t2-Square of the polygon");
					printf("\n\t3-The radius of the circle described\n\t4-The radius of the inscribed circle");
					printf("\n\t5-Exit\n");
					int action;
					scanf("%d", &action);
					switch(action) {
						case 1: {
							petumetr_mnogokytnuka();
							break;
						}
						case 2: {
							mnogokytnuk_ploscha();
							break;
						}
						case 3: {
							mnogokytnuk_opus_radius();
							break;
						}
						case 4: {
							mnogokytnuk_vpus_radius();
							break;
						}
						case 5: {
							mark2=false;
							break;
						}
						default: {
							mark2=true;
							printf("Please re-enter the action\n");
						}
					}
				}while (mark2);
				printf("Continue using the program?(1-yes 2-no)\n");
				scanf("%d", &temp);
				if (temp==1) mark1=true;
				else printf("Thanks for using the program, goodbye\n");
				break;
			}
			case 4: { //Circle
				do {
					mark2=false;
					printf("\t\t\tSpecify what to find in a circle:\n\t1-Square of a circle along the length of the circle radius\n\t2-Square circle along the length of the diameter of the circle");
					printf("\n\t3-Exit\n");
					int action;
					scanf("%d", &action);
					switch(action) {
						case 1: {
							ploscha_kryga_za_radiusom();
							break;
						}
						case 2: {
							ploscha_kryga_za_diametrom();
							break;
						}
						case 3: {
							mark2=false;
							break;
						}
						default: {
							mark2=true;
							printf("Please re-enter the action\n");
						}
					}
				}while (mark2);
				printf("Continue using the program?(1-yes 2-no)\n");
				scanf("%d", &temp);
				if (temp==1) mark1=true;
				else printf("Thanks for using the program, goodbye\n");
				break;
				
			}
			case 5: {
				printf("Thanks for using the program, goodbye\n");
				break;
			}
			default: {
				mark1=true;
				printf("Please re-enter the figure\n");
			}
		}
	} while(mark1);
}

void perumetr_trukytnuka() {
	printf("\n\t\tTask: PERIMETER OF THE TRIANGLE\n");
	float a, b, c;
	bool permission=false;
	do {
		printf("Enter the three sides of the triangle: ");
		scanf(("%f %f %f"), &a, &b, &c);
		if ((a+b>c&&a+c>b&&b+c>a)&&(a>0&&b>0&&c>0)){
			permission=true;
			float P=a+b+c;
			printf("The perimeter of the triangle= %.3f", P);
			printf("\n");
		}
		else printf("No such triangle exists, re-enter the sides\n");
	}while(!permission);
}

float plohcha_trukytnuka_tru_storonu() {
	float a, b, c, S;
	bool permission=false;
	do {
		printf("Enter the three sides of the triangle: ");
		scanf(("%f %f %f"), &a, &b, &c);
		if ((a+b>c&&a+c>b&&b+c>a)&&(a>0&&b>0&&c>0)){
			permission=true;
			S=sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
			return S;
		}
		else printf("No such triangle exists, re-enter the sides\n");
	}while(!permission);
}

float plohcha_trukytnuka_tru_storonu_rand() {
	float a, b, c, S;
	do {
		a= 1+rand() % 50;
		b= 1+rand() % 50;
		c= 1+rand() % 50;
	}while(!((a+b>c&&a+c>b&&b+c>a)&&(a>0&&b>0&&c>0)));
	printf("The sides of the triangle: a= %.3f, b= %.3f, c=%.3f\n", a,b,c);
	S=sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
	return S;
}
void plohcha_trukytnuka_dvi_storonu_kyt() {
	printf("\n\t\tTask: A SIDE OF A TRIANGLE ON TWO SIDES AND ANGLE\n");
	float a, b, fi, S;
	bool permission=false;
	do {
		printf("Enter the two sides of the triangle and the angle between them: ");
		scanf(("%f %f %f"), &a, &b, &fi);
		if (a>0&&b>0&&fi>1){
			permission=true;
			S= 1./2*(a*b*sin(fi));
			printf("Square of triangle= %.3f", S);
			printf("\n");
		}
		else printf("No such triangle exists, re-enter the sides and angle again\n");
	}while(!permission);
}

void plohcha_trukytnuka_3str_opusRad() {
	printf("\n\t\tTask: SQUARE OF A TRIANGLE WITH THREE SIDES AND A DESCRIBED RADIUS\n");
	float a, b, c, R;
	bool permission=false;
	do {
		printf("Enter the three sides of the triangle and the radius described: ");
		scanf(("%f %f %f %f"), &a, &b, &c, &R);
		if ((a+b>c&&a+c>b&&b+c>a)&&(a>0&&b>0&&c>0)&&R>0){
			permission=true;
			float S= (a*b*c)/(4*R);
			printf("Square of triangle= %.3f", S);
			printf("\n");
		}
		else printf("No such triangle exists, re-enter the sides and radius again\n");
	}while(!permission);
}
void plohcha_trukytnuka_3str_vpusRad() {
	printf("\n\t\tTask: SQUARE OF A TRIANGLE WITH THREE SIDES AND RADIUS\n");
	float a, b, c, r;
	bool permission=false;
	do {
		printf("Enter the three sides of the triangle and the radius entered: ");
		scanf(("%f %f %f %f"), &a, &b, &c, &r);
		if ((a+b>c&&a+c>b&&b+c>a)&&(a>0&&b>0&&c>0)&&r>0){
			permission=true;
			float S= ((a+b+c)/2)*r;
			printf("Square of triangle= %.3f", S);
			printf("\n");
		}
		else printf("No such triangle exists, re-enter the sides and radius again\n");
	}while(!permission);
}

void plohcha_trukytnuka_odna_str_dva_kyta() {
	printf("\n\t\tTask: SQUARE OF A TRIANGLE WITH ONE SIDE AND TWO CORNERS\n");
	float a, alfa, betta;
	bool permission=false;
	do {
		printf("Enter the side of the triangle and the two corners: ");
		scanf(("%f %f %f"), &a, &alfa, &betta);
		if (a>0&&alfa>1&&betta>1&&(alfa+betta<180)){
			permission=true;
			float gamma= 180-alfa-betta;
			float S= (pow(a,2)*sin(betta)*sin(gamma))/(2*sin(alfa));
			if (S<0) S*=(-1);
			printf("Square of triangle= %.3f", S);
			printf("\n");
		}
		else printf("No such triangle exists, re-enter the sides and corners again\n");
	}while(!permission);
}

void porivnanna_plohch_truk() {
	printf("\n\t\tTask: COMPARISONS OF SQUARES OF TRIANGLES AREA ON THE HERONAL FORMULA\n");
	int kilk, i, nomer;
	float *mas, max;
	bool permission=false;
	do {
		printf("\nEnter the number of triangles to compare: ");
		scanf("%d", &kilk);
		if (kilk>1){
			permission=true;
			mas=(float*)malloc(kilk*sizeof(float));
			printf("Enter keyboard sides (1) or set randomly (2)?: ");
			int rand_or_not;
			scanf("%d", &rand_or_not);
			for (i=0; i<kilk;i++) {
				printf("Triangle №%d", i+1);
				printf("\n");
				if (rand_or_not==1) mas[i]=plohcha_trukytnuka_tru_storonu();
				else mas[i]=plohcha_trukytnuka_tru_storonu_rand();
			}
			printf("\n\nOutput of square of triangles:\n\n");
			for (i=0; i<kilk;i++) {
				printf("Square of triangle №%d= %f",i+1,mas[i]) ;
				printf("\n");
			}
			for (i=0;i<kilk;i++) {
				if (max<mas[i]) {
					max=mas[i];
					nomer=i+1;
				}
			}
			printf("\n");
			printf("The largest triangle №%d", nomer);
			printf("\twith value %f", max);
			printf("\n\n");
			free(mas);
		}
		else printf("Please re-enter your details\n");
	}while(!permission);	
}

void perumetr_choturukytnuka() {
	printf("\n\t\tTask: PERIAMETER OF THE QUADEANGLE\n");
	float a, b, c, d;
	bool permission=false;
	do {
		printf("Enter the four sides of the quadrilateral: ");
		scanf(("%f %f %f %f"), &a, &b, &c, &d);
		if ((a<b+c+d||b<a+c+d||c<a+b+d||d<a+b+c)&&(a>0&&b>0&&c>0)){
			permission=true;
			float P=a+b+c+d;
			printf("The perimeter of the quadrilateral= %.3f", P);
			printf("\n");
		}
		else printf("There is no such quadrilateral, re-enter the sides\n");
	}while(!permission);
}

void plohcha_choturukytnuka_diagonali_kytu() {
	printf("\n\t\tTask: A SQUARE OF A QUADRILATERAL WITH DIAGONALS AND AN ANGLE BETWEEN THEM\n");
	float d1, d2, alfa;
	bool permission=false;
	do {
		printf("Enter the diagonals of the quadrilateral and the angle between them: ");
		scanf(("%f %f %f"), &d1, &d2, &alfa);
		if (d1>0&&d2>0&&alfa>0&&alfa<180){
			permission=true;
			float S=1./2*d1*d2*sin(alfa);
			if (S<0) S*=-1;
			printf("Square of quadrilateral= %.3f", S);
			printf("\n");
		}
		else printf("There is no such quadrilateral, enter diagonals and angle again\n");
	}while(!permission);
}

void plohcha_choturukytnuka_storonamu_2kytu() {
	printf("\n\t\tTask: A SQUARE OF A QUADRILATERAL WITH SIDE AND TWO CORNERS\n");
	float a, b, c, d, alfa, betta;
	bool permission=false;
	do {
		printf("Enter all sides of the quadrilateral and two corners: ");
		scanf(("%f %f %f %f %f %f"), &a, &b, &c, &d, &alfa, &betta);
		if ((a>0&&b>0&&c>0&&d>0)&&(alfa>0&&betta>0&&alfa<180&&betta<180)&&(a<b+c+d||b<a+c+d||c<a+b+d||d<a+b+c)){
			permission=true;
			float p=(a+b+c+d)/2;
			float gamma=(alfa+betta)/2;
			float S=sqrt((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*pow(cos(gamma),2));
			if (S<0) S*=-1;
			printf("Square of quadrilateral= %.3f", S);
			printf("\n");
		}
		else printf("There is no such quadrilateral, re-enter the side and corners again\n");
	}while(!permission);
}

void plohcha_choturukytnuka_pivperumetr_vpus_rad() {
	printf("\n\t\tTask: A SQUARE OF A QUADRILATERAL WITH A HALF PERIMETER AND RADIUS OF THE ENTRY CIRCLE\n");
	float p, r;
	bool permission=false;
	do {
		printf("Enter the radius and the radius of the quadrilateral: ");
		scanf(("%f %f"), &p, &r);
		if (p>0&&r>0){
			permission=true;
			float S=p*r;
			printf("Square of quadrilateral= %.3f", S);
			printf("\n");
		}
		else printf("There is no such quadrilateral, enter the radius and radius again\n");
	}while(!permission);
}

void plohcha_kvadrata_za_storonou() {
	printf("\n\t\tTask: A SQUARE OF SQUARE WITH A SIDE\n");
	float a;
	bool permission=false;
	do {
		printf("Enter the side of the square: ");
		scanf("%f", &a);
		if (a>0){
			permission=true;
			float S=pow(a,2);
			printf("Square of square= %.3f", S);
			printf("\n");
		}
		else printf("This square does not exist, re-enter the side\n");
	}while(!permission);
}

void plohcha_kvadrata_za_diagonally() {
	printf("\n\t\tTask: A SQUARE OF SQUARE WITH A DIAGONAL\n");
	float d;
	bool permission=false;
	do {
		printf("Enter the diagonal of the square: ");
		scanf("%f", &d);
		if (d>0){
			permission=true;
			float S=1./2*pow(d,2);
			printf("Square of square= %.3f", S);
			printf("\n");
		}
		else printf("This square does not exist, re-enter the diagonal\n");
	}while(!permission);
}

void plohcha_pramokytnuka_za_storonamu () {
	printf("\n\t\tTask: A SQUARE OF RECTANGLE WITH TWO SIDES\n");
	float a,b;
	bool permission=false;
	do {
		printf("Enter the two sides of the rectangle: ");
		scanf(("%f %f"), &a, &b);
		if (a>0&&b>0){
			permission=true;
			float S=a*b;
			printf("Square of rectangle= %.3f", S);
			printf("\n");
		}
		else printf("No such rectangle exists, re-enter the sides\n");
	}while(!permission);
}

void plohcha_paralelograma_za_storonamu_kytom() {
	printf("\n\t\tTask: A SQUARE OF PARALLELOGRAM WITH TWO SIDES\n");
	float a,b, alfa;
	bool permission=false;
	do {
		printf("Enter two sides of the parallelogram: ");
		scanf(("%f %f %f"), &a, &b, &alfa);
		if (a>0&&b>0&&alfa>0&&alfa<180){
			permission=true;
			float S=a*b*sin(alfa);
			printf("Square of parallelogram= %.3f", S);
			printf("\n");
		}
		else printf("No such parallelogram exists, re-enter sides and angle again\n");
	}while(!permission);
}

void plohcha_paralelograma_romba_za_storonou_ta_vusotou() {
	printf("\n\t\tTask: A SQUARE OF QUADRANGLE WITH SIDE AND HEIGHT\n");
	float a, h;
	bool permission=false;
	do {
		printf("Enter the two sides and the height of the quadrilateral: ");
		scanf(("%f %f"), &a, &h);
		if (a>0&&h>0){
			permission=true;
			float S=a*h;
			printf("Square of quadrilateral= %.3f", S);
			printf("\n");
		}
		else printf("There is no such quadrilateral, re-enter side and height again\n");
	}while(!permission);
}

void plohcha_romba_za_storonou_kytom() {
	printf("\n\t\tTask: A SQUARE OF RHOMBUS WITH SIDE AND ANGLE\n");
	float a, alfa;
	bool permission=false;
	do {
		printf("Enter the side and angle of the rhombus: ");
		scanf(("%f %f"), &a, &alfa);
		if (a>0&&alfa>0&&alfa<180){
			permission=true;
			float S=pow(a,2)*sin(alfa);
			if (S<0) S*=-1;
			printf("Square of rhombus= %.3f", S);
			printf("\n");
		}
		else printf("No such rhombus exists, re-enter side and corner again\n");
	}while(!permission);
}

void plohcha_romba_za_diagonalamu() {
	printf("\n\t\tTask: A SQUARE OF RHOMBUS WITH TWO DIAGONALS\n");
	float d1, d2;
	bool permission=false;
	do {
		printf("Enter two diagonal of rhombus: ");
		scanf(("%f %f"), &d1, &d2);
		if (d1>0&&d2>0){
			permission=true;
			float S=1./2*d1*d2;
			printf("Square of rhombus= %.3f", S);
			printf("\n");
		}
		else printf("No such rhombus exists, enter the diagonals again\n");
	}while(!permission);
}

void plohcha_trapechii_2storonu_vusota() {
	printf("\n\t\tTask: A SQUARE OF TRAPEZE WITH TWO SIDES AND HIGH\n");
	float a, b, h;
	bool permission=false;
	do {
		printf("Enter the two sides of the trapezoid and the height: ");
		scanf(("%f %f %f"), &a, &b, &h);
		if (a>0&&b>0&&h>0){
			permission=true;
			float S=1./2*(a+b)*h;
			printf("Square of trapeze= %.3f", S);
			printf("\n");
		}
		else printf("There is no such trapezoid, re-enter the sides and height again\n");
	}while(!permission);
}

void petumetr_mnogokytnuka() {
	printf("\n\t\tTask: PERIMETER OF A CORRECTIVE POLYGON\n");
	float a, n;
	bool permission=false;
	do {
		printf("Enter the side of the polygon and the number: ");
		scanf(("%f %f"), &a, &n);
		if (a>0&&n>0){
			permission=true;
			float P=a*n;
			printf("Perimeter of the polygon= %.3f", P);
			printf("\n");
		}
		else printf("There is no such polygon, re-enter the side and number again\n");
	}while(!permission);
}

void mnogokytnuk_ploscha() {
	printf("\n\t\tTask: A SQUARE OF A CORRECTIVE POLYGON\n");
	float a, n;
	bool permission=false;
	do {
		printf("Enter the side of the polygon and the number: ");
		scanf(("%f %f"), &a, &n);
		if (a>0&&n>0){
			permission=true;
			float S=1./4*n*pow(a,2)*(cos(M_PI/n)/sin(M_PI/n));
			printf("Square of the polygon= %.3f", S);
			printf("\n");
		}
		else printf("There is no such polygon, re-enter the side and number again\n");
	}while(!permission);
}

void mnogokytnuk_opus_radius() {
	printf("\n\t\tTask: FIND THE DESCRIBED RADIUS OF A CORRECTIVE POLYGON\n");
	float a, n;
	bool permission=false;
	do {
		printf("Enter the side of the polygon and the number: ");
		scanf(("%f %f"), &a, &n);
		if (a>0&&n>0){
			permission=true;
			float R=a/(2*sin(M_PI/n));
			printf("Radius of the described polygon= %.3f", R);
			printf("\n");
		}
		else printf("There is no such polygon, re-enter the side and number again\n");
	}while(!permission);
}

void mnogokytnuk_vpus_radius() {
	printf("\n\t\tTask: FIND THE INSCRIBED RADIUS OF A CORRECTIVE POLYGON\n");
	float a, n;
	bool permission=false;
	do {
		printf("Enter the side of the polygon and the number: ");
		scanf(("%f %f"), &a, &n);
		if (a>0&&n>0){
			permission=true;
			float R=a/(2*tan(M_PI/n));
			printf("The radius of the inscribed polygon= %.3f", R);
			printf("\n");
		}
		else printf("There is no such polygon, re-enter the side and number again\n");
	}while(!permission);
}

void ploscha_kryga_za_radiusom() {
	printf("\n\t\tTask: A SQUARE OF A CIRCLE WITH RADIUS\n");
	float r;
	bool permission=false;
	do {
		printf("Enter the radius of the circle: ");
		scanf("%f", &r);
		if (r>0){
			permission=true;
			float S=M_PI*pow(r,2);
			printf("Square of a circle= %.3f", S);
			printf("\n");
		}
		else printf("There is no such circle, enter the radius again\n");
	}while(!permission);
}

void ploscha_kryga_za_diametrom() {
	printf("\n\t\tTask: A SQUARE OF A CIRCLE WITH DIAMETER\n");
	float d;
	bool permission=false;
	do {
		printf("Enter the diameter of the circle: ");
		scanf("%f", &d);
		if (d>0){
			permission=true;
			float S=1./4*M_PI*pow(d,2);
			printf("Square of a circle= %.3f", S);
			printf("\n");
		}
		else printf("No such circle exists, re-enter diameter\n");
	}while(!permission);
}
