#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
void swap1(int* num1Ptr, int* num2Ptr);
void sortParis(int* a, int size);
void sqeeze(char* str);
int rising_arr(int* arr, int size);
int* distsort(int* a, int n, int num);
void print_arr(int* arr, int size);
void removeDuplicates(char* str);
int question4_version1(int* arr, int n, double x);
int gimetria(char* str, int gimetria_arr[]);
int findcouple(int* arr, int n);
int qPalindrom(int* a, int n);
int is_permutation_of_palindrom(int* a, int n);
int check_if_different_elements(int* a, int* b, int n);
void print_arr12(int* arr, int size);

void main()
{
	
	
}
void print_arr12(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("[%d]", arr[i]);
	}
}
void swap1(int* num1Ptr, int* num2Ptr)
{
	int temp = *num1Ptr;
	*num1Ptr = *num2Ptr;
	*num2Ptr = temp;
}
//--------------------------------- מבחן מועד א תשפג -------------------------------------
//שאלה 1
void sortParis(int* a, int size)
{
	int i;
	for (i = 1; i < size / 2; i += 2)
		swap1(a + i, a + size - i);
}

//שאלה 2
void sqeeze(char* str)
{
	int* count = (int*)calloc(26, sizeof(int));
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		count[str[i] - 'a']++;
	}
	int pos = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (count[str[i] - 'a'] == 3)
		{
			str[pos++] == str[i];
			count[str[i] - 'a'] = 0;
		}
	}
	str[pos] = '\0';
	free(count);
}

//שאלה 3
int* distsort(int* a, int n, int num)
{
	int* new_arr = (int*)malloc(n * sizeof(int));
	assert(new_arr);
	int low = 0, high = n - 1,bpos=n-1;
	while (low<=high)
	{
		if (a[high] - num >= num - a[low])
		{
			new_arr[bpos--] = a[high--];
		}
		else
			new_arr[bpos--] = a[low++];
	}
	return new_arr;
}

//------------------------------------- תשפ_ב ---------------------------------
//שאלה 2

int rising_arr(int* arr, int size)
{
	if (size == 1)
		return 1;
	if (arr[0] < arr[1])
		return 1 + rising_arr(arr+1, size - 1);
	return 1;
}

//שאלה 3
void removeDuplicates(char* str)
{
	int count[26] = { 0 };
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		count[str[i] - 'a']++;
	}
	int pos = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (count[str[i] - 'a'] > 0)
		{
			str[pos++] = str[i];
			count[str[i] - 'a'] = 0;
		}
		
	}
	str[pos] = '\0';
	
}

//שאלה 4
int question4_version1(int* arr, int n, double x)
{
	int low = 0, mid, high = n - 1;
	while (low<=high)
	{
		mid = (high-low) / 2+low;
		if (arr[mid] <= x) {
			low = mid + 1;
		}
		else
		{
			if(mid >0 && arr[mid-1]<=x)
                return arr[mid];
			high = mid - 1;
			
		}
			
	}
	return arr[low];
}

//--------------------------------------------------- תשפ_א ------------------------------------------
//שאלה 2
int gimetria(char* str, int gimetria_arr[])
{
	if (strlen(str) == 1)
		return gimetria_arr[str[0] - 'a'];
	return gimetria_arr[str[0] - 'a'] + gimetria(str+1,gimetria_arr);

   //שמתי במיין
	/*int gimetria1[] = { 1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800 };
	char a[] = "exam";
	printf("%d", gimetria(&a, gimetria1));*/
}

//שאלה 4
int findcouple(int* arr, int n)
{
	int low = 0, mid, high = n - 1;
	while (low<=high)
	{
		mid = (high - low) / 2 +low;
		if (arr[mid] == arr[mid + 1])
			return arr[mid];
		if (arr[mid]== arr[0]+mid)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
}


//---------------------------------- מבחן 2019 א ------------------------
//שאלה 2
int qPalindrom(int* a, int n)
{
	if (n <= 1)
		return 1;
	if (a[0] == a[n - 1])
		return qPalindrom(a + 1, n - 2);
}

//שאלה 3
int is_permutation_of_palindrom(int* a, int n)
{
	int* count = (int*)calloc(n, sizeof(int));
	assert(count);
	int i;
	for (i = 0; i < n; i++)
	{
		count[a[i]]++;
	}
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		if (count[a[i]] % 2 != 0 && flag == 1)
		{
			free(count);
			return 0;
		}
		if (count[a[i]] % 2 != 0 && flag==0)
			flag = 1;
	}
	free(count);
	return 1;
}

//שאלה 4
int check_if_different_elements(int* a, int* b, int n)
{
	int ia = 0, ib = n - 1;
	while (ia<n && ib>=0)
	{
		if (a[ia] == b[ib])
			return 0;
		if (a[ia] < b[ib])
			ia++;
		else
			ib--;
	}
	return 1;
}

//שאלה 5
int is_sum(int* a, int* b, int n)
{

}