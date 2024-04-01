#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>


extern void returnAge();
extern void playX();
extern void bob();
extern void avgMotzarim();
extern void timeFromAtoB();
extern void findsquare();
extern void circle();
extern void sidra();
extern void sumsidra();
extern void sidraHandasit();
extern void AdiHandsit();
extern void sumSquareDigits();
extern void shalemD();
extern void bobNewSalary();
extern void absulotenum();
extern void eliminateAlis();
extern void takinolo();
extern void inavildorvalid3numbers();
extern void age();
extern void xy();
extern void distance2xy();
extern void functionsquart();
extern void triangleArea();
extern void mazalot();
extern void fizzbuzz();
extern void miktaim();
extern void coins();
extern void neizogi();
extern void sigma();
extern void doUntilMinus1();
extern int squaree(int n);
extern int cube(int n);
extern int pwr(int n,int h);
extern int isEven(int n);
extern int isOdd(int n);
extern int digitsigma(int n);
extern int bigToLow(char ch);
extern int lowToBig(char ch);
extern int charToInt(char dig100, char dig10, char dig1);
extern int sumMeshutafim(int n1, int n2);
extern int zeroOrOneMehalkim(int n);
extern void decimaltobinary(int n);
extern int mehalekmini(int num);
extern  int mehalekmax(int num);
extern int sumzogiolo(int num);
extern int displayzogiolo(int num);
extern int retzef(int num);
extern int binarytodecimal(int binary);
int decimaltobinary1(int decimal);
int rec(int num1, int num2);
int mehalekgadol(int num);
void shever(int mone, int mehane);
int Lcm(int num1, int num2);
int calxn(int x, int n);
int lucas(int n);
int lucasnotrecursive(int n);
int pellseries(int n);
int pellseriesnonrecrusive(int n);
int seriescrazy(int n);
int seqNonRec(int n);
int biggestinsidra(int num);
int smallestinsidra(int num);
int bintodec(int num);
int printchars(int num, char c1, char c2);
int newminusnum(int num);
int newmaximumnum(int num);
void threepointers(int* num1ptr, int* num2ptr, int* num3ptr);
double avgforn(int num, double digit, int* ptr);
int gzira(int c, int x, int n, int* newC, int* newN);
int arrsumbiggstpair(int a[], int n);
int twolessthankey(int* arr, int size, int key, int* a, int* b);
void maxmax(int* arr, int size, int* max_even, int* even, int* max_odd, int* odd);
int palindrom(int arr[], int size);
int palindorm_recursive(int* arr, int size);
int printarr_rec(int* arr, int size);
int printarreverse_rec(int* arr, int size);
double arrAvg_rec(int* arr, int size);
double riseanddown(double* arr, int size);
int ifrisingsum(int* arr, int size);
int ifrisingsum_rec(int* arr, int size);
int* lucas1(int n);
int* evenarray(int* arr, int size, int isEven, int* newSize);
int* kefelarr(int* arr, int size);
int* missingnums(int* arr, int size, int* newsize);
int mosttimes_arr(int* arr, int size);
int biggestshows(int* arr, int size);
int missingone(int* A, int n);
int* wheel_arr(int* arr, int size, int amount);
int* newarr_biggers(int* arr, int size);
int isitin(char* s1, char* s2);
int tmoraStr(char* s1, char* s2);
void mergeStr(char* str);
void numrizeit(char* str);
int tmoraPolindrom(char* str);
char* howtobepalindrom(char* str, int* size);
int ifalike(char* str1, char* str2);
char* tiny_str(char* str, int index, int length);
void remove_chars(char* str, char* to_remove, int size);
int missing_num(int* arr, int n);
int missing_num_logn(int* arr, int n);
int zogot_memuyan(int* arr, int k, int key);
int find_closest(int* arr, int n, int k);
int circle_memuyan(int* arr, int n);
int mitapes(int* pos, int* neg, int n, int* pos_index, int* neg_index);
int countones(int* arr, int n);
int hefresh(int* arr, int n, int d);
int missingaformb(int* a, int n, int* b);
int counttimesofx(int* arr, int n, int x);
void sortPairsArray(int* arr, int k);
extern void swap(int* num1Ptr, int* num2Ptr);
void onezerotwo(int* arr, int n);
void makeitorgenised(int* arr, int n);
void rearrangeposneg(int* arr, int n);


