#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
#include<assert.h>


extern void name();
extern void pi();
extern void trangle();
extern void switchnum();
extern void sum3digits();
extern void upsidedownnum();
extern void dividetime();
extern void calculateGrade();
extern void power();
extern void angryfly();
extern void ab();
extern void max1();
extern void validnums();
extern void threenumbers();
extern void secs();
extern void or3or5();
extern void or3or5B();
extern void sidraDO();
extern void sumzogiEzogi();
extern void binaryconverter();
extern void tmorot();
extern int calculator(int num1, int num2, char op);
extern int reversednumber(int n);
extern int sumnumbertimes(int n);
extern int rishoniolo(int n);
extern int greatestdivider3nums(int n1, int n2, int n3);
extern int ifhaszogi(int num);
extern int fibonachi(int n);
extern int fibonachinotrecursiv(int n);
extern int digitnumbers(int n);
extern int digitssum(int n);
extern int memuyan(int n);
extern int smallerthennum(int num);
extern int onetonum(int num);
extern int numtoone(int num);
void inputArray(int* array, int n);
void inputArrayprint(int* arr, int n);
int numtoonetonum(int num);
double* inputarray(int n);
int* fibonachiarray(int size);
int themosttimes(int* arrnums, int size);
int ktimesarr(int* a, int n, int k);
int subbigfromtiny(int* arr, int size, int a, int b);
void arrCalc(int* arr, int n, int* max, int* min, int* sum, double* avg, int* isEven);
int* switch1(int* arr, int size);
void flipArrayRec(int* arr, int n);
char* doubleit(char str[]);
char howmuchtimes(char* str, int* shows);
int takinolo1(char* str);
char* arrangeit(char* str);
int ifstrpalindrom(char* str);


void main1()
{
	char b[] = "he llo im afik";
	char* a = arrangeit(b);
	printf("%s", b);
}

//מעבדת כיתה 1 שאלה 1
void name()
{
	printf("hello afik");
	
}//מעבדת כיתה 1 שאלה 2
void pi()
{
	double pii = 3.141592;
	printf("%.2f", pii);

}
//מעבדת כיתה 1 שאלה 3
void trangle()
{
	printf("    *\n***  \n*****");
}
//מעבדת כיתה 1 שאלה 4
void ab()
{
	int a, b;
	printf("write two numbers");
	scanf_s("%d %d", &a, &b);
	printf("a * b = %d\na \\ b = %d\na %% b = %d", a * b,a/b,a%b);
}
//מעבדת כיתה 1 שאלה 5
void switchnum()
{
	int a = 5, b = 6;
	printf("a: %d, b: %d\n", a, b);
	printf("a: %d, b: %d", b, a);
}

