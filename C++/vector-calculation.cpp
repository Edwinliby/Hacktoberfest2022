#include <iostream>
#include <math.h>
using namespace std;
//Mohid Aamir 663-FET/BSEE/F19
class Vector{
	private:
		double i,j,k;
	public:
		//No argument constructor
		Vector():i(0),j(0),k(0){
		
		}
		// Three argument constructor
		Vector(double aa,double bb,double cc){
			i=aa;
			j==bb;
			k==cc;
			
		}
		//To get values
		void get(){
			cout<<"Enter the values of Vector"<<endl;
			cout<<"Enter the value of i "<<endl;
			cin>>i;
			cout<<"Enter the value of j "<<endl;
			cin>>j;
			cout<<"Enter the value of k "<<endl;
			cin>>k;
		}
		// to show the result
		void show(){
			cout<<"<"<<i<<","<<j<<","<<k<<">"<<endl;
			
		}
		//Function Decleration
double mod();
double Dot(const Vector& ) const;
Vector Cross( const Vector& ) const;
Vector Sub( const Vector& ) const;
		
Vector Add( const Vector& ) const;		
};
// mod Function definition
	double Vector::mod(){
			
			return sqrt((i*i)+(j*j)+(k*k));
		}
		// Dot Function definition
double Vector::Dot(const Vector& BB ) const{
	double temp;
	temp=i*BB.i+j*BB.j+k*BB.k;
	
return temp;


}
// cross Function definition
Vector Vector::Cross( const Vector& BB) const{
	
	Vector temp;
	temp.i=j*BB.k-k*BB.j;
	temp.j=k*BB.i-i*BB.k;
	temp.k=i*BB.j-j*BB.i;
	return temp;
	
}
// Sub Function definition
Vector Vector::Sub( const Vector& BB) const{
	Vector temp;
	temp.i=i-BB.i;
	temp.j=j-BB.j;
	temp.k=k-BB.k;
return temp;


}
// Add Function definition
Vector Vector::Add( const Vector& BB) const{
	Vector temp;
	temp.i=i+BB.i;
	temp.j=j+BB.j;
	temp.k=k+BB.k;
return temp;


}



int main(){
	char x;
	// Char b/c in program outputs mentioned in lab 5 what if user  asked to enter 'q' to exit program
	Vector A,B,C;  // objects creation
	
	cout<<"\t\t\tWelcome to Mohid's Vector calculations program"<<endl<<"\t\t\tMy name is:Mohid Aamir"<<"\t Reg no.:663-FET/BSEE/F19"<<endl;
do{ //using do while to repeat any operation
	cout<<"Enter the operation you want to perform"<<endl;
	cout<<"[1]-Magnitude of A vector"<<endl;
	cout<<"[2]-Dot product"<<endl;
	cout<<"[3]-cross product"<<endl;
	cout<<"[4]- A-B"<<endl;
	cout<<"[5]- A+B"<<endl;
	cout<<"[q] quit this program"<<endl;
	cin>>x;
	
	
	// I didn't take vector A and B value.B/C what if user wants to exit
	switch(x){
		case '1':A.get(); cout<<"mod of vector is = "<<A.mod()<<endl;break;
		case '2':A.get(); B.get(); cout<<"Dot product of two vector = "<<A.Dot(B)<<endl; break;
		case '3':A.get(); B.get(); C=A.Cross(B); cout<<"cross product of two vector = ";  C.show();   cout<<endl; break;
	    case '4':A.get(); B.get(); C=A.Sub(B);   cout<<"A-B = ";  C.show();  cout<<endl; break;
	    case '5':A.get(); B.get(); C=A.Add(B);   cout<<"A+B = ";  C.show();  cout<<endl; break;
	    case 'q':cout<<"Thanks for using my program"<<endl; break;
	    
	
	}
}
	while(x!='q');
}
	
	

	
	
	
	
	
	
	
	
	
	