void main2()
{
	
	
}
//îòáãú áéú îñ 1, ùàìä 1
 void returnAge()
 {
    int currnetyear;
	printf("write year");
	scanf_s("%d", &currnetyear);
	int age;
	printf("write age");
	scanf_s("%d", &age);
	
	printf("year of birth is : %d", currnetyear - age);
 }
 //îòáãú áéú îñ 1, ùàìä 2
 static void playX()
 {
     printf("*           *\n");
	 printf("  *       *\n");
	 printf("    *   *\n");
	 printf("      *\n");
	 printf("    *   *\n");
	 printf("  *       *\n");
	 printf("*           *\n");

 }
 //îòáãú áéú îñ 1, ùàìä 3
 void bob()
 {
	 printf("write id\n");
	 long id;
	 scanf_s("%ld", &id);
	 printf("write payment per hour\n");
	 double payperhour;
	 scanf_s("%lf", &payperhour);
	 printf("write working hours per day\n");
	 int hoursperday;
	 scanf_s("%d", &hoursperday);
	 printf("write how much days you work in a week\n");
	 int daysworkperweek;
	 scanf_s("%d", &daysworkperweek);
	 printf("write the year you were fired\n");
	 int yearoffire;
	 scanf_s("%d", &yearoffire);
	 printf("write the year you started working\n");
	 int yearstartwork;
	 scanf_s("%d", &yearstartwork);
	 double paymentperday = payperhour * hoursperday;
	 double paymentpermonth = paymentperday * 31;
	 int yearsofworking = yearoffire - yearstartwork;
	 double pitzoi = yearsofworking * paymentpermonth;
	 printf("pitzoi for %d is: %.0lf",id, pitzoi);


 }
 //îòáãú áéú 1 ùàìä 4
 void avgMotzarim()
 {
	 int motzarA, motzarB;
	 double PriceA, PriceB;
	 printf("write how much items you bought from item A and B\n");
	 scanf_s("%d %d", &motzarA, &motzarB);
	 printf("write the price of one item for A and for B\n");
	 scanf_s("%lf %lf", &PriceA, &PriceB);
	 double avgprice = (motzarA * PriceA + motzarB * PriceB) / motzarA + motzarB;
	 printf("the average is: %.2f", avgprice);
 }
 //îòáãú áéú 1 ùàìä 5
 void timeFromAtoB()
 {
	 int distance, speed;
	 printf("write distance and speed\n");
	 scanf_s("%d %d", &distance, &speed);
	 double time = (double)distance / speed ;
	 int minutes = (int)time * 60;
	 printf("it took %d : %d to get from A to B",minutes/60,minutes% 60);
     
 }

 //îòáãú áéú 2 ùàìä 1
 void findsquare()
 {
	 printf("write length of a line in a square\n");
	 int line;
	 scanf_s("%d", &line);
	 int align = line * line + line * line;
	 align = sqrt(align);
	 printf("the Diagonal is : %d unit long", align);
 }

 //îòáãú áéú 2 ùàìä 2
 void circle()
 {
	 double r;
	 printf("write radius\n");
	 scanf_s("%lf", &r);
	 double hekef = 2 * 3.14 * r;
	 double shetah = 3.14 * r * r;
	 double vol = (4 / 3) * 3.14 * (r * r * r);
	 printf("hekef is: %.2f\n shetah is: %.2f\n volume is: %.2f", hekef, shetah, vol);


 }
 
 //îòáãú áéú 2 ùàìä 3
 void sidra()
 {
	 printf("write a1, d and n\n");
	 int n;
	 double a1, d;
	 scanf_s("%lf %lf %d", &a1, &d, &n);
	 double an = a1 * (n - 1);
	 printf("the number you requested is: a%d = %f", n, an);


 }

 //îòáãú áéú 2 ùàìä 4
 void sumsidra()
 {
	 printf("write a1, d and n\n");
	 int n;
	 double a1, d;
	 scanf_s("%lf %lf %d", &a1, &d, &n);
	 double an = a1 * (n - 1);
	 double sum = n * (a1 + an) / 2;
	 printf("the sum is: %.3f", sum);
 }

 //îòáãú áéú 2 ùàìä 5
 void sidraHandasit()
 {
	 printf("write a1, q and n\n");
	 int n;
	 double a1, q;
	 scanf_s("%lf %lf %d", &a1, &q, &n);
	 double an = a1 * pow(q, n - 1);
	 printf("a%d = %.2f", n, an);

 }

 //îòáãú áéú 2 ùàìä 6
 void AdiHandsit()
 {
	 printf("write a1, q and n\n");
	 int n;
	 double a1, q;
	 scanf_s("%lf %lf %d", &a1, &q, &n);
	 double an = (a1 * (pow(q, n) - 1)) / (q - 1);
	 printf("%.2f", an);
 }

 //îòáãú áéú 2 ùàìä 7
 void sumSquareDigits()
 {
	 printf("write 3 digits number\n");
	 int n;
	 scanf_s("%d",&n);
	 int sum;
	 int n1, n2;
	 int n3;
	 n1 = n / 100;
	 n2 = (n / 10) % 10;
	 n3 = n % 10;
	 sum = pow(n1, 2) + pow(n2, 2) + pow(n3, 2);
	 printf("sum is: %d", sum);
 }

 //îòáãú áéú 2 ùàìä 8
 void shalemD()
 {
	 double d;
	 printf("write a number\n");
	 scanf_s("%lf", &d);
	 int dint = (int)d;
	 double rest = d - dint;
	 printf("%.2f", rest);
 }

 //îòáãú áéú 2 ùàìä 9
 void bobNewSalary()
 {
	 double previousSalary, pitzoi;
	 printf("write previos salary and pitzoi\n");
	 scanf_s("%lf %lf", &previousSalary, &pitzoi);
	 double newSar = 0.75 * previousSalary + 0.1 * pitzoi;
	 printf("%.2f", newSar);
 }

 //îòáãú áéú 3 ùàìä 1
 void absulotenum()
 {
	 double n;
	 printf("write a number\n");
	 scanf_s("%lf", &n);
	 printf("%d", (int)n);
 }

 //îòáãú áéú 3 ùàìä 2
 void eliminateAlis()
 {
	 double price;
	 int amount;
	 printf("write price and amount\n");
	 scanf_s("%lf %d", &price, &amount);
	 double finalprice = price * amount;
	 if (amount >= 50)
	 {
		 finalprice = finalprice - (finalprice / 2);
	 }
	 else if (amount >= 25 && amount < 50)
	 {
		 finalprice = finalprice - (finalprice * 0.2);
	 }
	 else if (amount > 10 && amount < 25)
	 {
		 finalprice = finalprice - (finalprice * 0.05);
	 }
	 printf("the final price is: %.2f", finalprice);
 }

 //îòáãú áéú 3 ùàìä 3
 void takinolo()
 {
	 int n;
	 printf("write a number\n");
	 scanf_s("%d", &n);
	 if (n < 0)
	 {
		 printf("not valid");
	 }
	 else
	 {
		 if (n % 2 == 0 && n % 3 == 0 && n % 5 != 0)
		 {
			 printf("valid");
			 return;
		 }
		 else
		 {
			 if (n % 2 != 0 && n % 7 != 0 && n % 11 != 0)
			 {
				 printf("valid");
				 return;
			 }
		 }
	 }
	 printf("not valid");
 }

 //îòáãú áéú 3 ùàìä 4
 void inavildorvalid3numbers()
 {
	 int n1, n2, n3;
	 printf("write 3 numbers\n");
	 scanf_s("%d %d %d",&n1,&n2,&n3);
	 if (n1 % n2 == 0 || n2 % n1 ==0)
	 {
		 if (n2 % n3 == 0 || n3 % n2 == 0)
		 {
			 if (n3 % n1 == 0 || n1 % n3 == 0)
			 {
				 printf("valid numbers");
				 return;
			 }
		 }
	 }
	 printf("invalid numbers");
 }

 //îòáãú áéú 3 ùàìä 5
 void age()
 {
	 time_t currentTime;
	 time(&currentTime);
	 struct tm* localTime = localtime(&currentTime);
	 int year = localTime->tm_year + 1900;   
	 int month = localTime->tm_mon + 1;      
	 int day = localTime->tm_mday;

	 int birthday, birthmonth, birthyear;
	 printf("write day/month/year\n");
	 scanf_s("%d %d %d", &birthday, &birthmonth, &birthyear);
	 int age = year - birthyear;
	 if (birthmonth > month)
	 {
		 age--;
	 }
	 else
	 {
		 if (birthmonth == month)
		 {
			 if (birthday < day)
			 {
				 age--;
			 }
		 }
	 }
	 printf("your age is: %d", age);

	 
 }

 //îòáãú áéú 3 ùàìä 6
 void xy()
 {
	 int x, y;
	 printf("write x and y\n");
	 scanf_s("%d %d", &x, &y);
	 if (x > 0 && y > 0)
		 printf("the point(%d,%d) is in the 1st quarter", x, y);
	 if (x < 0 && y> 0)
		 printf("the point(%d,%d) is in the 2nd quarter", x, y);
	 if (x < 0 && y < 0)
		 printf("the point(%d,%d) is in the 3rd quarter", x, y);
	 if (x > 0 && y < 0)
		 printf("the point(%d,%d) is in the 4th quarter", x, y);

 }

 //îòáãú áéú 3 ùàìä 7
 void distance2xy()
 {
	 int x1, y1, x2, y2;
	 printf("write (x,y) of two points\n");
	 scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	 double distance = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));
	 printf("the distance is: %.2f", distance);
 }

 //îòáãú áéú 3 ùàìä 8
 void functionsquart()
 {
	 int a, b, c;
	 printf("write mekadmim\n");
	 scanf_s("%d %d %d", &a, &b, &c);
	 double x1 = -1 * b + (pow(b, 2) - 4 * a * c) / 2 * a;
	 double x2 = -1 * b - (pow(b, 2) - 4 * a * c) / 2 * a;
	 printf("x1: %.2f \nx2: %.2f", x1, x2);
 }
 
 //îòáãú áéú 3 ùàìä 9
 void triangleArea()
 {
	 int hypotenuse, height;
	 printf("write hypotensue and height\n");
	 scanf_s("%d %d", &hypotenuse, &height);
	 if (height != hypotenuse / 2)
	 {
		 printf("not a 90deg triangle");
		 return;
	 }
	 int area = (height * hypotenuse) / 2;
	 printf("the area is: %d", area);
 }

 //îòáãú áéú 3 ùàìä 10
 void mazalot()
 {
	 int birthday, birthmonth, birthyear;
	 printf("write day/month/year\n");
	 scanf_s("%d %d %d", &birthday, &birthmonth, &birthyear);
	 if ((birthday >= 21 && birthday <= 31 && birthmonth == 3) || (birthday >= 1 && birthday <= 20 && birthmonth == 4))
		 printf("tale");
	 else if ((birthday >= 21 && birthday <= 31 && birthmonth == 4) || (birthday >= 1 && birthday <= 20 && birthmonth == 5))
		 printf("shor");
	 else if ((birthday >= 21 && birthday <= 31 && birthmonth == 5) || (birthday >= 1 && birthday <= 21 && birthmonth == 6))
		 printf("teomim");
	 else if ((birthday >= 22 && birthday <= 31 && birthmonth == 6) || (birthday >= 1 && birthday <= 22 && birthmonth == 7))
		 printf("sartan");
	 else if ((birthday >= 23 && birthday <= 31 && birthmonth == 7) || (birthday >= 1 && birthday <= 22 && birthmonth == 8))
		 printf("leo");
	 else if ((birthday >= 23 && birthday <= 31 && birthmonth == 8) || (birthday >= 1 && birthday <= 22 && birthmonth == 9))
		 printf("virgin");
	 else if ((birthday >= 23 && birthday <= 31 && birthmonth == 9) || (birthday >= 1 && birthday <= 23 && birthmonth == 10))
		 printf("moznaim");
	 else if ((birthday >= 24 && birthday <= 31 && birthmonth == 10) || (birthday >= 1 && birthday <= 21 && birthmonth == 11))
		 printf("aqrab");
	 else if ((birthday >= 22 && birthday <= 31 && birthmonth == 11) || (birthday >= 1 && birthday <= 21 && birthmonth == 12))
		 printf("keshet");
	 else if ((birthday >= 22 && birthday <= 31 && birthmonth == 12) || (birthday >= 1 && birthday <= 20 && birthmonth == 1))
		 printf("gdi");
	 else if ((birthday >= 21 && birthday <= 31 && birthmonth == 1) || (birthday >= 1 && birthday <= 18 && birthmonth == 2))
		 printf("dli");
	 else if ((birthday >= 19 && birthday <= 31 && birthmonth == 2) || (birthday >= 1 && birthday <= 20 && birthmonth == 3))
		 printf("fish");

	 
 }

 //îòáãú áéú 4 ùàìä 1
 void fizzbuzz()
 {
	 int n;
	 printf("write a number ");
	 scanf_s("%d", &n);
	 for (size_t i = 1; i <= n ; i++)
	 {
		 if (i % 3 == 0 && i % 5 != 0 && i % 15 != 0)
			 printf("Fizz, ");
		 else if (i % 5 == 0 && i % 3 != 0 && i % 15 != 0)
			 printf("Buzz, ");
		 else if (i % 15 == 0)
			 printf("fizzBuzz, ");
		 else printf("%d, ", i);
		
	 }
 }

 //îòáãú áéú 4 ùàìä 2
 void miktaim()
 {
	 int n;
	 printf("write a number\n");
	 scanf_s("%d", &n);
	 int qaurter = 0;
	 for (size_t i = 0; i <= n; i++)
	 {
		 if (i % 26 == 0)
			 qaurter++;

	 }
	 printf("the quarter is: %d", qaurter);

 }

 //îòáãú áéú 4 ùàìä 3
 void coins()
 {
	
	 
	 int money,shekel20=0, shekel10=0, shekel5=0, shekel2=0, shekel1=0;
	 printf("write amount\n");
	 scanf_s("%d", &money);
	 while (money != 0)
	 {
		 if (money >= 20)
		 {
			 shekel20 = money / 20;
			 money = money % 20;
		 }
		 if (money< 20 && money >= 10)
		 {
			 shekel10 = money / 10;
			 money = money % 10;
		 }
		 if (money >= 5 && money < 10)
		 {
			 shekel5 = money / 5;
			 money = money % 5;
		 }
		 if (money >=2 && money < 5)
		 {
			 shekel2 = money / 2;
			 money = money % 2;
		 }
		 if (money == 1)
		 {
			 shekel1 = money / 1;
			 money = money % 1;
		 }
		
	 }
	 printf("%d , 20NIS\n%d , 10NIS\n%d , 5NIS\n%d , 2NIS\n%d , 1NIS", shekel20, shekel10, shekel5, shekel2, shekel1);

 }

 //îòáãú áéú 4 ùàìä 4
 void neizogi()
 {
	 int n;
	 printf("write a num\n");
	 scanf_s("%d", &n);
	 int sum = 0;
	 int number;
	 for (size_t i = 1; i <= n; i++)
	 {
		 printf("write a number to sum\n");
		 scanf_s("%d", &number);
		 if (number % 2 != 0 && number % 3 !=0)
		 {
			 sum += number;
		 }
	 }
	 printf("the sum is: %d", sum);
 }

 //îòáãú áéú 4 ùàìä 5
 void sigma()
 {
	 printf("write a number\n");
	 int n;
	 scanf_s("%d", &n);
	 double natzeret=1,sigmasum=0;
	 for (size_t i = 1; i <= n; i++)
	 {
		 natzeret *= i;
		 sigmasum += i;
	 }
	 printf("%.2f", (natzeret / sigmasum));
 }

 //îòáãú áéú 4 ùàìä 6
 void doUntilMinus1()
 {
	 int max = 0, min = 0, counter = 0 , number;
	 printf("write a number\n");
	 scanf_s("%d", &number);
	 if (number == -1)
	 {
         printf("0 numbers,no max nor min");
		 return;
	 }
	 max = number;min = number;
	while (number !=-1)
	{
    	 if (number > max)
			 max = number;
		 if (number < min)
			 min = number; 
	
		 printf("write a number\n");
		 scanf_s("%d", &number);
	
		 counter++;

	}
	printf("%d numbers; min=%d; max=%d", counter, min, max);
 }

 //îòáãú áéú 4 ùàìä 7
 int digitscount1(int n)
 {
	 int digit;
	 int counter = 0;
	 while (n != 0)
	 {
		 digit = n % 10;
		 counter++;
		 n = n / 10;
	 }
	 return counter;
 }
 void decimaltobinary(int n)
 {
	 long number = 0;
	 int i = 0;
	 while (n != 0)
	 {
		 number += (n % 2) * pow(10, i);
		 n = n / 2;
		 i++;
	 }
	
	 printf("%d\n", number);
	
	 
	
	
 }



 //îòáãú áéú 5 ùàìä 1
 int squaree(int n)
 {
	 return n * n;
 }
 int cube(int n)
 {
	 return n * n * n;
 }
 int pwr(int n, int h)
 {
	 return pow(n, h);
 }

 //îòáãú áéú 5 ùàìä 2
 int isEven(int n)
 {
	 return n % 2 == 0;
 }
 int isOdd(int n)
 {
	 return !isEven(n);
 }

 //îòáãú áéú 5 ùàìä 3
 long digitsigma(int n)
 {
	 long sigma = 0;
	 for (size_t i = 0; i <= n-1; i++)
	 {
		 sigma += 1 * pow(10, i);
	 }
	 return sigma;
	
 }

 //îòáãú áéú 5 ùàìä 4
 int bigToLow(char ch)
 {
	 int charnum = (int)ch;
	 if (charnum < 65 || charnum > 90)
	 {
         printf("-1\n");
		 return -1;
	 }
		
	 return charnum + 32;

 }
 int lowToBig(char ch)
 {
	 int charnum = (int)ch;
	 if (charnum < 97 || charnum > 122)
	 {
		 printf("-1\n");
		 return -1;
	 }

	 return charnum - 32;

 }
 
 //îòáãú áéú 5 ùàìä 5
 int charToInt(char dig100, char dig10, char dig1)
 {
	 if (((int)dig100 >= 48 && (int)dig100  <= 57) && ((int)dig10 >= 48 && (int)dig10 <= 57) && ((int)dig1 >= 48 && (int)dig1 <= 57))
	 {
		 
		 return 100 * (int)(dig100 - 48) + 10 * (int)(dig10 - 48) +  (int)(dig1 - 48);
	 }
	 return 0;
 }

 //îòáãú áéú 5 ùàìä 6
 int sumMeshutafim(int n1, int n2)
 {
	 int sum = 0;
	 for (size_t i = 1; i <= fmin(n1,n2)/2; i++)
	 {
		 if (n1 % i == 0 && n2 % i == 0)
			 sum += i;
	 }
	 if (n2 % n1 == 0 || n1 % n2 == 0)
		 sum += fmin(n1, n2);
	 return sum;
 }
	
 //îòáãú áéú 5 ùàìä 7
 int zeroOrOneMehalkim(int n)
 {
	 /*int sqrt1 = sqrt(n);
	 if (sqrt1 % 2 == 0)
		 return 1;
	 else
		 return 0;*/
 }

 //îòáãú áéú 5 ùàìä 8
 int mehalekmini(int num)
 {
	 if (num % 2 == 0)
		 return 2;
	 if (num >= 3)
	 {
		 for (size_t i = 3; i <= sqrt(num); i++)
		 {
			 if (num % i == 0)
			 {
				 return i;
			 }
		 }

	 }
	 return num;
	
 }

 //îòáãú áéú 5 ùàìä 9
 int mehalekgadol(int num)
 {
	 if (num % 2 == 0)
		 return num / 2;
	 for (size_t i = (num / 2)-1; i >= 3; i--)
	 {
		 if (num % i == 0)
			 return i;
	 }
	 return 1;
 }

 //îòáãú áéú 5 ùàìä 10
 int gcd(int a, int b)
 {
	 for (size_t i = fmin(a,b); i >= 1; i--)
	 {
		 if (a % i == 0 && b % i == 0)
			 return i;
	 }
 }
 void shever(int mone, int mehane)
 {
	 printf("%d\n---\n%d", mone / gcd(mone, mehane), mehane / gcd(mone, mehane));
 }

 //ìà æåëø îàéôä æä
 int mehalekmax(int num)
 {
	 if (num == 2)
		 return 1;
	 if (num % 2 == 0)
		 return num / 2;
	 for (size_t i = num/2; i >= 3; i--)
	 {
		 if (num % i == 0)
			 return i;
	 }
	 return 1;
 }

 //îòáãú áéú 5 ùàìä 11
 int Lcm(int num1, int num2)
 {
	 return (num1 * num2) / gcd(num1, num2);
 }

 //îòáãú áéú 6 ùàìä 1
 int calxn(int x,int n)
 {
	 if (n==0)
		 return 1;
	 if (n % 2 == 0)
		 return   calxn(x,n/2) * calxn(x, n / 2);
	 else
		 return  x*calxn(x,n/2)* calxn(x,n / 2);
 }

 //îòáãú áéú 6 ùàìä 2 à
 int lucas(int n)
 {
	 if (n == 0)
		 return 2;
	 if (n == 1)
		 return 1;
	 return lucas(n - 1) + lucas(n - 2);
 }
 //îòáãú áéú 6 ùàìä 2 á
 int lucasnotrecursive(int n)
 {
	 
	 int nzero = 2, none = 1,cur=none,finalx=0;
	 if (n == 0)
		 return nzero;
	 if (n == 1)
		 return none;
	
	 while (n-1 != 0)
	 {
		 finalx = nzero + cur;
		 cur = finalx;
		 nzero = none;
		 n--;
	 }
	 return finalx;
 }

 //îòáãú áéú 6 ùàìä 3 à
 int pellseries(int n)
 {
	 if (n == 0)
		 return 0;
	 if (n == 1)
		 return 1;
	 return 2 * pellseries(n - 1) + pellseries(n - 2);
 }

 //îòáãú áéú 6 ùàìä 3 á
 int pellseriesnonrecrusive(int n)
 {
	 if (n == 0)
		 return 0;
	 if (n == 1)
		 return 1;
	 int n1=0, n2=1, result=0;
	 while (n!=0)
	 {
		 result = 2 * n2 + n1; 
		 n1 = n2; 
		 n2 = result;
		 n--;
	 }
	 return result;
 }

 //îòáãú áéú 6 ùàìä 4 à
 int seriescrazy(int n)
 {
	 if (n == 1 || n == 2 || n == 3)
		 return 1;
	 if (n > pow(2, n) && n % 2 == 0)
		 return seriescrazy(n - 1) + seriescrazy(n - 2) + seriescrazy(n - 3);
	 else
		 return seriescrazy(n - 1) - seriescrazy(n - 3);
 }

 //îòáãú áéú 6 ùàìä 4 á
 int seqNonRec(int n)
 {
	 int prevPrev, prev, curr, temp, i;
	 prevPrev = prev = curr = 1;
	 if (n >= 0 && n <= 2)
		 return 1;
	 for (i = 3; i <= n; i++) {
		 if (i % 2 == 0)
			 temp = curr + prev + prevPrev;
		 else
			 temp = curr - prevPrev;
		 prevPrev = prev;
		 prev = curr;
		 curr = temp;
	 }
	 return curr;
 }
 
 //îòáãú áéú 6 ùàìä 5
 int biggestinsidra(int num)
 {
	 int cur, prev;
	 printf("enter a number\n");
	 scanf_s("%d", &cur);
	 if (num >1)
	 {
		 prev = biggestinsidra(num - 1);
		 cur= cur > prev ? cur : prev;
	 }
	 return cur;
 }

 //îòáãú áéú 6 ùàìä 6
 int smallestinsidra(int num)
 {
	 int cur, prev;
	 printf("enter a number\n");
	 scanf_s("%d", &cur);
	 if (num > 1)
	 {
		 prev = biggestinsidra(num - 1);
		 cur = cur < prev ? cur : prev;
	 }
	 return cur;
 }
 
 //îòáãú áéú 6 ùàìä 7
 int bintodec(int num)
 {
	 if (num == 0)
		 return 0;
	 return 10 * bintodec(num / 2) + (num % 2);
 }

 //îòáãú áéú 6 ùàìä 8
 int printchars(int num, char c1, char c2)
 {
	/* if (num>=1)
	 {
		 printf("%c",c1);
		 
	 }*/

 }


 //îòáãú áéú 6 ùàìä 9
 int newminusnum(int num)
 {
	 if (num < 10)
		 return (num + 9) % 10;
	 return 10 * newminusnum(num / 10)  + (num + 9) % 10;
 }

 int newmaximumnum(int num)
 {
	 if (num < 10)
		 return (num + 1) % 10;
	 return 10 * newmaximumnum(num / 10) + (num + 1) % 10;
 }

 //îòáãú áéú 6 ùàìä 10

 int  sumzogiolo(int num)
 {
	 if (num < 10)
		 return num % 2 == 0 ? 1 : 0;
	 int a = sumzogiolo(num % 10) + sumzogiolo(num / 10);
	 return a % 2 == 0 ? 1 : 0;
 }

 //îòáãú áéú 6 ùàìä 11
 int displayzogiolo(int num)
 {
	 if (num == 0)
	 {
		 return 1;
	 }
	 if (num % 2 ==0 && (num / 10) % 2==0 || num % 2 == 1 && (num / 10) % 2 == 1)
	 {
		 return 0;
	 }
	 return displayzogiolo(num / 100);
 }

 //îòáãú áéú 6 ùàìä 12
 int retzef(int num)
 {
	 if (num == 0)
	 {
		 return 1;
	 }
	 if (num % 2 == 0 && (num / 10) % 2 == 0 || num % 2 == 1 && (num / 10) % 2 == 1)
	 {
		 return retzef(num / 10);
	 }
	 else
	 {
		 return 0;
	 }
	 return displayzogiolo(num / 10);
 }

 int binarytodecimal(int binary)
 {
	 if (binary == 0)
		 return 0;
	 return 2* binarytodecimal(binary/10)+ (binary % 10);
 }
 int decimaltobinary1(int decimal)
 {
	 if (decimal == 0)
		 return 0;
	 return 10* decimaltobinary1(decimal / 2) + decimal % 2;
 }
 int rec(int num1, int num2)
 {
	 if (num2 >= num1)
		 return 1;
	 return 1 + rec(num1-num2, num2);
 }


 //îòáãú áéú 7 ùàìä 1
 void threepointers(int* num1ptr, int* num2ptr, int* num3ptr)
 {
	
	 int sizes[3] = { *num1ptr,*num2ptr,*num3ptr };
	 int temp;
	 for (size_t i = 0; i < 3; i++)
	 {
		 for (size_t j = 0; j < 3; j++)
		 {
			 if (sizes[i] > sizes[j])
			 {
				 temp = sizes[j];
				 sizes[j] = sizes[i];
				 sizes[i] = temp;
			 }
		 }
	 }
	
	 *num1ptr = sizes[2];
	 *num2ptr = sizes[1];
	 *num3ptr = sizes[0];
	 printf("num3ptr=%d\nnum2ptr=%d\nnum1ptr=%d", *num3ptr, *num2ptr, *num1ptr);
 }

 //îòáãú áéú 7 ùàìä 2
 double avgforn(int num, double digit, int* ptr)
 {
	 int counter = 0;
	 double sum = 0;
	 while (num!=0)
	 {
		 if (num % 10 < digit)
		 {
            sum += num % 10;
			counter++;
		 }
		
		 num = num / 10;
		 
	 }
	 *ptr = counter;
	 return (double)(sum / counter);
 }


 //îòáãú áéú 7 ùàìä 3
 int gzira(int c, int x, int n, int* newC, int* newN)
 {
	 *newC = c * n;
	 *newN = n - 1;
	 return *newC * pow(x, *newN);


	 //ùîúé àú æä áîééï
	/* int c = 4, n = 3;
	 int* c1 = &c;
	 int* n1 = &n;
	 printf("%d", gzira(*c1, 2, *n1, &c1, &n1));*/

 }
 

 //îòáãú áéú 7  ùàìä 4
 int arrsumbiggstpair(int a[], int n)
 {
	 int b[2] = { 0,0 };
	 for (size_t i = 0; i <= n-2; i++)
	 {
		 if (a[i] > b[0] && a[i+1] > b[1])
		 {
			 b[0] = a[i];
			 b[1] = a[i + 1];
		 }
	 }
	 return b[0] + b[1];
	 

	 //ùîúé áîééï
	/* int a[] = { 1,2,3,4,5,6,7,8 };
	 printf("%d", arrsumbiggstpair(a, 9));*/
 }


 //îòáãú áéú 7 ùàìä 5
 int twolessthankey(int* arr, int size, int key,int* a,int* b)
 {
	 int min1 = arr[0] < arr[1] ? arr[0]:arr[1];
	 int min2 = arr[0] < arr[1] ? arr[1] : arr[0];
	 int i;
	 for (i = 2; i < size; i++)
	 {
		 if (arr[i] < min1)
		 {
			 min2 = min1;
			 min1 = arr[i];
		 }
		 else if (arr[i] < min2)
			 min2 = arr[i];
	 }
	 if (min1+min2 < key)
	 {
		 *a = min1;
		 *b = min2;
		 return 1;
	 }
	 *a = *b = -1;
	 return 0;

	 //ùîúé áîééï
	 /*int arr[5] = { 1,6,2,4,3 };
	int a1, b1;
	printf("%d\n", twolessthankey(&arr, 5, 4, &a1, &b1));
	printf("%d,%d", a1, b1);*/
 }
 

 //îòáãú áéú 7 ùàìä 6
 void maxmax(int* arr, int size, int* max_even, int* even, int* max_odd, int* odd)
 {
	 int i;
	 *even = *odd = 0;
	 int maxeven = NULL, maxodd = NULL;
	 for (i = 0; i < size; i++)
	 {
		 if (arr[i] > maxeven && arr[i] % 2 == 0)
		 {
			 maxeven = arr[i];
			 *even = 1;
		 }
			
		 if (arr[i] > maxodd && arr[i] % 2 != 0)
		 {
			 maxodd = arr[i];
			 *odd = 1;
		 }
			
	 }
	 *max_even = maxeven;
	 *max_odd = maxodd;
	 
	 //îä ùùîúé áîééï
	 /*int a[] = { 2,6,8,4,4,6,2,2 };
	 int maxeven = 0, maxodd = 0, even, odd;
	 maxmax(&a, 8, &maxeven, &even, &maxodd, &odd);
	 printf("%d,%d,%d,%d", maxeven, maxodd, even, odd);*/
 }


 //îòáãú áéú 7 ùàìä 7
 int palindrom(int arr[], int size)
 {
	 int ileft =0, iright = size-1;
	 while (ileft != iright && iright != ileft+1)
	 {
		 if (arr[ileft] != arr[iright])
			 return 0;
		 ileft++;
		 iright--;
	 }
	 return 1;
 }
 
 int palindorm_recursive(int* arr, int size)
 {
	 if (size <= 1)
		 return 1;
	 return arr[0] != arr[size - 1] ? 0 : palindorm_recursive(arr + 1, size - 2);

	 //îä ùùîúé áîééï
	/* int a[] = { 1,2,2,1 };
	 printf("%d", palindorm_recursive(a, 4));*/
 }

 //îòáãú áéú 7 ùàìä 8 à
 int printarr_rec(int* arr, int size)
 {
	 if (size == 1)
	 {
        printf("[%d]", arr[0]);
		return NULL;
	 }
		 
	 printf("[%d],", arr[0]);
	 return printarr_rec(arr + 1, size - 1);
 }

 //îòáãú áéú 7 ùàìä 8 á
 int printarreverse_rec(int* arr, int size)
 {
	 if (size == 1)
	 {
		 printf("[%d]", arr[size - 1]);
		 return;
	 }
	 printf("[%d]", arr[size - 1]);
	 return printarreverse_rec(arr, size - 1);
 }

 //îòáãú áéú 7 ùàìä 9
 double arrAvg_rec(int* arr, int size)
 {
	 if (size == 1)
		 return arr[0];
	double sum = arrAvg_rec(arr,size-1);
	sum *= (size - 1);
	sum += arr[size - 1];
    return sum/size;
 }
 
 //îòáãú áéú 7 ùàìä 10
 double riseanddown(double* arr, int size)
 {
	 if (size == 1)
		 return 1;
	 if ((int)arr[size-2] <= (int)arr[size-1] && (arr[size-1]-(int)arr[size-1]) < (arr[size - 2] - (int)arr[size - 2]))
	 {
		 return riseanddown(arr, size - 1);
	 }
	 return 0;

	 //ùîúé áîééï
	/* double a[] = { 4.5,5.3,6.2 };
	 printf("%d", (int)riseanddown(a, 3));*/
 }

 //îòáãú áéú 7 ùàìä 11 à
 int ifrisingsum(int* arr, int size)
 {
	 int i,sum=0;
	 for (i = 0; i < size-1; i++)
	 {
		 sum += arr[i];
		 if (arr[i + 1] <= sum)
			 return 0;
	 }
	 return 1;

	 //ùîúé àú æä áîééï
	/* int a[] = { 1,2,5,9,20,40 };
	 printf("%d", ifrisingsum(a, 6));*/
 }

 //îòáãú áéú 7 ùàìä 11 á
 int ifrisingsum_rec(int* arr, int size)
 {
	 int result;
	 if (size == 1)
		 return 1;
	 result = ifrisingsum_rec(arr, size - 1);
	 if (result && arr[size - 1] > arr[size - 2]) {
		 arr[size - 1] += arr[size - 2];
		 return 1;
	 }
	 return 0;
 }
 