//מעבדת כיתה 2 שאלה 1
void sum3digits()
{
	printf("write a 3 digit number\n");
	int n;
	scanf_s("%d", &n);
	int sum = 0;
	sum += n % 10;
	n = n / 10;
	sum += n % 10;
	n = n / 10;
	sum += n % 10;
	printf("%d", sum);

}
//מעבדת כיתה 2 שאלה 2
void upsidedownnum()
{
	printf("write a 3 digit number\n");
	int n;
	
	scanf_s("%d", &n);
	int numreverted = 0;
	numreverted = (n % 10) * 100;
	n = n / 10;
	numreverted += (n % 10) * 10;
	n = n / 10;
	numreverted += n % 10;
	printf("the new number is: %d", numreverted);


}
// מעבדת כיתה 2 שאלה 3
void dividetime()
{
	printf("write number of days\n");
	int days;
	scanf_s("%d", &days);
	int yearsfinal = days / 365;
	days = days % 365;
	int monthsfinal = days / 30;
	days = days % 30;
	int daysfinal = days;
	printf("years: %d  , months: %d  days:  %d", yearsfinal, monthsfinal, daysfinal);

}
//מעבדת כיתה 2 שאלה 4
void calculateGrade()
{
	printf("write 3 grades and a test\n");
	int gradem1, gradem2, gradem3,testgrade;
	scanf_s("%d %d %d %d", &gradem1, &gradem2, &gradem3, &testgrade);
	int avgGradesm = (gradem1 + gradem2 + gradem3) / 3;
	int finalGrade = testgrade * 0.8 + avgGradesm * 0.2;
	printf(" your grade is: %d", finalGrade);
}
//מעבדת כיתה 2 שאלה 5
void power()
{
	printf("write a double num");
	double x;
	scanf_s("%lf", &x);
	double x2 = x * x;
	double x4 = x2 * x * x;
	double x6 = x4 * x * x;
	double x8 = x6 * x * x;
	printf("x^2: %.0f ;\nx^4: %.0f\nx^6: %.0f;\nx^8: %.0f", x2, x4, x6, x8);
		
}
//מעבדת כיתה 2 שאלה 6
void angryfly()
{
	float distanceAB,car1speed,car2speed,flyspeed;
	printf("write distance\n");
	scanf_s("%f", &distanceAB);
	printf("write car1 speed and than car2 speed\n");
	scanf_s("%f %f", &car1speed, &car2speed);
	printf("write the fly speed\n");
	scanf_s("%f", &flyspeed);
    float timetomeet = distanceAB / (car1speed + car2speed);
	float flydistance = timetomeet * flyspeed;
	printf("the fly distance: %.2f km\n", flydistance);
	
	
}
//מעבדת כיתה 3 שאלה 1
void max1()
{
	int a, b, c;
	printf("write 3 numbers\n");
	scanf_s("%d %d %d",&a,&b,&c);
	int max;
	if (a > b && b > c)
	{
		max = a;

	}
	if (b>a && a>c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	printf("%d", max);
	
	

}
//מעבדת כיתה 3 שאלה 2
void validnums()
{
	int num1, num2;
	printf("write two numbers\n");
	scanf_s("%d %d", &num1, &num2);
	if ((num1 % 2 == 0 && num2 % 2 == 0) && num1 % num2 == 0)
	{
		printf("valid numbers");
	}
	else
	{
		printf("invalid numbers");
	}
}
//מעבדת כיתה 3 שאלה 3
void threenumbers()
{
	int num;
	printf("write a 3 digit number\n");
	scanf_s("%d", &num);
	int n1, n2, n3;
	n1 = num / 100;
	n2 = (num / 10) % 10;
	n3 = num % 10;
	if (num > 999 || num < 100)
	{
		printf("invalid input\n");
	}
	else
	{
		if ((n1 == n2 && n2 == n3) || (n1>n2 && n2<n3) || (n1<n2 && n2>n3))
		{
			printf("neither ascending or descending");
		}
		else
		{
			if (n1 <= n2 && n2 <= n3)
			{
				if (n1 < n2 && n2 < n3)
				{
					printf("very ascending");
				}
				else
				{
					printf("ascending");
				}
			}
			else
			{
				if (n1 >= n2 && n2 >= n3)
				{
					if (n1 > n2 && n2 > n3)
					{
						printf("very descending");
					}
					else
					{
						printf("descending");
					}
				}
			}
		}
	}
}
//מעבדת כיתה 3 שאלה 4
void secs()
{
	int seconds;
	printf("write seconds\n");
	scanf_s("%d", &seconds);
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int Secs = (seconds % 3600) % 60 ;

	printf("%d : %d : %d", hours, minutes,Secs);
}

//מעבדת כיתה 3 שאלה 5
void nextday()
{
	printf("wrtie day/month/year\n");
	int day, month, year;
	bool meoberet = false;
	scanf_s("%d %d %d", &day, &month, &year);
	if (year % 100 == 0 && year % 400 == 0)
		 meoberet = true;
}

//מעבדת כיתה 4 שאלה 1 סעיף א
void or3or5()
{
	int sum = 0;
	for (size_t i = 15; i <= 1000; i+=15)
	{
		sum += i;
	}
	printf("%d\n", sum);
}

//מעבדת כיתה 4 שאלה 1 סעיף ב
void or3or5B()
{
	int sum5 = 0,sum3=0;
	for (size_t i = 5; i <= 1000; i+=5)
	{
		
           sum5 += i;
		
		
	}
	for (size_t i = 3; i <= 1000; i+=3)
	{
		if (i % 5 != 0 )
		{
           sum3 += i;
		}
		
	}
	printf("%d", sum3 + sum5);
}

//מעבדת כיתה 4 שאלה 2
void sidraDO()
{
	int n;
	printf("write a number\n");
	scanf_s("%d", &n);
	int i = 0;
	int pre, current;
	do
	{
		printf("write a number: ");
		if (i == 0)
		{
             scanf_s("%d", &current);
			 pre = 0;
		}  
		else if(i>0)
		{
			pre = current;
			scanf_s("%d", &current);
			
		}
		if (pre >= current && i > 0 )
			return  printf("not very ascending");
		


		i++;
	} while (i != n);
	printf("very ascending");
}

//מעבדת כיתה 4 שאלה 3
void sumzogiEzogi()
{
	int n;int sumzogi = 0, sumezogi = 0;
	printf("write a num\n");
	scanf_s("%d", &n);
	if (n <= 0)
		return;
	while ( n != 0)
	{
		if ((n %10) % 2 == 0)
			sumzogi += n % 10;
		else
			sumezogi += n % 10;
		n = n / 10;
	}
	int sum = sumzogi - sumezogi;
	printf("%d", sum);
}

int digitscount(int n)
{
	int digit;
	int counter = 0;
	while (n !=0)
	{
		digit = n % 10;
		counter++;
		n = n / 10;
	}
	return counter;
}
void binaryconverter()
{
	int binarynum;
	printf("write an binary number\n");
	scanf_s("%d", &binarynum);
	int numberofdigits = digitscount(binarynum);
	int firstdigit = binarynum / pow(10, numberofdigits );
	int digits;
	int number=0;
	int lastnumber = binarynum % 10;
	if (lastnumber == 1 && firstdigit == 0)
	{
		int i = numberofdigits ;
		while (binarynum != 0)
		{
			digits = binarynum % 10;
			number += digits * pow(2, i);
			binarynum = binarynum / 10;
			i--;
		}
	}
	else
	{
		int i = 0;
		while (binarynum !=0)
		{
			digits = binarynum % 10;
			number += digits * pow(2, i);
		    binarynum = binarynum / 10;
			i++;
		}
	}
	printf("%d", number);
	
}

//מעבדת כיתה 4 שאלה 5
void tmorot()
{
	for (size_t i = 0; i <= 7 ; i++)
	{
		for (size_t j = i+1; j <= 8; j++)
		{
			for (size_t k = j+1; k <= 9; k++)
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
}

//מעבדת כיתה 5 שאלה 1
int calculator(int num1,int num2,char op)
{
	switch (op)
	{
	case '+':
	{
		return num1 + num2;
	}
	case '-':
	{
		return num1 - num2;
	}
	case '*':
	{
		return num1 * num2;
	}
	case '/':
	{
		if (num2 != 0)
			return num1 / num2;
		else
		{
           printf("can't divide by zero: ");
		   return 0;
		}
					
			
	}
	case '%':
	{
		if (num2 != 0)
			return num1 % num2;
		else
		{
			printf("cant modolo by zero: ");
			return 0;
		}
			
	}
	default:
		printf("invalid oprator: ");
		return 0;
	}

	
}

//מעבדת כיתה 5 שאלה 2
int reversednumber(int n)
{
	int hezka = digitscount(n);
	int digit;
	int newnumber=0;
	while (n != 0)
	{
		digit = n % 10;
		newnumber += digit * pow(10, hezka-1);
		n = n / 10;
		hezka--;
	}
	return newnumber;
}

//מעבדת כיתה 5 שאלה 3
int sumnumbertimes(int n)
{
	int sum = 0;
	for (size_t i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

//מעבדת כיתה 5 שאלה 4
int rishoniolo(int n)
{
	
	if (n == 1)
		return 1;
	for (size_t i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


//מעבדת כיתה 5 שאלה 5
int greatestdivider3nums(int n1, int n2, int n3)
{
	int divider=0;
	for (size_t i = 1; i <=  fmin(n1,n2,n3) / 2; i++)
	{
		if (n1 % i == 0 && n2 % i ==0 & n3 % i == 0)
		{
			divider = i;
		}
		
	}
	return divider;
}

//מעבדת כיתה 6 שאלה 1
int ifhaszogi(int num)
{
	if (num == 0)
		return 0;
	if ((num % 10) % 2 == 0)
		return 1;
	ifhaszogi(num / 10);
}

//מעבדת כיתה מס 6 שאלה 2 א
int fibonachi(int n)
{
	if (n == 0 || n== 1)
		return n;

	return fibonachi(n-1) + fibonachi(n - 2);
}
//מעבדת כיתה 6 שאלה 2 ב
int fibonachinotrecursiv(int n)
{
	int a=0, b=1,temp;
	
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	for (size_t i = 2; i <= n; i++)
	{
		temp = b;
		b = a+b;
		a = temp;
	}
	return b;
}

//מעבדת כיתה 6 שאלה 3 א
int digitnumbers(int n)
{
	
	if (n == 0)
		return 1;
	if (n < 10)
		return 1;
	return  1 + digitnumbers(n / 10);
}

//מעבדת כיתה 6 שאלה 3 ב
int digitssum(int n)
{
	if (n == 0)
		return 0;
	return (n % 10) + digitssum(n / 10);
}

//מעבדת כיתה 6 שאלה 3 ג
int memuyan(int n)
{
	
	if (n < 10)
		return 1;
	
	int lastDigit = n % 10;
	int secondToLastDigit = (n / 10) % 10;

	
	if (lastDigit > secondToLastDigit) 
		return 0; 
	
	return memuyan(n / 10);
}

//מעבדת כיתה 6 שאלה 4
int smallerthennum(int num)
{
	int n;
	printf("write a number\n");
	scanf_s("%d", &n);
	if (n == -1)
		return 0;
	if (n < num && n!=-1)
		return 1 + smallerthennum(num);
    return smallerthennum(num);
}

//מעבדת כיתה 6 שאלה 5 א
int numtoone(int num)
{
	if (num == 1)
		return 1;
	printf("%d ", num);
	return numtoone(num - 1);
}

//מעבדת כיתה 6 שאלה 5 ב
int onetonum(int num)
{
   
	if (num == 1)
	{
		printf("%d ",num);
       return 1;
	}
		
	int n = onetonum(num - 1)+1;
	printf("%d ", n);
	return n;
	
}

//מעבדת כיתה 6 שאלה 5 ג
int numtoonetonum(int num)
{
	if (num == 1)
		printf("%d ", num);
	else
	{
		printf("%d ", num);
		numtoonetonum(num - 1);
		printf("%d ", num);
	}
}

//מעבדת כיתה 7 שאלה 1 א
void inputArray(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		printf("write a num\n");
		scanf_s("%d", arr + 1);
	}
}

//מעבדת כיתה 7 שאלה 1 ב
void inputArrayprint(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("[%d],",arr[i]);
	}
}



//מעבדת כיתה 7 שאלה 2
void arrCalc(int* arr, int n, int* max, int* min, int* sum, double* avg, int* isEven)
{
	int i;
	*max = 0, *min = arr[0],*sum = 0;
	*isEven = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > *max)
			*max = arr[i];
		if (arr[i]<*min)
			*min = arr[i];
		if (arr[i] % 2 == 0)
			*isEven = 1;
		*sum += arr[i];
	}
	*avg = (double)*sum / n;
}

//מעבדת כיתה 7 שאלה 5

void swap(int* num1Ptr, int* num2Ptr)
{
	int temp = *num1Ptr;
	*num1Ptr = *num2Ptr;
	*num2Ptr = temp;
}
int* switch1(int* arr, int size)
{
	int i,x;
	for (i = 0; i < size/2; i++)
	{
		swap(&arr[i], &arr[size - 1 - i]);
	}

	return arr;
}

void flipArrayRec(int* arr, int n)
{
	if (n > 1)
	{
		swap(arr, arr + n - 1);
		flipArrayRec(arr + 1, n - 2);
	}
}

//מעבדת כיתה 8 שאלה 1
double* inputarray(int n)
{
	double* arr = (double*)calloc(n, sizeof(double));
	for (size_t i = 0; i < n; i++)
	{
		printf("write a num\n");
		scanf_s("%lf", arr[i]);
	}
	return arr;
}


//מעבדת כיתה 8 שאלה 2
int* fibonachiarray(int size)
{
	int* arr = (int*)calloc(size+1,sizeof(int));
	arr[0] = 0;
	arr[1] = 1;
	int i;
	for (i = 2; i < size+1; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}


//מעבדת כיתה 8 שאלה 3
int themosttimes(int* arrnums,int size)
{
	int counterarr[] = {0,0,0,0,0,0,0,0,0,0};
	int i;
	for ( i = 0; i < size; i++)
	{
		counterarr[arrnums[i]]++;
		
	}
	int biggest = 0;
	int index;
	for ( i = 0; i < 9; i++)
	{
		if (counterarr[i] > biggest)
		{
           biggest = counterarr[i];
		   index = i;
		}
			
	}
	*arrnums = biggest;
	return index;
}

//מעבדת כיתה 8 שאלה 4
int ktimesarr(int* arr, int n, int k)
{
	int* counterarr = (int*)calloc(k, sizeof(int));
	int i;
	for  (i = 0; i < n; i++)
	{
		counterarr[arr[i]]++;
	}
	for (i = 0; i < k; i++)
	{
		if (i != counterarr[i])
			return 0;
	}
	return 1;
}

//מעבדת כיתה 8 שאלה 5
int subbigfromtiny(int* arr, int size, int a, int b)
{
	int* counterarr = (int*)calloc(b+1, sizeof(int));
	int i;
	for (i = 0; i <size; i++)
	{
		
		counterarr[arr[i]]++;
		int a = counterarr[arr[i]];
		
	}
	int biggest=0, tinest=b,indexbig=0,indexsmall=0 ;
	for (i = 0; i < b; i++)
	{	
		if (counterarr[i] == biggest && counterarr[i]!=0)
		{
				return b - a;
		}
	    if (counterarr[i] == tinest && counterarr[i] != 0)
		{
				return b - a;
		}
		if (counterarr[i] > biggest )
		{
			biggest = counterarr[i];
			indexbig = i;
		}	
	
		if (counterarr[i] < tinest && counterarr[i] !=0)
		{
			tinest = counterarr[i];
			indexsmall = i;
		}
	
	}
	return indexbig - indexsmall;
}

//מעבדת כיתה 9 שאלה 1
char* doubleit(char str[])
{
	char* result = (char*)malloc(2 * strlen(str)+1, sizeof(char));

	int i=0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	i=0;
	while (str[i] != '\0')
	{
		result[strlen(str) + i] = str[i];
		i++;
	}
	result[2*i] = '\0';
	return result;
}

//מעבדת כיתה 9 שאלה 2
char howmuchtimes(char* str, int* shows)
{
	int* letter_counter = (int*)calloc(27, sizeof(int));
	
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			letter_counter[str[i] - 'a']++;
		}
		i++;
	}
	int biggest_letter = 0, biggest_counter = 0;;
	for (i = 0; i < 27; i++)
	{
		if (letter_counter[i] > biggest_counter)
		{
			biggest_counter = letter_counter[i];
			biggest_letter = i;
		}
	}
	free(letter_counter);
	*shows = biggest_counter;
	return biggest_letter + 'a';

	//במיין
	/*char a[] = "aaa bb cc";
	int show;
	char c = howmuchtimes(a, &show);
	printf("%c,%d", c, show);*/
}

//מעבדת כיתה 9 שאלה 3
int takinolo1(char* str)
{
	if (strlen(str) <= 1)
		return 1;
	int flag=0;
	if (str[0] >= 'A' && str[0] <= 'Z' && str[1] >= 'A' && str[1] <= 'Z')
		flag = 1;
	if ((str[0] >= 'A' && str[0] <= 'Z' && str[1] >= 'a' && str[1] <= 'z') || (str[0] >= 'a' && str[0] <= 'z' && str[1] >= 'a' && str[1] <= 'z'))
		flag = 2;
	int i = 2;
	while (str[i]!='\0')
	{
		if (str[i]!= ' ' &&  flag == 1 && (str[i] < 'A' || str[i] >'Z'))
			return 0;
		if (str[i] != ' ' && flag == 2 && (str[i] < 'a' || str[i] > 'z'))
			return 0;
		i++;
	}
	return 1;
	
}

//מעבדת כיתה 9 שאלה 4
char* arrangeit(char* str)
{
	int i = 0, j=0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			j = i;
			while (str[j+1] != ' ' && str[j-1] != '\0')
			{
				str[j] = str[j + 1];
				if (str[j] == '\0')
					break;
				j++;	
			}	
		}
		i++;
	}
	return str;

	//במיין
	//char b[] = "he llo im afik";
	//char* a = arrangeit(b);
	//printf("%s", b);
}


//מעבדת כיתה 9 שאלה 5
int ifstrpalindrom(char* str)
{
	int i = 0,j=strlen(str)-1;
	while (i!=j && j!=i-1)
	{
		if (str[i] != str[j])
			return 0;
		i++;j--;
	}
	return 1;

	//במיין
	/*char a[] = "abba";
	printf("%d", ifstrpalindrom(a));*/
}