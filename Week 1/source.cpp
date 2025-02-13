/*Exercise 1.1*/

//#include<iostream>
//using namespace std;
//
//class Complex {
//private:
//	float re;
//	float im;
//public:
//	Complex(float r, float i)
//	{
//		re = r;
//		im = i;
//	}
//
//	Complex(float r)
//	{
//		re = r;
//		im = 0.0;
//	}
//
//	double magnitude() {
//		return sqrt(re * re + getimag() * getimag());
//	}
//
//	float getreal() { return re; }
//	float getimag() { return im; }
//
//	Complex operator*(Complex b1) {
//		Complex temp(0.0, 0.0);
//		temp.re = re * b1.re;
//		temp.im = im * b1.im;
//		return temp;
//	}
//
//	Complex operator=(Complex b1) {
//		re = b1.re;
//		im = b1.im;
//		return *this;
//	}
//
//	~Complex() {};
//};
//
//int main() {
//	Complex a(1.0, 3.0);
//	Complex b(5.5 , 1.0);
//	Complex c(0, 0);
//	cout << "a Real= " << a.getreal() << "\ta Imaginary= " << a.getimag() << endl;
//	cout << "b Real= " << b.getreal() << "\tb Imaginary= " << b.getimag() << endl;
//	c = a * b;
//	cout << "\nc Real= " << c.getreal() << "\tc Imaginary= " << c.getimag() << endl;
//	return 0;
//}

/*Exercise 1.2*/

//#include<iostream>
//using namespace std;
//template <class T>
//class mypair
//{
//	T a, b;
//public:
//	mypair(T first, T second) {
//		a = first;
//		b = second;
//	}
//	T getmax();
//	T getmin();
//};
//
//template <class T>
//T mypair<T>::getmax() {
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//template <class T>
//T mypair<T>::getmin() {
//	T retval;
//	retval = a < b ? a : b;
//	return retval;
//}
//
//int main()
//{
//	mypair <int>myobject(100, 75);
//	cout << "Maximum: " << myobject.getmax() << endl;
//	mypair <float>myobject2(10.3, 75.7);
//	cout << "Minimum: " << myobject2.getmin();
//	return 0;
//}

            /*Exercise 1.3*/

//#include<iostream>
//using namespace std;
//
//template <class T, int N>
//class mysequence
//{
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//	T minimum();
//	T maximum();
//};
//
///*
//@brief: sets value to a particular index
//@prams: x defines the index at which we have to save the value
//@prams: values defines the value that needs to be set to the index
//*/
//
//template <class T, int N>
//void mysequence<T, N>::setmember(int x, T value) {
//	memblock[x] = value;
//}
//
//template<class T, int N>
//T mysequence<T, N>::getmember(int x) {
//	return memblock[x];
//}
//
//template<class T, int N>
//T mysequence<T, N>::minimum()
//{
//	T minVal = memblock[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (memblock[i] < minVal) {
//			minVal = memblock[i];
//		}
//	}
//	return minVal;
//}
//
//template<class T, int N>
//T mysequence<T, N>::maximum()
//{
//	T maxVal = memblock[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (memblock[i] > maxVal) {
//			maxVal = memblock[i];
//		}
//	}
//	return maxVal;
//}
//
//int main()
//{
//	mysequence <int, 3> myints;
//	mysequence<double, 3> myfloats;
//
//	myints.setmember(0, 100);
//	myints.setmember(1, 45);
//	myints.setmember(2, 19);
//
//	myfloats.setmember(0, 3.1416);
//	myfloats.setmember(1, 8.0664);
//	myfloats.setmember(2, 3.1412);
//
//
//	cout << "\nInt Sequence: Min: " << myints.minimum() << "\tMax: " << myints.maximum() << "\n";
//	cout << "\nFloats Sequence: Min: " << myfloats.minimum() << "\tMax: " << myfloats.maximum() << "\n";
//	return 0;
//}	

  /*Exercise 1.4*/
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main(void)
//{
//    ofstream outFile;
//    outFile.open("fout.txt");
//    ifstream inFile("fin.txt");
//
//    char ch;
//    int count = 0;
//    int word = 0;
//    int sentence = 0;
//    bool inWord = false;
//
//    while (inFile.get(ch))
//    {
//        outFile << ch;
//        count++;
//
//        if ((ch != ' ' && ch != '\n' && ch != '\t') && !inWord) {
//            inWord = true;
//            word++;
//        }
//
//        else if (ch == ' ' || ch == '\n' || ch == '\t') {
//            inWord = false;
//        }
//
//        if (ch == '.' || ch == '!' || ch == '?') {
//            sentence++;
//        }
//    }
//
//    outFile << "\n\nCharacter Count = " << count;
//    outFile << "\nWord Count = " << word;
//    outFile << "\nSentence Count = " << sentence;
//
//    inFile.close();
//    outFile.close();
//    return 0;
//}
				
				
				/*Exercise 1.5*/

//#include<iostream>
//using namespace std;
//
//class House {
//	string owner, address;
//	int rooms;
//	double price;
//public:
//	House() {
//		owner = "Not yet Specified.";
//		address = "Not yet Specified.";
//		rooms = 0;
//		price = 0;
//	}
//
//	void input() {
//		cout << "Enter Owner: ";
//		cin >> owner;
//		cout << "Enter Address: ";
//		cin >> address;
//		cout << "Number of Bedrooms? : ";
//		cin >> rooms;
//		cout << "Price: ";
//		cin >> price;
//	}
//
//	void display() const {
//		cout << owner << "\t" << address << "\t" << rooms << "\t" << price << "\n";
//	}
//};
//
//int main() 
//{
//	const int max = 100;
//	int count = 0;
//	char yn;
//	House available[max];
//
//	while (count < max) {
//		available[count].input();
//
//		cout << "\nEnter Another House? [y/n] -> ";
//		cin >> yn;
//
//		if (yn != 'y' && yn != 'Y') {
//			break;
//		}
//		count++;
//	}
//
//	cout << "\nHouses entered: \nOwner\tAddress\tBedrooms\tPrice\n\n";
//	for (int i = 0; i <= count; i++) {
//		available[i].display();  // Display the data for each house
//	}
//}