//îòáãú áéú 8 ùàìä 1
 int* lucas1(int n)
 {
	 int* arr = (int*)calloc(n + 1, sizeof(int));
	 int i;
	 arr[0] = 2;
	 arr[1] = 1;
	 for (i = 2; i <= n; i++)
	 {
		 arr[i] = arr[i - 1] + arr[i - 2];
	 }
	 return arr;

	 //ùîúé áîééï
	/* int n = 9;
	 int* a = lucas1(n);
	 for (size_t i = 0; i <= n; i++)
	 {
		 printf("[%d]", a[i]);
	 }*/
 }

 //îòáãú áéú 8 ùàìä 2
 int* evenarray(int* arr, int size,int isEven,int* newSize)
 {
	 int* arr_results=(int*)calloc(size,sizeof(int));
	 assert(arr_results);
	 int i,newsize=0;
	 for (i = 0; i < size; i++)
	 {
		 if (arr[i]%2==0 && isEven==1)
		 {
			 arr_results[newsize] = arr[i];
			 newsize++;
		 }
		 if (arr[i]%2 !=0 && isEven!=1)
		 {
			 arr_results[newsize] = arr[i];
			 newsize++;
		 }
	 }
	 *newSize = newsize;
	 return arr_results;
 }

 //îòáãú áéú 8 ùàìä 3
 int* vectors(int* a, int* b)
 {
	 int* c = (int*)calloc(3, sizeof(int));
	 c[0] = a[1] * b[2] - a[2] * b[1];
	 c[1] = a[2] * b[0] - a[0] * b[2];
	 c[2] = a[0] * b[1] - a[1] * b[0];
	 return c;
 }

 //îòáãú áéú 8 ùàìä 4
 int* kefelarr(int* arr, int size)
 { 
	 int* ltor = (int*)malloc(size * sizeof(int));
	 int* rtol = (int*)malloc(size * sizeof(int));
	 assert(ltor);assert(rtol);
	 int i, kfolot=1;
	 ltor[0] = 1;
	 for (i = 1; i < size; i++)
	 {
		 kfolot *= arr[i - 1];
		 ltor[i] =kfolot;
	 }
	 rtol[size - 1] = 1;
	 kfolot = 1;
	 for  (i = size-2; i >= 0 ; i--)
	 {
		 kfolot *= arr[i+1];
		 rtol[i] = kfolot;
	 }
	 for (i = 0; i < size; i++)
	 {
		 arr[i] = ltor[i] * rtol[i];
	 }
	 free(ltor);
	 free(rtol);
	 return arr;
 }

 //îòáãú áéú 8 ùàìä 5
 int* missingnums(int* arr, int size, int* newsize)
 {
	 int* newarr = (int*)calloc(size+1, sizeof(int));
	 assert(newarr);
	 int i;
	 *newsize = 0;
	 for (i = 0; i < size; i++)
	 {
		 newarr[arr[i]]++;
	 }
	
	 for (i = 0; i < size+1; i++)
	 {
		 if (newarr[i] == 0)
			 *newsize=*newsize+1;
		 
	 }
	 int* newest = (int*)calloc(*newsize, sizeof(int));
	 assert(newest);
	 int index = 0;
	 for (i = 0; i < size+1; i++)
	 {
		 if (newarr[i] ==0)
		 {
			 newest[index] = i;
			 index++;
		 }
	 }
	 free(newarr);
	 return newest;

	 //ùîúé áîééï
	 /*int a[] = { 0,1,1,0,3,5 };
	 int newsize;
	 int* b = missingnums(&a, 6, &newsize);
	 for (size_t i = 0; i < newsize; i++)
	 {
		 printf("[%d]", b[i]);
	 }*/
 }

 //îòáãú áéú 8 ùàìä 6
 int mosttimes_arr(int* arr, int size)
 {
	 int* counter_arr = (int*)calloc(size + 1, sizeof(int));
	 assert(counter_arr);
	 int i;
	 for (i = 0; i < size; i++)
	 {
		 counter_arr[arr[i]]++;
	 }
	 int biggest = size/2;
	 int result = -1;
	 for (i = 0; i < size+1; i++)
	 {
		 if (counter_arr[i] ==biggest)
		 {
			 result = -1;
		 }
		 if (counter_arr[i]>biggest)
		 {
			 biggest = counter_arr[i];
			 result = 1;
		 }
		 

	 }
	 free(counter_arr);
	 return result;

	 //ùîúé áîééï
	/* int a[] = { 1,1,3,2,2 };
	 printf("%d", mosttimes_arr(&a, 5));*/
 }

 //îòáãú áéú 8 ùàìä 7
 int biggestshows(int* arr, int size)
 {
	 int* counter_arr = (int*)calloc(size+1, sizeof(int));
	 assert(counter_arr);
	 int i;
	 for (i = 0; i < size; i++)
	 {
		 counter_arr[arr[i]] += arr[i];
	 }
	 int biggest_index = -1,biggest=0;
	 for (i = 0; i < size+1; i++)
	 {
		 if (counter_arr[i]>biggest)
		 {
			 biggest_index = i;
			 biggest = counter_arr[i];
		 }
	 }
	 free(counter_arr);
	 return biggest_index;
 }

 //îòáãú áéú 8 ùàìä 8
 int missingone(int* A, int n)
 {
	 int* counter_arr = (int*)calloc(n+1, sizeof(int));
	 assert(counter_arr);
	 int i;
	 for (i = 0; i < n; i++)
	 {
		 counter_arr[A[i]]++;

	 }
	 for (i = n; i >= 0; i--)
	 {
		 if (counter_arr[i] == 0)
		 {
			 free(counter_arr);
			 return i;
		 } 
			 
	 }
	 return -1;

	 //ùîúé áîééï
	/* int a[] = { 7,4,5,6,1,4,0 };
	 printf("%d", missingone(&a, 7));*/
 }

 //îòáãú áéú 8 ùàìä 9
 int* spinOneTime(int* arr,int size)
 {
	 int* arr_help = (int*)calloc(size, sizeof(int));
	 assert(arr_help);
	 arr_help[0] = arr[size - 1];
	 int i,temp=arr[0];
	 for (i = 0; i < size-1; i++)
	 {
		 arr_help[i + 1] = arr[i];
	 }
	 return arr_help;
 }
 int* wheel_arr(int* arr, int size,int amountToSpin)
 {
	 if (amountToSpin == 0 || amountToSpin % size==0)
		 return arr;
	 int i;
	 for (i = 1; i <= amountToSpin; i++)
	 {
		arr= spinOneTime(arr, size);
	 }
	 return arr;

	 //ôúøåï äøáä éåúø éòéì
	/* int i;
	 int* temp = (int*)malloc(size * sizeof(int));
	 for (i = 0; i < size; i++)
		 temp[(i + amount) % size] = arr[i];
	 for (i = 0; i < size; i++)
		 arr[i] = temp[i];
	 free(temp);*/
 }

