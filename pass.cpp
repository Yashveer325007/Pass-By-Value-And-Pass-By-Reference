# include<iostream>
using namespace std;
/*Pass by value*/
void Pass(int n){
    n++;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    Pass(n);
    cout<<n;
}

/*Pass by reference*/
# include<iostream>
using namespace std;
/*Pass by value*/
void Pass(int &n){
    n++;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    Pass(n);
    cout<<n
