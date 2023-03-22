A1:

	void f(int xval)
	{
   		int x;
   		x = xval;
   		cout << &x << endl;
	}
	void g(int yval)
	{
  		int y;
   		cout << &y << endl;
	}
	int main()
	{
   		f(7);
   		g(11);
   		return 0;
	} 
	// nhận xét thấy địa chỉ hai biến x và y trong hai hàm là cùng nhau. Em đoán là khi x được gọi nhưng vì nó là biến cục bộ nên khi hàm kết thúc nó bị xóa và khi biến y khởi tạo lại vào vị trí đó



A2:

a/

int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) 
   {
      cout <<  (void*)cp << " : " << (*cp) << endl;
   } 
   return 0;
}

b/
int main( )
{ 
   int a[2] = {1,2};
   for (int *cp = a; (*cp) != '\0'; cp++)
   { 
	cout << (void*)cp << " : " << (*cp) << endl;
   }
   return 0;
}

c/
int main( )
{ 
   double a[2] = {1.0,2.5};
   for (int *cp = a; (*cp) != '\0'; cp++)
   { 
	cout << (void*)cp << " : " << (*cp) << endl;
   }
   return 0;
}

d/
int main( )
{ 
   double a[4] = {1.0,2.5,3.5,6.5};
   for (int *cp = a; (*cp) != '\0'; cp=cp+2)
   { 
	cout << (void*)cp << " : " << (*cp) << endl;
   }
   return 0;
}

// địa chỉ nhảy 16 kích thước 

A3:

#include <iostream>

using namespace std;
	
void swap_pointers(char** x, char** y)
{
   char *tmp = *x;
   	*x = *y;
	*y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}


