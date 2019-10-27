

Complex operator +(const Complex &a,const Complex &b){
    Complex output;
    output.a=a.a+b.a;
    output.b=a.b+b.b;
    return output;
}
namespace std{
    ostream& operator<<(ostream& out,const Complex &output){
        return out<<output.a<<"+i"<<output.b;
    }
}