//îòáãú áéú 8 ùàìä 10
 int* newarr_biggers(int* arr, int size)
 {
	 int* newarr = (int*)calloc(size, sizeof(int));
	 assert(newarr);
	 newarr[size - 1] = -1;
	 int i = 0, j = 1;
	 bool found = false;
	 while (i<size-1)
	 {
		 if (arr[j] > arr[i] && found==false)
		 {
		   newarr[i] = arr[j];
		   found = true;
		 }
		 if (j == size - 1 )
		 {
			 i++;
			 j = i + 1;
			 newarr[i] = -1;
			 found = false;
		 }
		 else
			 j++;
	 }
	 return newarr;

	 //òåã ôúøåï
	/* int i, j;
	 int* newArr = (int*)malloc(size * sizeof(int));
	 for (i = 0; i < size; i++)
		 newArr[i] = -1;
	 for (i = 0; i < size; i++) {
		 for (j = i + 1; j < size; j++) {
			 if (arr[j] > arr[i]) {
				 newArr[i] = arr[j];
				 break;
			 }
		 }
	 }
	 return newArr;*/

    //ùîúé áîééï
	/* int a[] = { 6,3,9,10,11,5 };
	 int* b = newarr_biggers(a, 6);
	 for (size_t i = 0; i < 6; i++)
	 {
		 printf("[%d]", b[i]);
	 }*/
 }

 //îòáãú áéú 9 ùàìä 1
 int isitin(char* s1,char* s2)
 {
	 int count[26] = { 0 };
	 int i;
	 for (i = 0; s2[i]; i++)
		 count[s2[i] - 'a']++;
	 for (i = 0; s1[i]; i++) {
		 count[s1[i] - 'a']--;
		 if (count[s1[i] - 'a'] < 0)
			 return 0;
	 }
	 return 1;
 }

 //îòáãú áéú 9 ùàìä 2
 int tmoraStr(char* s1, char* s2)
 {
	 if (strlen(s1) != strlen(s2))
		 return 0;
	 int count[27] = { 0 };
	 int i = 0;
	 while (s1[i]!='\0')
	 {
		 count[s1[i] - 'a']++;
		 count[s2[i] - 'a']--;
		 i++;
	 }
	 for (i = 0; i < 27; i++)
	 {
		 if (count[i] != 0)
			 return 0;
	 }
	 return 1;
 }

 //îòáãú áéú 9 ùàìä 3
 void mergeStr(char* str)
 {
	  int i = 0,j=0;
	  while (str[i] != '\0')
	  {
		  if (str[i] == str[i+1])
		  {
			  j = i;
			  while (str[j])
			  {
				  str[j] = str[j + 1];
				  j++;
			  }
		  }
		  if (str[i]!=str[i+1])
		  {
			  i++;
		  }
	  }



	 //ãøê éåúø éòéìä
	/* int i, j;
	 for (i = 1, j = 1; str[i]; i++)
     {
	     if (str[i] != str[j - 1])
		 {
           str[j] = str[i];
		   j++;
		 }
			
	 }	
	 str[j] = '\0';*/
	
 }


 //îòáãú áéú 9 ùàìä 4
 void numrizeit(char* str)
 {
	 int i, j, count = 1;
	 for (i = 0,j=0; str[i]; i++)
	 {
		 if (str[i] != str[i + 1]) {
			 str[j] = str[i];
			 j++;
			 if (count > 1) {
				 str[j] = count + '0';
				 j++;
			 }
			 count = 1;
		 }
		 else
			 count++;
	 }
	 str[j] = '\0';
 }

 //îòáãú áéú 9 ùàìä 5
 int tmoraPolindrom(char* str)
 {
	 int counters[27] = { 0 };
	 int i = 0;
	 while (str[i] != '\0')
	 {
		 counters[str[i] - 'a']++;
		 i++;
	 }
	 int validation = 0;
	 for (i = 0; i < 27; i++)
	 {
		 if (counters[i] == 1)
			 validation++;
	 }
	 if (validation > 1)
		 return 0;
	 return 1;
 }
 
 //îòáãú áéú 9 ùàìä 6
 char* howtobepalindrom(char* str,int* size)
 {

	 char* chars_to_remove = (char*)malloc(strlen(str));
	 assert(chars_to_remove);
	 int counters[27] = { 0 };
	 int i = 0;
	 while (str[i]!='\0')
	 {
		 counters[str[i] - 'a']++;
		 i++;
	 }
	 int flag = 0,newindex=0;
	 for (i = 0; i < 27; i++)
	 {
		 if (flag==1 && counters[i] == 1)
		 {
			 chars_to_remove[newindex] = i + 'a';
			 newindex++;
		 }
		 if (counters[i] ==1)
		 {
			 flag = 1;
		 }
	 }
	 *size = newindex;
	 return chars_to_remove;
 }

 //îòáãú áéú 9 ùàìä 7
 int ifalike(char* str1, char* str2)
 {
	 if (strlen(str1) != strlen(str2))
		 return 0;
	 int i = 0;
	 while (str1[i] != '\0')
	 {
		 if (abs(str1[i] - str2[i]) != 32 && str1[i] != str2[i])
			 return 0;
		 i++;
	 }
	 return 1;
 }

 //îòáãú áéú 9 ùàìä 8
 char* tiny_str(char* str, int index, int length)
 {
	 char* newstr = (char*)malloc(length+1);
	 int i,j;
	 for (i = index,j=0; j < length; j++,i++)
	 {
		 if (!str[i])
			 return NULL;
		 newstr[j] = str[i];
	 }
	 newstr[j] = '\0';
	 return newstr;
 }

 //îòáãú áéú 9 ùàìä 9
 typedef char* verylong;
 verylong add_verylong(verylong vl1, verylong vl2)
 {
	 
 }


 //îòáãú áéú 9 ùàìä 10
 void remove_chars(char* str, char* to_remove, int size)
 {
	 int count[52] = { 0 };
	 int i, j;
	 for (i = 0; i < size; i++)
	 {
		 if (to_remove[i] >= 'A' && to_remove[i] <= 'Z')
			 count[2 * (to_remove[i] - 'A')] = 1;
		 else
			 count[2 * (to_remove[i] - 'a') + 1] = 1;
	 }
	 for (i = 0,j=0; i < strlen(str); i++)
	 {
		 if ((str[i] >= 'A' && str[i] <= 'Z' && count[2*(str[i]-'A')]==0) || (str[i] >= 'a' && str[i] <= 'z' && count[2*(str[i]-'a') +1] ==0))
		 {
			 str[j] = str[i]; 
			 j++;
		 }
	 }
	 str[j] = '\0';
 }

 //îòáãú áéú 10 ùàìä 1
 int missing_num(int* arr, int n)
 {
	 int i,sum_arr=0,sumindexes=0;
	 for (i = 0; i < n; i++)
	 {
		 sumindexes += i;
		 sum_arr += arr[i];
	 }
	 return (sumindexes + n) - sum_arr;
 }

 //îòáãú áéú 10 ùàìä 2

 int missing_num_logn(int* arr, int n)
 {
	 if (arr[n - 1] == n - 1)
		 return n;
	 int low = 0,high=n-1,mid = n/2;
	 int determined = 0;
	 while (low!=high)
	 {
		 if (mid == arr[mid] && determined == 0)
		 {
			 low = mid;
			 determined = 1;
		 }
		 else if (mid != arr[mid] && determined == 0)
		 {
			 high = mid;
			 determined = 2;
		 }
		 if (determined==1)
		 {
			 if (arr[low] != low)
			 {
				 return low;
			 }
			 low++;
		 }
		 if (determined==2)
		 {
			 if (arr[low] != low)
			 {
				 return low;
			 }
			 low++;
		 }
	 }

	 //[0,1,2,4,5]
	/* int low, mid, high;
	 low = 0;
	 high = n - 1;
	 while (low <= high) {
		 mid = (high - low) / 2 + low;
		 if (arr[mid] == mid) {
			 low = mid + 1;
		 }
		 else
			 high = mid - 1;
	 }
	 return low;*/
 }

 //îòáãú áéú 10 ùàìä 3
 int zogot_memuyan(int* arr, int k, int key)
 {
	 int low=0, mid, high=k-1;
	 while (low<=high)
	 {
		 mid = (high + low) / 2 + low;
		 if (arr[2 * mid] + arr[2 * mid + 1] == key)
			 return 1;
		 else if (arr[2 * mid] + arr[2 * mid + 1] < key)
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	 return 0;

 }

 //îòáãú áéú 10 ùàìä 4
 int find_closest(int* arr, int n, int k)
 {
	 if (k > arr[n - 1])
		 return arr[n - 1];
	 if (k < arr[0])
		 return arr[0];
	 int low = 0, mid, high = n - 1;
	 while (low<=high)
	 {
		 mid = (high-low) / 2+low;
		 if (arr[mid] < k)
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	 return arr[mid];
 }

 //îòáãú áéú 10 ùàìä 5
 int circle_memuyan(int* arr, int n)
 {
	 int low = 0, mid, high=n-1;
	 while (low<high)
	 {
		 mid = (high - low) / 2+low;
		 if (arr[mid] < arr[high])
			 high = mid;
		 else
			 low = mid + 1;

	 }
	 return low;
 }

 //îòáãú áéú 10 ùàìä 6
 int mitapes(int* pos, int* neg, int n, int* pos_index, int* neg_index)
 {
	 int i = 0, j = 0;
	 while (i < n)
	 {
		 if (pos[i] == abs(neg[j]))
		 {
			 *pos_index = i;
			 *neg_index = j;
			 return 1;
		 }
		 j++;
		 if (j == n)
		 {
			 j = 0;
			 i++;
		 }
	 }
	 *pos_index = *neg_index = -1;
	 return 0;

	 //áîééï
	/* int arr[] = { 1,4,8,11 };
	 int arr2[] = { -5,-6,-11,-7 };
	 int posindex = -1, negindex = -1;
	 printf("%d \n%d\n%d", mitapes(&arr, &arr2, 4, &posindex, &negindex), posindex, negindex);*/
 }

 //îòáãú áéú 10 ùàìä 7
 int countones(int* arr, int n)
 {
	 if (arr[n - 1] == 1)
		 return n;
	 if (arr[0] == 0)
		 return 0;
	 int low = 0, mid, high = n - 1;
	 while (low<=high)
	 {
		 mid = (high - low) / 2 + low;
		 if (arr[mid] == 1 && arr[mid + 1] == 0)
			 return mid + 1;
		 if (arr[mid] == 1 && arr[mid + 1] == 1)
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	
 }
 int countonesbyt(int* arr, int n)
 {

 }



 //îòáãú áéú 10 ùàìä 8
 int hefresh(int* arr, int n, int d)
 {
	 int low = 0, mid, high = n - 2;
	 while (low<=high)
	 {
		 mid = (high - low) / 2 + low;
		 if (arr[mid + 1] - arr[mid] == d)
			 return mid;
		 if (arr[mid+1] - arr[mid] <d)
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	 return -1;
 }


 //îòáãú áéú 10 ùàìä 9
 int missingaformb(int* a, int n, int* b)
 {
	 int low = 0, mid, high = n - 1;
	 while (low<=high)
	 {
		 mid = (high - low) / 2 +low;
		 if (a[mid] != b[mid] && a[mid-1] == b[mid-1])
			 return b[mid];
		 if (a[mid] == b[mid])
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	 
 }

 //îòáãú áéú 10 ùàìä 10
 //ìà ñééîúé
 int counttimesofx(int* arr, int n, int x)
 {
	 int low = 0, mid, high = n - 1, count = 0;
	 while (low<=high)
	 {
		 mid = (high - low) / 2 + low;
		 if (arr[mid] == x && arr[high] == x)
			 return (high - mid) + 1;
		 if (arr[mid] < x)
			 low = mid + 1;
		 else
			 high = mid - 1;
	 }
	 return count;
 }

 //îòáãú áéú 11 ùàìä 1
 void sortPairsArray(int* arr, int k)
 {
	 /*int i,a,b;
	 for (i = 0; i < k; i+2)
	 {
		 if (arr[i] > arr[i + 2] && arr[i + 1] > arr[i + 3])
		 {
			 a = arr[i];
			 b = arr[i + 1];
			 arr[i] = arr[i + 2];
			 arr[i + 1] = arr[i + 3];
			 arr[i + 2] = a;
			 arr[i + 3] = b;
		 }
	 }*/
 }
 //îòáãú áéú 11 ùàìä 2
 void onezerotwo(int* arr, int n)
 {
	 int i,zero=0,one=0,two=0;
	 for  (i = 0; i < n; i++)
	 {
		 if (arr[i] == 0) zero++;
		 if (arr[i] == 1)one++;
		 if (arr[i] == 2)two++;
	 }
	 i = 0;
	 while (zero!=0)
	 {
		 arr[i] = 0;
		 zero--;
		 i++;
	 }
	 while (one!=0)
	 {
		 arr[i] = 1;
		 one--;
		 i++;
	 }
	 while (two!=0)
	 {
		 arr[i] = 2;
		 two--;
		 i++;
	 }
 }

 //îòáãú áéú 11 ùàìä 3
 void makeitorgenised(int* arr, int n)
 {
	 int* count_arr = (int*)calloc(n + 1, sizeof(int));
	 assert(count_arr);
	 int i;
	 for ( i = 0; i < n; i++)
	 {
		 count_arr[arr[i]]++;
	 }
	 int j=0;
	 i = 0;
	 while (i<n)
	 {
		 if (count_arr[j] != 0)
		 {
			 arr[i] = j;
			 i++;
			 count_arr[j]--;
		 }
		 else
			 j++;
	 }
 }
//îòáãú áéú 11 ùàìä 4
 void rearrangeposneg(int* arr, int n)
 {
	 int i = 0, j = n - 1;
	 while (i < n && arr[i] >= 0)
		 i++;
	 while (j >= 0 && arr[j] < 0)
		 j--;
	 while (i < j) {
		 swap(&arr[i], &arr[j]);
		 while (i < n && arr[i] >= 0)
			 i++;
		 while (j >= 0 && arr[j] < 0)
			 j--;
	 }
 }

 //îòáãú áéú 11 ùàìä 7
