#include<iostream>
using namespace std;
void fun()
{ 
    int n;
    bool is_prime =true;
    if(n==0||n==1)
    {
        is_prime=false;
    }
        for(int j = 2; j <= n/2; ++j) {
    if (n%j == 0) {
      is_prime = false;
      break;
    }
        }
    return is_prime;
}

void inheri()
{
    class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total;
	public:
		void getDetails(void);
		void putDetails(void);
};
void student::getDetails(void)
{
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter total marks outof 500: ";
	cin >> total;
}
void student::putDetails(void)
{
	cout << "Student details:\n";
	cout << "Name:"<< name ;
	cout << ",Roll Number:" << rollNo;
	cout << ",Total:" << total ;
}
}


void constr()
{
    public:
    Parent()
	{
		cout << "Inside base class" << endl;
	}
};
class Child : public Parent
{
	public:
    Child()
	{
		cout << "Inside sub class" << endl;
	}
}
int compares(DM &a, DB &b)
{
    if ((b.feet * 0.0254) < a.meter)
    {
        cout << "Distance in meters and centimers is larger\n";
    }
    else
    {
        cout << "Distance in inches and feet is larger\n";
    }
}


void Poly()
{
    float area(int r)
{
    float a;float pi=3.14;
    a=pi*(r*r);
    return a;
}
float area(int l,int b)
{
    float a1;
    a1=l*b;
    return a1;
}
float area(int n,int bs,int h)
{
    float a2;
    a2=n*bs*h;
    return a2;
}
}


void opera()
{
    class Bank
{
    int c;
public:
    Bank()
    {
        c = 0;
    }
    Bank operator++(int)
    {
        c++;
    }
    int get_c()
    {
        return c;
    }

    Bank operator--(int)
    {
        c--;
    }
};
}


void poly()
{
    class A
{
public:
    int a[5];
    friend istream &operator>>(istream &din, A &ob);
    friend ostream &operator<<(ostream &dout, A &ob);
};
istream &operator>>(istream &din, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        din >> ob.a[i];
    }
    return din;
}
ostream &operator<<(ostream &dout, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        dout << ob.a[i] << " ";
    }
    return dout;
}
}


void template()
{
    template<class T>
T min ( T a ,T b)
{
    T samllest;
    smallest=(a<b)?a:b;
    return (smallest);
}
}


void stl()
{
    
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
}
int main()
{
    int c,n;
    do
    {
        cout<<"1. Function"<<endl;
        cout<<"2. Class and Object"<<endl;
        cout<<"3. Construtor and Destructor"<<endl;
        cout<<"4. Inheritence"<<endl;
        cout<<"5. Polymorphism"<<endl;
        cout<<"6. Operator overloading"<<endl;
        cout<<"7. File HAndling"<<endl;
        cout<<"8. Exception HAndling"<<endl;
        cout<<"9. Template"<<endl;
        cout<<"10. STL"<<endl;
        cout<<"11. EXIT"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>n;

        switch(c)
        {
            case 1:
                    int  n1,n2,i;
                    bool f;
                    cout<<"Enter 2 no.";
                    cin>>n1>>n2;
                    cout<<"prime no.between n1 and n2\n";
                    for(i=n1;i<n2;i=++i)
                    {
                        f=fun(i);
                        if(f)
                        cout<<i<<",";
                    }
            break;
            case 2:
                    student std;	
                    std.getDetails();
                    std.putDetails();
                    return 0;
            break;
            case 3:
                    DM a(20, 30);
                    DB b(100, 60);
                    compares(a, b);
            break;
            case 4:
                    int b,bs,h,r,l;
                    float are;
                    cout<<"\nEnter the Radius of Circle: \n";
                    cin>>r;
                    are=area(r);
                    cout<<"\nArea of Circle: "<<are<<endl;
                    cout<<"Enter the Base & Hieght of Triangle:\n";
                    cin>>bs;
                    cin>>h;
                    are=area(0.5,b,h);
                    cout<<"\nArea of Triangle: "<<are<<endl;
                    cout<<"\nEnter the Length & Bredth of Rectangle: \n";
                    cin>>l>>b;
                    are=area(l,b);
                    cout<<"\nArea of Rectangle: "<<are<<endl;
                    return 0;
            break;
            case 5:
                     A obj;
                    cin >> obj;
                    cout << obj;
                    return 0;
                break;
            case 6:
                    Bank b;
                    cout << "Initial No Of People " << b.get_c() << endl;
                    b++;
                    b++;
                    b++;
                    cout << "Present No Of People " << b.get_c() << endl;
                    b--;
                    b--;
                    b--;
                    cout << "Present No Of People " << b.get_c() << endl;
            break;
            break;
            case 7:
                    fstream my_file;
                    my_file.open("my_file.txt", ios::in);
                    if (!my_file) {
                        cout << "No such file";
                    }
                    else {
                        char ch;

                        while (1) {
                            my_file >> ch;
                            if (my_file.eof())
                                break;

                            cout << ch;
                        }

                    }
                    my_file.close();
                    return 0;
            break;
            case 8:

            break;
            case 9:
                     int i=5,j=6,s;
                    char c='a',d='z',cs;
                    string s1="car",s2="racecar",css;
                    s=std::min<int>(i,j);
                    cs=std::min<char>(c,d);
                    css=std::min<string>(s1,s2);
                    cout<<s<<endl;
                    cout<<cs<<endl;
                    cout<<css<<endl;
                    return 0;
            break;
            case 10:
                     
                        list<int> list1;  //empty list of 0 length
                    
                        list1.push_back(5);
                        list1.push_back(7);
                        list1.push_back(1);
                        list1.push_back(9);
                        list1.push_back(12);
                    
                        display(list1);
                    
                        return 0;
            break;
        }

    } while (c!=12);
    return 0;
}