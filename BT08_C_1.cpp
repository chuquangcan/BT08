#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverse (char a[])
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	cout << size << endl;
	for (int i=0; i<=size/2; i++)
	{
		char tmp;
		tmp = a[i];
		a[i] = a[size-1-i];
		a[size-1-i] = tmp;
	}
}

void delete_char (char a[], char c)
{
	for (int i=0; a[i]!='\0'; i++)
	{
		if(a[i] == c)
		{
			for(int j = i; a[j]!='\0'; j++)
			{
				a[j] = a[j+1];
			}
		}
	}
}

void pad_right(char a[], int n)
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	if (size<n)
	{
		for (int i=size; i<n; i++)
		{
			a[i] = ' ';
		}	
	}
}

void pad_left(char a[], int n)
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	if (size<n)
	{
		for (int i=n-1; i>=n-size-1; i--)
		{
			a[i] = a[i-(n-size)];
		}	
		for (int i=0; i<n-size-1; i++)
		{
			a[i] = ' ';
		}
	} 
}

void truncate(char a[], int n)
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	if (size>n)
	{
		for (int i=n; i<size; i++)
			a[i]='\0';
	} 
}

bool is_palindrome(char a[])
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	for (int i=0; i<=size/2; i++)
	{
		if (a[i] != a[size-1-i])
			return false;
	}
	return true;
}

void trim_left(char a[])
{
	int i=0;
	while(a[i] == ' ')
	{
		for(int j = i; a[j]!='\0'; j++)
		{
			a[j] = a[j+1];
		}
	}
}

void trim_right(char  a[])
{
	int size = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		size++;
	}
	int i=size-1;
	while(a[i] == '*')
	{
		a[i] = '\0';
		i--;
	}
}

int main()
{
	char a[] = "     hehllo can*****";
	int size = sizeof a /sizeof(char);
	//reverse(a);
	//delete_char (a, 'h');
	//pad_right(a, 20);
	//pad_left(a, 20);
	//truncate(a, 2);
	//cout << is_palindrome(a) << endl;
	trim_right(a);
	size = sizeof a /sizeof(char);
	for (int i=0; i<size; i++)
	{
		cout << a[i];
	}
}
