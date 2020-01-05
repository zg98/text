#include<iostream>

const  int Max=5;
int main(){
    using namespace  std;
    int fish[Max ]{};
    cout<<"请输入你掉上来鱼的斤数（按q退出）：\n";
 
    for (int i=0 ; i < Max; ++i)
    {
        cout<<"fish"<< i+1<<":\n";
        while  (!(cin>>fish[i]))//错误判 定
        {
            cin.clear();
            while (cin.get() !='\n')
            continue;

                cout<<"请输入数字：";
            
        }
        
       
       

    }
    return 0;





}