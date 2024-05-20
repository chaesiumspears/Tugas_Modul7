#include <iostream>
using namespace std;
void kalku (int *j,char *op, int *k){
    cin >>*j>>*op>>*k;};

    main(){
    system("cls");
    int tambah,kali,kurang,a,b;
    float bagi;
    char operasi;
    cout<<"masukkan operasi (cth: 2+3): ";
    kalku(&a,&operasi,&b);
    
    switch(operasi)
    {
        case'+':cout<<"hasil="<<a + b<<endl;break;
        case'-':cout<<"hasil="<<a - b<<endl;break;
        case'*':cout<<"hasil="<<a * b<<endl;break;
        case'/':cout<<"hasil="<<a / b<<endl;break;
        default:cout<<"error:operator hanya +,-,*,/\n";
    }
 }
