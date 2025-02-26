		/* Example 3.2	*/

//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//void rev()
//{
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	_getch();
//	return 0;
//}

		/* Exercise 3.1	*/

//#include<iostream>
//using namespace std;
//
//int Power(int X, int N)
//{
//	if (N == 0)
//		return 1;
//	else
//		return(Power(X, N - 1) * X);
//}
//int main()
//{
//	int a = 2;
//	for (int i = 0; i <= 20; i++) {
//		cout << a << " ^ " << i << " = " << Power(a, i) << endl;
//	}
//}

		/* Exercise 3.2	*/

//#include<iostream>
//using namespace std;
//
//int Ackermann(int m, int n) {
//	if (m == 0)
//		return n + 1;
//
//	else if (m > 0 && n == 0)
//		return Ackermann(m - 1, 1);
//
//	else if (m > 0 && n > 0)
//		return Ackermann(m - 1, Ackermann(m, n - 1));
//}
//
//int main() 
//{
//	cout << Ackermann(3, 4) << endl;
//	return 0;
//}

		/* Exercise 3.3	*/

        #include<iostream>
        using namespace std;
        
        //int print(int x) //Print Numbers from n to zero
        //{
        //	if (x < 0)
        //	{
        //		return 1;
        //	}
        //	cout << x << " ";
        //	print(x - 1);
        //}
        
        //int Binomial(int a, int b) {
        //	if (a == b || b==0) {
        //		return 1;
        //	}
        //	else
        //	{
        //		return(Binomial(a - 1, b - 1) + Binomial(a - 1, b));
        //	}
        //}
        
        int Prime(int c, int d = -1) 
        {
            if (d == -1) {
                d = c - 1;
            }
        
            if (c <= 1) {
                cout << "Invalid Input\n";
                return 1;
            }
        
            if (c == 2) {
                cout << c << " is Prime!\n";
                exit(1);
            }
        
            if (d == 1) {
                cout << c << " is Prime!\n";
            }
        
            if (c % d == 0)
            {
                cout << c << " is Composite!\n";
                return 1;
            }
        
            return Prime(c, d - 1);
        }
        
        int main()
        {
            /*int a = 9;
            print(a);*/
            
            /*cout << endl << Binomial(7,10);*/
        
            Prime(27);
            Prime(13);
            Prime(-33);
            Prime(2);
        
            return 0;
        }