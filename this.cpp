#include<iostream>
using namespace std;
class test{
    public:

    int number(string name){
        int sum=0;
        for(int i=0;i<name.length();i++){
            int j;
            for( j=0;j<name.length();j++){
                if(name[i]==name[j]){
                    sum++;
                }
            }
            int max= sum;
            cout<<"max is :"<<name[i]<<" "<<max<<endl;
            sum= 0;
        }
    }
};
int main(){
    test obj;
    string name= "sharndeepsinghhh";
    obj.number(name);
    return 0;
}