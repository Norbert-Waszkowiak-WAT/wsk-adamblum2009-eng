#include<iostream>
using namespace std;
int sum_array(int*a,int size){
    int suma = 0;
    for(int* p = a; p < a + size; p++){
        suma += *p;
    }
    return suma;
}
int main(){
    int promien[3]={1,2,3};
    int array[4]={4,5,6,7};
cout<<sum_array(promien,3)<<endl;
cout<<sum_array(array,4)<<endl;
return 0;
}