 // count number of notes
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter amount : ";
    cin>>n;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;
    switch(n>=2000){
        case 1 :
        n2000 = n / 2000;
        n -= 2000*n2000;
        break;
    }
    switch(n>=500){
        case 1 :
        n500 = n / 500;
        n -= 500*n500;
        break;
    }
    switch(n>=200){
        case 1 :
        n200 = n / 200;
        n -= 200*n200;
        break;
    }
    switch(n>=100){
        case 1 :
        n100 = n / 100;
        n -= 100*n100;
        break;
    }
    switch(n>=50){
        case 1 :
        n50= n / 50;
        n -= 50*n50;
        break;
    }
    switch(n>=20){
        case 1 :
        n20= n / 20 ;
        n -= 20*n20;
        break;
    }
    switch(n>=10){
        case 1 :
        n10= n / 10;
        n -= 10*n10;
        break;
    }
    switch(n>=5){
        case 1 :
        n5= n / 5;
        n -= 5*n5;
        break;
    }
    switch(n>=2){
        case 1 :
        n2= n / 2;
        n -= 2*n2;
        break;
    }
    switch(n>=1){
        case 1 :
        n1 = n / 1;
        n -= 1*n1;
        break;
    }
    cout<<n<<endl;
    cout<<"n2000 = "<<n2000<<endl;
    cout<<"n500 = "<<n500<<endl;
    cout<<"n200 = "<<n200<<endl;
    cout<<"n100 = "<<n100<<endl;
    cout<<"n50 = "<<n50<<endl;
    cout<<"n20 = "<<n20<<endl;
    cout<<"n10 = "<<n10<<endl;
    cout<<"n5 = "<<n5<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n1 = "<<n1<<endl;
    return 0 ;
}