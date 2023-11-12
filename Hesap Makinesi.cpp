#include <iostream>
using namespace std;
main(){
	cout<<'\n'<<"--------------------------"<<'\n'<<'\n'<<"FK HESAP MAKINESI"<<'\n'<<'\n'<<"Hosgeldin hesap tarzini secin"<<'\n'<<'\n';
	cout<<"Toplama = t"<<'\n'<<"Cikarma = c"<<'\n'<<"Carpma = x"<<'\n'<<"Bolme = b"<<'\n'<<'\n';
	
	char t,c,x,b;
	
	char islem;
	cout<<"Yapmak istediginiz islemin harfini giriniz"<<endl;
	cin>>islem;
	float a,d;
	cout<<"Birinci Sayi = ";
	cin>>a;
	cout<<"Ikinci Sayi = ";
	cin>>d;
	int a1 = a+d;
	int a2 = a-d;
	int a3 = a*d;
	float a4 = a/d;
	
	if(islem=='t'){
		cout<<"Toplamanin Sonucu = "<<a1;
		return main();
	}
	else if(islem=='c') {
		cout<<"Cikarmanin Sonucu = "<<a2;
		return main();
	}
	else if(islem=='x'){
		cout<<"Carpaminin Sonucu = "<<a3;
		return main();
	}
	else if((float)islem=='b'){
		cout<<"Bolmenin Sonucu = "<<(float)a4;
			return main();
	}
}
